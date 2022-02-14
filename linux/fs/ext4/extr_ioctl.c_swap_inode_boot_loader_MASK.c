
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_nlink; int i_bytes; scalar_t__ i_blocks; int i_ino; int i_sb; void* i_generation; int i_ctime; int i_mode; scalar_t__ i_flags; int i_data; int i_mapping; } ;
struct ext4_inode_info {int i_flags; int i_mmap_sem; int i_data; } ;
typedef int qsize_t ;
typedef struct inode handle_t ;
typedef scalar_t__ blkcnt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 long FUNC_7 (struct inode*) ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct inode*,int) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*,struct inode*) ;
 int FUNC_17 (struct inode*,struct inode*) ;
 int FUNC_18 (struct inode*,struct inode*) ;
 scalar_t__ FUNC_19 (struct super_block*) ;
 scalar_t__ FUNC_20 (struct inode*) ;
 struct inode* FUNC_21 (struct super_block*,int ,int ) ;
 struct inode* FUNC_22 (struct inode*,int ,int) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (struct inode*,struct inode*) ;
 int FUNC_25 (struct inode*,int ) ;
 int FUNC_26 (int ,char*,int ,int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct inode*,int ) ;
 int FUNC_29 (struct inode*,int ) ;
 int FUNC_30 (struct inode*,int ) ;
 int FUNC_31 (struct inode*) ;
 int FUNC_32 (struct inode*) ;
 int FUNC_33 (struct inode*,int) ;
 int FUNC_34 (struct inode*) ;
 int FUNC_35 (struct inode*,struct inode*) ;
 int FUNC_36 (int ,int ,int) ;
 void* FUNC_37 () ;
 int FUNC_38 (struct inode*) ;
 int FUNC_39 (struct inode*,int) ;
 int FUNC_40 (struct inode*,struct inode*) ;
 int FUNC_41 (int *,int ) ;
 int FUNC_42 (struct inode*,struct inode*) ;
 int FUNC_43 (int *) ;

__attribute__((used)) static long FUNC_44(struct super_block *VAR_9,
    struct inode *VAR_10)
{
 handle_t *VAR_11;
 int VAR_12;
 struct inode *VAR_13;
 struct ext4_inode_info *VAR_14;
 qsize_t VAR_15, VAR_16, VAR_17;
 blkcnt_t VAR_18;
 unsigned short VAR_19;

 VAR_13 = FUNC_21(VAR_9, VAR_3, VAR_5);
 if (FUNC_3(VAR_13))
  return FUNC_7(VAR_13);
 VAR_14 = FUNC_0(VAR_13);



 FUNC_35(VAR_10, VAR_13);

 if (VAR_10->i_nlink != 1 || !FUNC_8(VAR_10->i_mode) ||
     FUNC_6(VAR_10) || FUNC_2(VAR_10) ||
     (FUNC_0(VAR_10)->i_flags & VAR_7) ||
     FUNC_20(VAR_10)) {
  VAR_12 = -VAR_1;
  goto journal_err_out;
 }

 if (FUNC_5(VAR_10) || FUNC_1(VAR_10) || FUNC_4(VAR_10) ||
     !FUNC_32(VAR_10) || !FUNC_9(VAR_0)) {
  VAR_12 = -VAR_2;
  goto journal_err_out;
 }

 FUNC_11(&FUNC_0(VAR_10)->i_mmap_sem);
 VAR_12 = FUNC_27(VAR_10->i_mapping);
 if (VAR_12)
  goto err_out;

 VAR_12 = FUNC_27(VAR_13->i_mapping);
 if (VAR_12)
  goto err_out;


 FUNC_31(VAR_10);
 FUNC_31(VAR_13);

 FUNC_41(&VAR_10->i_data, 0);
 FUNC_41(&VAR_13->i_data, 0);

 VAR_11 = FUNC_22(VAR_13, VAR_4, 2);
 if (FUNC_3(VAR_11)) {
  VAR_12 = -VAR_1;
  goto err_out;
 }


 FUNC_16(VAR_10, VAR_13);

 if (VAR_13->i_nlink == 0) {

  FUNC_39(VAR_13, 1);
  FUNC_30(VAR_13, 0);
  FUNC_28(VAR_13, 0);
  VAR_13->i_flags = 0;
  VAR_14->i_flags = 0;
  FUNC_33(VAR_13, 1);
  FUNC_29(VAR_13, 0);
  VAR_13->i_mode = VAR_8;
  if (FUNC_19(VAR_9)) {
   FUNC_25(VAR_13, VAR_6);
   FUNC_18(VAR_11, VAR_13);
  } else
   FUNC_36(VAR_14->i_data, 0, sizeof(VAR_14->i_data));
 }

 VAR_12 = FUNC_14(VAR_10);
 if (VAR_12)
  goto err_out1;

 VAR_15 = (qsize_t)(VAR_10->i_blocks) * (1 << 9) + VAR_10->i_bytes;
 VAR_16 = (qsize_t)(VAR_13->i_blocks) * (1 << 9) + VAR_13->i_bytes;
 VAR_17 = VAR_15 - VAR_16;
 FUNC_40(VAR_10, VAR_13);

 VAR_10->i_ctime = VAR_13->i_ctime = FUNC_10(VAR_10);

 VAR_10->i_generation = FUNC_37();
 VAR_13->i_generation = FUNC_37();
 FUNC_38(VAR_10);
 FUNC_38(VAR_13);

 FUNC_15(VAR_10);

 VAR_12 = FUNC_24(VAR_11, VAR_10);
 if (VAR_12 < 0) {

  FUNC_26(VAR_10->i_sb,
   "couldn't mark inode #%lu dirty (err %d)",
   VAR_10->i_ino, VAR_12);

  FUNC_40(VAR_10, VAR_13);
  FUNC_24(VAR_11, VAR_10);
  goto err_out1;
 }

 VAR_18 = VAR_13->i_blocks;
 VAR_19 = VAR_13->i_bytes;
 VAR_13->i_blocks = VAR_10->i_blocks;
 VAR_13->i_bytes = VAR_10->i_bytes;
 VAR_12 = FUNC_24(VAR_11, VAR_13);
 if (VAR_12 < 0) {

  FUNC_26(VAR_13->i_sb,
   "couldn't mark inode #%lu dirty (err %d)",
   VAR_13->i_ino, VAR_12);
  goto revert;
 }


 if (VAR_17 > 0)
  FUNC_13(VAR_10, VAR_17);
 else
  VAR_12 = FUNC_12(VAR_10, -1 * VAR_17);

 if (VAR_12 < 0) {
revert:

  VAR_13->i_blocks = VAR_18;
  VAR_13->i_bytes = VAR_19;
  FUNC_40(VAR_10, VAR_13);
  FUNC_24(VAR_11, VAR_10);
  FUNC_24(VAR_11, VAR_13);
 }

err_out1:
 FUNC_23(VAR_11);
 FUNC_17(VAR_10, VAR_13);

err_out:
 FUNC_43(&FUNC_0(VAR_10)->i_mmap_sem);
journal_err_out:
 FUNC_42(VAR_10, VAR_13);
 FUNC_34(VAR_13);
 return VAR_12;
}
