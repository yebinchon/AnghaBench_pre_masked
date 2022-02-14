
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {unsigned int s_ninodes; unsigned int s_fic_size; int s_lock; int s_sb_total_free_inodes; void** s_sb_fic_count; } ;
struct sysv_inode {int dummy; } ;
struct super_block {int s_id; } ;
struct inode {unsigned int i_ino; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;


 unsigned int VAR_0 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (struct sysv_sb_info*,unsigned int) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct sysv_sb_info*,int ,int) ;
 unsigned int FUNC_5 (struct sysv_sb_info*,void*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct sysv_inode*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,...) ;
 void** FUNC_11 (struct super_block*,int ) ;
 struct sysv_inode* FUNC_12 (struct super_block*,unsigned int,struct buffer_head**) ;

void FUNC_13(struct inode * VAR_1)
{
 struct super_block *VAR_2 = VAR_1->i_sb;
 struct sysv_sb_info *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4;
 struct buffer_head * VAR_5;
 struct sysv_inode * VAR_6;
 unsigned VAR_7;

 VAR_2 = VAR_1->i_sb;
 VAR_4 = VAR_1->i_ino;
 if (VAR_4 <= VAR_0 || VAR_4 > VAR_3->s_ninodes) {
  FUNC_10("sysv_free_inode: inode 0,1,2 or nonexistent inode\n");
  return;
 }
 VAR_6 = FUNC_12(VAR_2, VAR_4, &VAR_5);
 if (!VAR_6) {
  FUNC_10("sysv_free_inode: unable to read inode block on device "
         "%s\n", VAR_1->i_sb->s_id);
  return;
 }
 FUNC_8(&VAR_3->s_lock);
 VAR_7 = FUNC_5(VAR_3, *VAR_3->s_sb_fic_count);
 if (VAR_7 < VAR_3->s_fic_size) {
  *FUNC_11(VAR_2,VAR_7++) = FUNC_2(VAR_3, VAR_4);
  *VAR_3->s_sb_fic_count = FUNC_2(VAR_3, VAR_7);
 }
 FUNC_4(VAR_3, VAR_3->s_sb_total_free_inodes, 1);
 FUNC_3(VAR_2);
 FUNC_7(VAR_6, 0, sizeof(struct sysv_inode));
 FUNC_6(VAR_5);
 FUNC_9(&VAR_3->s_lock);
 FUNC_1(VAR_5);
}
