
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int * s_fs_info; } ;
struct f2fs_sb_info {int s_encoding; struct f2fs_sb_info** write_io; int write_io_dummy; struct f2fs_sb_info* raw_super; scalar_t__ s_chksum_driver; struct f2fs_sb_info* ckpt; int * meta_inode; int * node_inode; int fsync_node_num; int umount_mutex; int discard_blks; } ;
struct cp_control {int reason; } ;
struct TYPE_2__ {struct f2fs_sb_info** s_qf_names; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_0 (struct f2fs_sb_info*) ;
 struct f2fs_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct f2fs_sb_info*) ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_10 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 int FUNC_13 (struct f2fs_sb_info*) ;
 int FUNC_14 (struct super_block*) ;
 int FUNC_15 (struct f2fs_sb_info*,int) ;
 int FUNC_16 (struct f2fs_sb_info*) ;
 int FUNC_17 (struct f2fs_sb_info*) ;
 int FUNC_18 (struct f2fs_sb_info*,struct cp_control*) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (struct f2fs_sb_info*,int ) ;
 int FUNC_21 (struct f2fs_sb_info*,int ) ;
 int FUNC_22 (struct f2fs_sb_info*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ) ;

__attribute__((used)) static void FUNC_27(struct super_block *VAR_6)
{
 struct f2fs_sb_info *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;
 bool VAR_9;

 FUNC_14(VAR_6);


 FUNC_24(&VAR_7->umount_mutex);






 if ((FUNC_20(VAR_7, VAR_5) ||
   !FUNC_21(VAR_7, VAR_2))) {
  struct cp_control VAR_10 = {
   .reason = VAR_1,
  };
  FUNC_18(VAR_7, &VAR_10);
 }


 VAR_9 = FUNC_12(VAR_7);

 if ((FUNC_11(VAR_7) || FUNC_10(VAR_7)) &&
     !VAR_7->discard_blks && !VAR_9) {
  struct cp_control VAR_11 = {
   .reason = VAR_1 | VAR_0,
  };
  FUNC_18(VAR_7, &VAR_11);
 }





 FUNC_15(VAR_7, 1);

 FUNC_13(VAR_7);
 FUNC_25(&VAR_7->umount_mutex);


 FUNC_9(VAR_7);

 FUNC_17(VAR_7);

 FUNC_5(VAR_7, VAR_7->fsync_node_num);

 FUNC_19(VAR_7->node_inode);
 VAR_7->node_inode = ((void*)0);

 FUNC_19(VAR_7->meta_inode);
 VAR_7->meta_inode = ((void*)0);





 FUNC_8(VAR_7);


 FUNC_6(VAR_7);
 FUNC_7(VAR_7);

 FUNC_22(VAR_7->ckpt);

 FUNC_16(VAR_7);

 VAR_6->s_fs_info = ((void*)0);
 if (VAR_7->s_chksum_driver)
  FUNC_2(VAR_7->s_chksum_driver);
 FUNC_22(VAR_7->raw_super);

 FUNC_3(VAR_7);
 FUNC_23(VAR_7->write_io_dummy);




 FUNC_4(VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  FUNC_22(VAR_7->write_io[VAR_8]);



 FUNC_22(VAR_7);
}
