
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct writeback_control {int for_reclaim; int nr_to_write; int sync_mode; } ;
struct inode {int i_ino; int i_sb; int i_mode; } ;
struct file {TYPE_1__* f_mapping; } ;
struct f2fs_sb_info {int * wb_sync_req; } ;
typedef int nid_t ;
typedef int loff_t ;
typedef enum cp_reason_type { ____Placeholder_cp_reason_type } cp_reason_type ;
struct TYPE_8__ {int i_sem; } ;
struct TYPE_7__ {scalar_t__ fsync_mode; } ;
struct TYPE_6__ {scalar_t__ min_fsync_blocks; } ;
struct TYPE_5__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 TYPE_3__ FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_3 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_10 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_11 (struct f2fs_sb_info*,struct inode*,struct writeback_control*,int,unsigned int*) ;
 int FUNC_12 (struct f2fs_sb_info*,int ) ;
 int FUNC_13 (struct inode*,int) ;
 scalar_t__ FUNC_14 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_17 (struct inode*,int) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (struct f2fs_sb_info*,int ) ;
 int FUNC_21 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_22 (struct inode*,int *) ;
 int FUNC_23 (struct file*,int ,int ) ;
 scalar_t__ FUNC_24 (struct inode*) ;
 scalar_t__ FUNC_25 (struct inode*,int ) ;
 scalar_t__ FUNC_26 (struct f2fs_sb_info*,int ) ;
 int FUNC_27 (struct inode*) ;
 scalar_t__ FUNC_28 (struct f2fs_sb_info*,int ) ;
 int FUNC_29 (struct inode*,int ) ;
 int FUNC_30 (struct inode*) ;
 int FUNC_31 (struct inode*,int,int,int) ;
 int FUNC_32 (struct inode*) ;
 scalar_t__ FUNC_33 (int) ;
 int FUNC_34 (int *) ;

__attribute__((used)) static int FUNC_35(struct file *VAR_13, loff_t VAR_14, loff_t VAR_15,
      int VAR_16, bool VAR_17)
{
 struct inode *VAR_18 = VAR_13->f_mapping->host;
 struct f2fs_sb_info *VAR_19 = FUNC_1(VAR_18);
 nid_t VAR_20 = VAR_18->i_ino;
 int VAR_21 = 0;
 enum cp_reason_type VAR_22 = 0;
 struct writeback_control VAR_23 = {
  .sync_mode = VAR_12,
  .nr_to_write = VAR_7,
  .for_reclaim = 0,
 };
 unsigned int VAR_24 = 0;

 if (FUNC_33(FUNC_15(VAR_18->i_sb) ||
    FUNC_26(VAR_19, VAR_10)))
  return 0;

 FUNC_30(VAR_18);

 if (FUNC_4(VAR_18->i_mode))
  goto go_write;


 if (VAR_16 || FUNC_24(VAR_18) <= FUNC_3(VAR_19)->min_fsync_blocks)
  FUNC_29(VAR_18, VAR_3);
 VAR_21 = FUNC_23(VAR_13, VAR_14, VAR_15);
 FUNC_7(VAR_18, VAR_3);

 if (VAR_21) {
  FUNC_31(VAR_18, VAR_22, VAR_16, VAR_21);
  return VAR_21;
 }


 if (!FUNC_17(VAR_18, VAR_16)) {
  FUNC_22(VAR_18, ((void*)0));
  goto go_write;
 }




 if (!FUNC_25(VAR_18, VAR_2) &&
   !FUNC_10(VAR_19, VAR_20, VAR_0)) {


  if (FUNC_28(VAR_19, VAR_20))
   goto go_write;

  if (FUNC_25(VAR_18, VAR_4) ||
    FUNC_10(VAR_19, VAR_20, VAR_11))
   goto flush_out;
  goto out;
 }
go_write:




 FUNC_8(&FUNC_0(VAR_18)->i_sem);
 VAR_22 = FUNC_27(VAR_18);
 FUNC_34(&FUNC_0(VAR_18)->i_sem);

 if (VAR_22) {

  VAR_21 = FUNC_18(VAR_18->i_sb, 1);





  FUNC_32(VAR_18);
  FUNC_7(VAR_18, VAR_2);
  FUNC_7(VAR_18, VAR_4);
  goto out;
 }
sync_nodes:
 FUNC_6(&VAR_19->wb_sync_req[VAR_8]);
 VAR_21 = FUNC_11(VAR_19, VAR_18, &VAR_23, VAR_17, &VAR_24);
 FUNC_5(&VAR_19->wb_sync_req[VAR_8]);
 if (VAR_21)
  goto out;


 if (FUNC_33(FUNC_9(VAR_19))) {
  VAR_21 = -VAR_1;
  goto out;
 }

 if (FUNC_14(VAR_19, VAR_20)) {
  FUNC_13(VAR_18, 1);
  FUNC_22(VAR_18, ((void*)0));
  goto sync_nodes;
 }
 if (!VAR_17) {
  VAR_21 = FUNC_21(VAR_19, VAR_24);
  if (VAR_21)
   goto out;
 }


 FUNC_16(VAR_19, VAR_20, VAR_0);
 FUNC_7(VAR_18, VAR_2);
flush_out:
 if (!VAR_17 && FUNC_2(VAR_19).fsync_mode != VAR_6)
  VAR_21 = FUNC_12(VAR_19, VAR_18->i_ino);
 if (!VAR_21) {
  FUNC_16(VAR_19, VAR_20, VAR_11);
  FUNC_7(VAR_18, VAR_4);
  FUNC_16(VAR_19, VAR_20, VAR_5);
 }
 FUNC_20(VAR_19, VAR_9);
out:
 FUNC_31(VAR_18, VAR_22, VAR_16, VAR_21);
 FUNC_19(((void*)0), 1);
 return VAR_21;
}
