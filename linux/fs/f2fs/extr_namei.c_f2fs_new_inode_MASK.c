
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_flags; int i_mode; int i_generation; int i_mtime; int i_ctime; int i_atime; scalar_t__ i_blocks; int i_ino; int i_sb; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int nid_t ;
struct TYPE_4__ {int i_current_depth; int i_flags; int i_inline_xattr_size; int i_extra_isize; int i_projid; int i_crtime; } ;
struct TYPE_3__ {int inline_xattr_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_6 ;
 struct f2fs_sb_info* FUNC_3 (struct inode*) ;
 TYPE_1__ FUNC_4 (struct f2fs_sb_info*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_18 ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct f2fs_sb_info*,int *) ;
 int FUNC_12 (struct f2fs_sb_info*,int) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (struct inode*) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*,int *) ;
 int FUNC_17 (struct f2fs_sb_info*) ;
 int FUNC_18 (int ,int) ;
 scalar_t__ FUNC_19 (struct inode*) ;
 scalar_t__ FUNC_20 (struct inode*) ;
 scalar_t__ FUNC_21 (struct inode*) ;
 scalar_t__ FUNC_22 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_23 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_24 (struct f2fs_sb_info*) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (struct f2fs_sb_info*) ;
 int VAR_19 ;
 int FUNC_28 (struct inode*,struct inode*,int ) ;
 int FUNC_29 (struct inode*) ;
 int FUNC_30 (struct inode*) ;
 int FUNC_31 (struct inode*) ;
 int FUNC_32 (int *,int ) ;
 struct inode* FUNC_33 (int ) ;
 int FUNC_34 () ;
 int FUNC_35 (struct inode*,int ) ;
 int FUNC_36 (struct inode*) ;
 int FUNC_37 (struct inode*) ;
 int FUNC_38 (struct inode*) ;
 scalar_t__ FUNC_39 (struct f2fs_sb_info*,int ) ;
 int FUNC_40 (struct inode*,int) ;
 int FUNC_41 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_42(struct inode *VAR_20, umode_t VAR_21)
{
 struct f2fs_sb_info *VAR_22 = FUNC_3(VAR_20);
 nid_t VAR_23;
 struct inode *VAR_24;
 bool VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27;

 VAR_24 = FUNC_33(VAR_20->i_sb);
 if (!VAR_24)
  return FUNC_1(-VAR_2);

 FUNC_17(VAR_22);
 if (!FUNC_11(VAR_22, &VAR_23)) {
  FUNC_27(VAR_22);
  VAR_27 = -VAR_3;
  goto fail;
 }
 FUNC_27(VAR_22);

 VAR_25 = 1;

 FUNC_28(VAR_24, VAR_20, VAR_21);

 VAR_24->i_ino = VAR_23;
 VAR_24->i_blocks = 0;
 VAR_24->i_mtime = VAR_24->i_atime = VAR_24->i_ctime = FUNC_8(VAR_24);
 FUNC_2(VAR_24)->i_crtime = VAR_24->i_mtime;
 VAR_24->i_generation = FUNC_34();

 if (FUNC_6(VAR_24->i_mode))
  FUNC_2(VAR_24)->i_current_depth = 1;

 VAR_27 = FUNC_29(VAR_24);
 if (VAR_27) {
  VAR_27 = -VAR_1;
  goto fail;
 }

 if (FUNC_24(VAR_22) &&
  (FUNC_2(VAR_20)->i_flags & VAR_7))
  FUNC_2(VAR_24)->i_projid = FUNC_2(VAR_20)->i_projid;
 else
  FUNC_2(VAR_24)->i_projid = FUNC_32(&VAR_19,
       VAR_4);

 VAR_27 = FUNC_10(VAR_24);
 if (VAR_27)
  goto fail_drop;

 FUNC_35(VAR_24, VAR_14);


 if ((FUNC_5(VAR_20) || FUNC_0(VAR_22)) &&
    FUNC_19(VAR_24))
  FUNC_25(VAR_24);

 if (FUNC_22(VAR_22)) {
  FUNC_35(VAR_24, VAR_9);
  FUNC_2(VAR_24)->i_extra_isize = VAR_8;
 }

 if (FUNC_39(VAR_22, VAR_17))
  FUNC_35(VAR_24, VAR_13);

 if (FUNC_39(VAR_22, VAR_16) && FUNC_20(VAR_24))
  FUNC_35(VAR_24, VAR_11);
 if (FUNC_21(VAR_24))
  FUNC_35(VAR_24, VAR_12);

 if (FUNC_23(VAR_22)) {
  FUNC_12(VAR_22, !FUNC_13(VAR_24));
  if (FUNC_15(VAR_24))
   VAR_26 = FUNC_4(VAR_22).inline_xattr_size;

 } else if (FUNC_15(VAR_24) ||
    FUNC_14(VAR_24)) {
  VAR_26 = VAR_0;
 }
 FUNC_2(VAR_24)->i_inline_xattr_size = VAR_26;

 FUNC_16(VAR_24, ((void*)0));

 FUNC_38(VAR_24);
 FUNC_37(VAR_24);
 FUNC_36(VAR_24);

 FUNC_2(VAR_24)->i_flags =
  FUNC_18(VAR_21, FUNC_2(VAR_20)->i_flags & VAR_5);

 if (FUNC_6(VAR_24->i_mode))
  FUNC_2(VAR_24)->i_flags |= VAR_6;

 if (FUNC_2(VAR_24)->i_flags & VAR_7)
  FUNC_35(VAR_24, VAR_15);

 FUNC_26(VAR_24);

 FUNC_40(VAR_24, 0);
 return VAR_24;

fail:
 FUNC_40(VAR_24, VAR_27);
 FUNC_31(VAR_24);
 if (VAR_25)
  FUNC_35(VAR_24, VAR_10);
 FUNC_30(VAR_24);
 return FUNC_1(VAR_27);
fail_drop:
 FUNC_40(VAR_24, VAR_27);
 FUNC_9(VAR_24);
 VAR_24->i_flags |= VAR_18;
 if (VAR_25)
  FUNC_35(VAR_24, VAR_10);
 FUNC_7(VAR_24);
 FUNC_41(VAR_24);
 FUNC_30(VAR_24);
 return FUNC_1(VAR_27);
}
