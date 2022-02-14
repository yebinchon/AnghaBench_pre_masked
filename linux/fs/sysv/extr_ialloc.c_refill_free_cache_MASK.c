
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {int s_ninodes; int s_fic_size; int s_inodes_per_block_1; } ;
struct sysv_inode {scalar_t__ i_mode; scalar_t__ i_nlink; } ;
struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct sysv_sb_info*,int) ;
 int * FUNC_3 (struct super_block*,int ) ;
 struct sysv_inode* FUNC_4 (struct super_block*,int,struct buffer_head**) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_1)
{
 struct sysv_sb_info *VAR_2 = FUNC_0(VAR_1);
 struct buffer_head * VAR_3;
 struct sysv_inode * VAR_4;
 int VAR_5 = 0, VAR_6;

 VAR_6 = VAR_0+1;
 VAR_4 = FUNC_4(VAR_1, VAR_6, &VAR_3);
 if (!VAR_4)
  goto out;
 while (VAR_6 <= VAR_2->s_ninodes) {
  if (VAR_4->i_mode == 0 && VAR_4->i_nlink == 0) {
   *FUNC_3(VAR_1,VAR_5++) = FUNC_2(FUNC_0(VAR_1), VAR_6);
   if (VAR_5 == VAR_2->s_fic_size)
    break;
  }
  if ((VAR_6++ & VAR_2->s_inodes_per_block_1) == 0) {
   FUNC_1(VAR_3);
   VAR_4 = FUNC_4(VAR_1, VAR_6, &VAR_3);
   if (!VAR_4)
    goto out;
  } else
   VAR_4++;
 }
 FUNC_1(VAR_3);
out:
 return VAR_5;
}
