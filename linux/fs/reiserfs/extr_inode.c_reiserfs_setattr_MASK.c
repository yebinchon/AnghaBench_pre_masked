
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct inode {scalar_t__ i_size; int i_sb; int i_gid; int i_uid; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_size; int ia_gid; int ia_uid; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_prealloc_count; int tailpack; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_12 ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct iattr*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int VAR_13 ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct inode*,struct iattr*) ;
 int FUNC_16 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_17 (struct reiserfs_transaction_handle*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct inode*,struct iattr*) ;
 int FUNC_23 (struct reiserfs_transaction_handle*,struct inode*) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (struct inode*,int) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct inode*,struct iattr*) ;
 int FUNC_29 (struct dentry*,struct iattr*) ;
 int FUNC_30 (struct inode*,scalar_t__) ;
 int FUNC_31 (int ,int ) ;

int FUNC_32(struct dentry *VAR_14, struct iattr *VAR_15)
{
 struct inode *VAR_16 = FUNC_3(VAR_14);
 unsigned int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_29(VAR_14, VAR_15);
 if (VAR_18)
  return VAR_18;


 VAR_17 = VAR_15->ia_valid &= ~(VAR_3|VAR_2);

 if (FUNC_15(VAR_16, VAR_15)) {
  VAR_18 = FUNC_4(VAR_16);
  if (VAR_18)
   return VAR_18;
 }
 FUNC_26(VAR_16->i_sb);
 if (VAR_15->ia_valid & VAR_6) {




  if (FUNC_9(VAR_16) == VAR_10 &&
      VAR_15->ia_size > VAR_11) {
   FUNC_27(VAR_16->i_sb);
   VAR_18 = -VAR_8;
   goto out;
  }

  FUNC_13(VAR_16);


  if (VAR_15->ia_size > VAR_16->i_size) {
   VAR_18 = FUNC_8(VAR_16, VAR_15->ia_size);
   if (FUNC_0(VAR_16)->i_prealloc_count > 0) {
    int VAR_19;
    struct reiserfs_transaction_handle VAR_20;

    VAR_19 = FUNC_16(&VAR_20, VAR_16->i_sb, 4);
    if (!VAR_19) {
     FUNC_23(&VAR_20, VAR_16);
     VAR_19 = FUNC_17(&VAR_20);
    }
    if (VAR_19)
     VAR_18 = VAR_19;
   }
   if (VAR_18) {
    FUNC_27(VAR_16->i_sb);
    goto out;
   }




   VAR_15->ia_valid |= (VAR_5 | VAR_0);
  }
 }
 FUNC_27(VAR_16->i_sb);

 if ((((VAR_15->ia_valid & VAR_7) && (FUNC_7(&VAR_13, VAR_15->ia_uid) & ~0xffff)) ||
      ((VAR_15->ia_valid & VAR_1) && (FUNC_6(&VAR_13, VAR_15->ia_gid) & ~0xffff))) &&
     (FUNC_10(VAR_16) == VAR_12)) {

  VAR_18 = -VAR_9;
  goto out;
 }

 if ((VAR_17 & VAR_7 && !FUNC_31(VAR_15->ia_uid, VAR_16->i_uid)) ||
     (VAR_17 & VAR_1 && !FUNC_11(VAR_15->ia_gid, VAR_16->i_gid))) {
  struct reiserfs_transaction_handle VAR_21;
  int VAR_22 =
      2 *
      (FUNC_2(VAR_16->i_sb) +
       FUNC_1(VAR_16->i_sb)) +
      2;

  VAR_18 = FUNC_22(VAR_16, VAR_15);

  if (VAR_18)
   return VAR_18;





  FUNC_26(VAR_16->i_sb);
  VAR_18 = FUNC_16(&VAR_21, VAR_16->i_sb, VAR_22);
  FUNC_27(VAR_16->i_sb);
  if (VAR_18)
   goto out;
  VAR_18 = FUNC_5(VAR_16, VAR_15);
  FUNC_26(VAR_16->i_sb);
  if (VAR_18) {
   FUNC_17(&VAR_21);
   FUNC_27(VAR_16->i_sb);
   goto out;
  }





  if (VAR_15->ia_valid & VAR_7)
   VAR_16->i_uid = VAR_15->ia_uid;
  if (VAR_15->ia_valid & VAR_1)
   VAR_16->i_gid = VAR_15->ia_gid;
  FUNC_18(VAR_16);
  VAR_18 = FUNC_17(&VAR_21);
  FUNC_27(VAR_16->i_sb);
  if (VAR_18)
   goto out;
 }

 if ((VAR_15->ia_valid & VAR_6) &&
     VAR_15->ia_size != FUNC_12(VAR_16)) {
  VAR_18 = FUNC_14(VAR_16, VAR_15->ia_size);
  if (!VAR_18) {




   FUNC_19(&FUNC_0(VAR_16)->tailpack);
   FUNC_30(VAR_16, VAR_15->ia_size);
   FUNC_25(VAR_16, 1);
   FUNC_20(&FUNC_0(VAR_16)->tailpack);
  }
 }

 if (!VAR_18) {
  FUNC_28(VAR_16, VAR_15);
  FUNC_18(VAR_16);
 }

 if (!VAR_18 && FUNC_24(VAR_16->i_sb)) {
  if (VAR_15->ia_valid & VAR_4)
   VAR_18 = FUNC_21(VAR_16);
 }

out:
 return VAR_18;
}
