
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
typedef scalar_t__ sysv_ino_t ;
struct writeback_control {int sync_mode; } ;
struct sysv_sb_info {int s_lock; int s_sb_total_free_inodes; scalar_t__* s_sb_fic_count; } ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_blocks; int i_ctime; int i_atime; int i_mtime; void* i_ino; struct super_block* i_sb; } ;
struct TYPE_2__ {scalar_t__ i_dir_start_lookup; int i_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct sysv_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct sysv_sb_info*,unsigned int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct sysv_sb_info*,int ,int) ;
 void* FUNC_7 (struct sysv_sb_info*,scalar_t__) ;
 int FUNC_8 (struct inode*,struct inode const*,int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct inode* FUNC_15 (struct super_block*) ;
 unsigned int FUNC_16 (struct super_block*) ;
 scalar_t__* FUNC_17 (struct super_block*,unsigned int) ;
 int FUNC_18 (struct inode*,struct writeback_control*) ;

struct inode * FUNC_19(const struct inode * VAR_3, umode_t VAR_4)
{
 struct super_block *VAR_5 = VAR_3->i_sb;
 struct sysv_sb_info *VAR_6 = FUNC_2(VAR_5);
 struct inode *VAR_7;
 sysv_ino_t VAR_8;
 unsigned VAR_9;
 struct writeback_control VAR_10 = {
  .sync_mode = VAR_2
 };

 VAR_7 = FUNC_15(VAR_5);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_13(&VAR_6->s_lock);
 VAR_9 = FUNC_7(VAR_6, *VAR_6->s_sb_fic_count);
 if (VAR_9 == 0 || (*FUNC_17(VAR_5,VAR_9-1) == 0)) {
  VAR_9 = FUNC_16(VAR_5);
  if (VAR_9 == 0) {
   FUNC_10(VAR_7);
   FUNC_14(&VAR_6->s_lock);
   return FUNC_0(-VAR_1);
  }
 }

 VAR_8 = *FUNC_17(VAR_5,--VAR_9);
 *VAR_6->s_sb_fic_count = FUNC_3(VAR_6, VAR_9);
 FUNC_6(VAR_6, VAR_6->s_sb_total_free_inodes, -1);
 FUNC_5(VAR_5);
 FUNC_8(VAR_7, VAR_3, VAR_4);
 VAR_7->i_ino = FUNC_7(VAR_6, VAR_8);
 VAR_7->i_mtime = VAR_7->i_atime = VAR_7->i_ctime = FUNC_4(VAR_7);
 VAR_7->i_blocks = 0;
 FUNC_12(FUNC_1(VAR_7)->i_data, 0, sizeof(FUNC_1(VAR_7)->i_data));
 FUNC_1(VAR_7)->i_dir_start_lookup = 0;
 FUNC_9(VAR_7);
 FUNC_11(VAR_7);

 FUNC_18(VAR_7, &VAR_10);
 FUNC_11(VAR_7);

 FUNC_14(&VAR_6->s_lock);
 return VAR_7;
}
