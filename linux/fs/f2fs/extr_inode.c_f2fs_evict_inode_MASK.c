
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; scalar_t__ i_nlink; int i_sb; int i_data; } ;
struct f2fs_sb_info {int dummy; } ;
typedef scalar_t__ nid_t ;
struct TYPE_2__ {scalar_t__ i_xattr_nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct f2fs_sb_info* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct f2fs_sb_info*,scalar_t__,int ) ;
 int FUNC_12 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_13 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_14 (struct f2fs_sb_info*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 scalar_t__ FUNC_18 (struct inode*) ;
 int FUNC_19 (struct f2fs_sb_info*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct f2fs_sb_info*,scalar_t__,int ) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (struct f2fs_sb_info*) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (struct inode*) ;
 int FUNC_28 (struct inode*) ;
 scalar_t__ FUNC_29 (struct inode*) ;
 int FUNC_30 (struct inode*,int ) ;
 int FUNC_31 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_32 (struct inode*) ;
 scalar_t__ FUNC_33 (struct inode*,int ) ;
 int FUNC_34 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_35 (int) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (struct inode*,int ) ;
 int FUNC_39 (struct f2fs_sb_info*,int ) ;
 int FUNC_40 (struct inode*) ;
 int FUNC_41 (struct inode*) ;
 int FUNC_42 (struct inode*) ;
 scalar_t__ FUNC_43 (struct f2fs_sb_info*,int ) ;
 int FUNC_44 (struct inode*) ;
 int FUNC_45 (int *) ;

void FUNC_46(struct inode *VAR_14)
{
 struct f2fs_sb_info *VAR_15 = FUNC_2(VAR_14);
 nid_t VAR_16 = FUNC_1(VAR_14)->i_xattr_nid;
 int VAR_17 = 0;


 if (FUNC_18(VAR_14))
  FUNC_16(VAR_14);

 FUNC_44(VAR_14);
 FUNC_45(&VAR_14->i_data);

 if (VAR_14->i_ino == FUNC_4(VAR_15) ||
   VAR_14->i_ino == FUNC_3(VAR_15))
  goto out_clear;

 FUNC_13(VAR_15, FUNC_29(VAR_14));
 FUNC_20(VAR_14);

 FUNC_15(VAR_14);

 if (VAR_14->i_nlink || FUNC_32(VAR_14))
  goto no_delete;

 VAR_17 = FUNC_9(VAR_14);
 if (VAR_17) {
  VAR_17 = 0;
  FUNC_39(VAR_15, VAR_12);
 }

 FUNC_21(VAR_15, VAR_14->i_ino, VAR_0);
 FUNC_21(VAR_15, VAR_14->i_ino, VAR_13);
 FUNC_21(VAR_15, VAR_14->i_ino, VAR_10);

 FUNC_37(VAR_14->i_sb);
 FUNC_38(VAR_14, VAR_8);
 FUNC_30(VAR_14, 0);
retry:
 if (FUNC_0(VAR_14))
  VAR_17 = FUNC_24(VAR_14);

 if (FUNC_43(VAR_15, VAR_4)) {
  FUNC_23(VAR_4);
  VAR_17 = -VAR_1;
 }

 if (!VAR_17) {
  FUNC_19(VAR_15);
  VAR_17 = FUNC_22(VAR_14);
  FUNC_25(VAR_15);
  if (VAR_17 == -VAR_2)
   VAR_17 = 0;
 }


 if (VAR_17 == -VAR_3) {
  VAR_17 = 0;
  goto retry;
 }

 if (VAR_17) {
  FUNC_26(VAR_14);
  if (FUNC_10(VAR_14))
   FUNC_39(VAR_15, VAR_12);
 }
 FUNC_36(VAR_14->i_sb);
no_delete:
 FUNC_8(VAR_14);

 FUNC_42(VAR_14);
 FUNC_40(VAR_14);
 FUNC_41(VAR_14);

 if (FUNC_35(!FUNC_14(VAR_15) &&
    !FUNC_34(VAR_15, VAR_11)))
  FUNC_13(VAR_15, FUNC_33(VAR_14, VAR_6));
 else
  FUNC_17(VAR_14);


 if (VAR_14->i_ino)
  FUNC_31(FUNC_5(VAR_15), VAR_14->i_ino,
       VAR_14->i_ino);
 if (VAR_16)
  FUNC_31(FUNC_5(VAR_15), VAR_16, VAR_16);
 if (VAR_14->i_nlink) {
  if (FUNC_33(VAR_14, VAR_5))
   FUNC_11(VAR_15, VAR_14->i_ino, VAR_0);
  if (FUNC_33(VAR_14, VAR_9))
   FUNC_11(VAR_15, VAR_14->i_ino, VAR_13);
 }
 if (FUNC_33(VAR_14, VAR_7)) {
  FUNC_12(VAR_15, VAR_14->i_ino);
  FUNC_7(VAR_14, VAR_7);
 } else {





 }
out_clear:
 FUNC_27(VAR_14);
 FUNC_28(VAR_14);
 FUNC_6(VAR_14);
}
