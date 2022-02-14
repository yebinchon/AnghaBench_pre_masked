
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {scalar_t__ d_inode; struct dentry* d_parent; TYPE_1__ d_name; int d_sb; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 struct dentry* FUNC_11 (struct dentry*,struct dentry*) ;
 struct dentry* FUNC_12 (int ,struct dentry*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct dentry*) ;
 int FUNC_15 (struct dentry*,int *) ;
 int FUNC_16 (scalar_t__,struct dentry*) ;
 struct dentry* FUNC_17 (struct dentry*,int *) ;
 int FUNC_18 (struct dentry*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct dentry*) ;
 scalar_t__ FUNC_21 (struct dentry*) ;
 struct dentry* FUNC_22 (struct dentry*) ;
 int FUNC_23 (struct dentry*,int) ;
 int FUNC_24 (scalar_t__,struct dentry*,scalar_t__,struct dentry*,unsigned int) ;
 int FUNC_25 (struct dentry*) ;
 int FUNC_26 (struct dentry*) ;
 scalar_t__ FUNC_27 (struct dentry*) ;
 int FUNC_28 (struct dentry*,struct dentry*) ;
 int FUNC_29 (struct dentry*) ;
 int FUNC_30 (struct dentry*) ;
 struct cred* FUNC_31 (int ) ;
 int FUNC_32 (struct dentry*) ;
 int FUNC_33 (struct dentry*,struct dentry*) ;
 int FUNC_34 (struct dentry*,struct dentry*,int) ;
 int FUNC_35 (struct dentry*,int) ;
 scalar_t__ FUNC_36 (struct dentry*) ;
 scalar_t__ FUNC_37 (struct dentry*) ;
 scalar_t__ FUNC_38 (struct dentry*) ;
 int FUNC_39 (struct dentry*) ;
 int FUNC_40 (struct cred const*) ;
 int FUNC_41 (struct dentry*,struct dentry*) ;

__attribute__((used)) static int FUNC_42(struct inode *VAR_7, struct dentry *VAR_8,
        struct inode *VAR_9, struct dentry *VAR_10,
        unsigned int VAR_11)
{
 int VAR_12;
 struct dentry *VAR_13;
 struct dentry *VAR_14;
 struct dentry *VAR_15;
 struct dentry *VAR_16;
 struct dentry *VAR_17;
 bool VAR_18;
 bool VAR_19;
 bool VAR_20 = 0;
 bool VAR_21 = 0;
 bool VAR_22 = !(VAR_11 & VAR_3);
 bool VAR_23 = FUNC_6(VAR_8);
 bool VAR_24 = FUNC_6(VAR_10);
 bool VAR_25 = VAR_7 == VAR_9;
 struct dentry *VAR_26 = ((void*)0);
 const struct cred *VAR_27 = ((void*)0);
 FUNC_1(VAR_6);

 VAR_12 = -VAR_0;
 if (VAR_11 & ~(VAR_3 | VAR_4))
  goto out;

 VAR_11 &= ~VAR_4;


 VAR_12 = -VAR_2;
 if (!FUNC_14(VAR_8))
  goto out;
 if (!VAR_22 && !FUNC_14(VAR_10))
  goto out;

 if (VAR_22 && VAR_24 && !FUNC_32(VAR_10)) {
  VAR_12 = FUNC_15(VAR_10, &VAR_6);
  if (VAR_12)
   goto out;
 }

 if (VAR_22) {
  if (FUNC_27(VAR_8)) {
   if (!FUNC_21(VAR_10)) {

    VAR_11 |= VAR_5;
   } else {

    VAR_11 |= VAR_3;
   }
  } else if (VAR_23 && FUNC_21(VAR_10)) {
   VAR_11 |= VAR_3;
   VAR_20 = 1;
  }
 }

 VAR_12 = FUNC_39(VAR_8);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_18(VAR_8);
 if (VAR_12)
  goto out_drop_write;

 VAR_12 = FUNC_18(VAR_10->d_parent);
 if (VAR_12)
  goto out_drop_write;
 if (!VAR_22) {
  VAR_12 = FUNC_18(VAR_10);
  if (VAR_12)
   goto out_drop_write;
 } else if (FUNC_5(VAR_10)) {
  VAR_12 = FUNC_30(VAR_10);
  if (VAR_12)
   goto out_drop_write;

  VAR_21 = 1;
 }

 VAR_27 = FUNC_31(VAR_8->d_sb);

 if (!FUNC_10(&VAR_6)) {
  VAR_26 = FUNC_17(VAR_10, &VAR_6);
  VAR_12 = FUNC_2(VAR_26);
  if (FUNC_0(VAR_26)) {
   VAR_26 = ((void*)0);
   goto out_revert_creds;
  }
 }

 VAR_13 = FUNC_22(VAR_8->d_parent);
 VAR_14 = FUNC_22(VAR_10->d_parent);

 if (!VAR_25) {






  if (FUNC_38(VAR_8)) {
   VAR_12 = FUNC_33(VAR_10->d_parent, VAR_14);
   if (VAR_12)
    goto out_revert_creds;
  }
  if (!VAR_22 && FUNC_38(VAR_10)) {
   VAR_12 = FUNC_33(VAR_8->d_parent, VAR_13);
   if (VAR_12)
    goto out_revert_creds;
  }
 }

 VAR_17 = FUNC_11(VAR_14, VAR_13);

 VAR_15 = FUNC_12(VAR_8->d_name.name, VAR_13,
       VAR_8->d_name.len);
 VAR_12 = FUNC_2(VAR_15);
 if (FUNC_0(VAR_15))
  goto out_unlock;

 VAR_12 = -VAR_1;
 if (!FUNC_28(VAR_8, VAR_15))
  goto out_dput_old;

 VAR_16 = FUNC_12(VAR_10->d_name.name, VAR_14,
       VAR_10->d_name.len);
 VAR_12 = FUNC_2(VAR_16);
 if (FUNC_0(VAR_16))
  goto out_dput_old;

 VAR_18 = FUNC_20(VAR_8);
 VAR_19 = FUNC_20(VAR_10);

 VAR_12 = -VAR_1;
 if (FUNC_5(VAR_10) && FUNC_22(VAR_10)) {
  if (VAR_26) {
   if (VAR_16 != VAR_26)
    goto out_dput;
  } else {
   if (!FUNC_28(VAR_10, VAR_16))
    goto out_dput;
  }
 } else {
  if (!FUNC_7(VAR_16) &&
      (!VAR_19 || !FUNC_26(VAR_16)))
   goto out_dput;
 }

 if (VAR_15 == VAR_17)
  goto out_dput;
 if (VAR_16 == VAR_17)
  goto out_dput;

 if (FUNC_3(VAR_15->d_inode == VAR_16->d_inode))
  goto out_dput;

 VAR_12 = 0;
 if (FUNC_37(VAR_8))
  VAR_12 = FUNC_35(VAR_8, VAR_25);
 else if (VAR_23 && !VAR_18 && FUNC_36(VAR_10->d_parent))
  VAR_12 = FUNC_34(VAR_8, VAR_15, -VAR_2);
 if (VAR_12)
  goto out_dput;

 if (!VAR_22 && FUNC_37(VAR_10))
  VAR_12 = FUNC_35(VAR_10, VAR_25);
 else if (!VAR_22 && VAR_24 && !VAR_19 &&
   FUNC_36(VAR_8->d_parent))
  VAR_12 = FUNC_34(VAR_10, VAR_16, -VAR_2);
 if (VAR_12)
  goto out_dput;

 VAR_12 = FUNC_24(VAR_13->d_inode, VAR_15,
       VAR_14->d_inode, VAR_16, VAR_11);
 if (VAR_12)
  goto out_dput;

 if (VAR_20)
  FUNC_16(VAR_13->d_inode, VAR_16);

 if (VAR_22 && FUNC_5(VAR_10)) {
  if (VAR_24)
   FUNC_4(FUNC_5(VAR_10));
  else
   FUNC_9(FUNC_5(VAR_10));
 }

 FUNC_23(VAR_8->d_parent, FUNC_38(VAR_8) ||
    (!VAR_22 && FUNC_38(VAR_10)));
 FUNC_23(VAR_10->d_parent, FUNC_38(VAR_8) ||
    (FUNC_5(VAR_10) && FUNC_38(VAR_10)));


 FUNC_19(FUNC_5(VAR_15), FUNC_5(VAR_8));
 if (FUNC_5(VAR_10) && FUNC_22(VAR_10))
  FUNC_19(FUNC_5(VAR_16), FUNC_5(VAR_10));

out_dput:
 FUNC_8(VAR_16);
out_dput_old:
 FUNC_8(VAR_15);
out_unlock:
 FUNC_41(VAR_14, VAR_13);
out_revert_creds:
 FUNC_40(VAR_27);
 if (VAR_21)
  FUNC_29(VAR_10);
out_drop_write:
 FUNC_25(VAR_8);
out:
 FUNC_8(VAR_26);
 FUNC_13(&VAR_6);
 return VAR_12;
}
