
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {int s_ninodes; int s_inodes_per_block_1; int * s_sb_total_free_inodes; int s_lock; } ;
struct sysv_inode {scalar_t__ i_mode; scalar_t__ i_nlink; } ;
struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct sysv_sb_info*,int) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct sysv_sb_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct super_block*) ;
 struct sysv_inode* FUNC_9 (struct super_block*,int,struct buffer_head**) ;

unsigned long FUNC_10(struct super_block * VAR_1)
{
 struct sysv_sb_info *VAR_2 = FUNC_0(VAR_1);
 struct buffer_head * VAR_3;
 struct sysv_inode * VAR_4;
 int VAR_5, VAR_6, VAR_7;

 FUNC_5(&VAR_2->s_lock);

 VAR_7 = FUNC_4(VAR_2, *VAR_2->s_sb_total_free_inodes);

 if (0)
  goto trust_sb;


 VAR_6 = 0;
 VAR_5 = VAR_0+1;
 VAR_4 = FUNC_9(VAR_1, VAR_5, &VAR_3);
 if (!VAR_4)
  goto Eio;
 while (VAR_5 <= VAR_2->s_ninodes) {
  if (VAR_4->i_mode == 0 && VAR_4->i_nlink == 0)
   VAR_6++;
  if ((VAR_5++ & VAR_2->s_inodes_per_block_1) == 0) {
   FUNC_1(VAR_3);
   VAR_4 = FUNC_9(VAR_1, VAR_5, &VAR_3);
   if (!VAR_4)
    goto Eio;
  } else
   VAR_4++;
 }
 FUNC_1(VAR_3);
 if (VAR_6 != VAR_7)
  goto Einval;
out:
 FUNC_6(&VAR_2->s_lock);
 return VAR_6;

Einval:
 FUNC_7("sysv_count_free_inodes: "
  "free inode count was %d, correcting to %d\n",
  VAR_7, VAR_6);
 if (!FUNC_8(VAR_1)) {
  *VAR_2->s_sb_total_free_inodes = FUNC_2(FUNC_0(VAR_1), VAR_6);
  FUNC_3(VAR_1);
 }
 goto out;

Eio:
 FUNC_7("sysv_count_free_inodes: unable to read inode table\n");
trust_sb:
 VAR_6 = VAR_7;
 goto out;
}
