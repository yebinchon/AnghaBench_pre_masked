
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct posix_acl {int dummy; } ;
struct ovl_cattr {scalar_t__ mode; int hardlink; } ;
struct inode {scalar_t__ i_mode; } ;
struct iattr {scalar_t__ ia_mode; int ia_valid; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {struct inode* d_inode; TYPE_1__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_4__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct dentry*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 struct dentry* FUNC_11 (int ,struct dentry*,int ) ;
 int FUNC_12 (struct dentry*,struct iattr*,int *) ;
 int FUNC_13 (struct inode*,struct dentry*) ;
 struct dentry* FUNC_14 (struct dentry*,struct ovl_cattr*) ;
 struct dentry* FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (struct inode*,struct dentry*,struct inode*,struct dentry*,int ) ;
 int FUNC_17 (struct dentry*,struct inode*,struct dentry*,int) ;
 int FUNC_18 (struct dentry*,struct dentry*) ;
 int FUNC_19 (struct dentry*,struct dentry*) ;
 int FUNC_20 (struct dentry*,int ,struct posix_acl*) ;
 struct dentry* FUNC_21 (struct dentry*) ;
 int FUNC_22 (int ,scalar_t__*,struct posix_acl**,struct posix_acl**) ;
 int FUNC_23 (struct posix_acl*) ;
 int FUNC_24 (struct dentry*,struct dentry*) ;

__attribute__((used)) static int FUNC_25(struct dentry *VAR_6, struct inode *VAR_7,
        struct ovl_cattr *VAR_8)
{
 struct dentry *VAR_9 = FUNC_21(VAR_6);
 struct inode *VAR_10 = VAR_9->d_inode;
 struct dentry *VAR_11 = FUNC_15(VAR_6->d_parent);
 struct inode *VAR_12 = VAR_11->d_inode;
 struct dentry *VAR_13;
 struct dentry *VAR_14;
 int VAR_15;
 struct posix_acl *VAR_16, *VAR_17;
 bool VAR_18 = !!VAR_8->hardlink;

 if (FUNC_5(!VAR_9))
  return -VAR_1;

 if (!VAR_18) {
  VAR_15 = FUNC_22(VAR_6->d_parent->d_inode,
           &VAR_8->mode, &VAR_17, &VAR_16);
  if (VAR_15)
   return VAR_15;
 }

 VAR_15 = FUNC_18(VAR_9, VAR_11);
 if (VAR_15)
  goto out;

 VAR_13 = FUNC_11(VAR_6->d_name.name, VAR_11,
          VAR_6->d_name.len);
 VAR_15 = FUNC_2(VAR_13);
 if (FUNC_0(VAR_13))
  goto out_unlock;

 VAR_15 = -VAR_2;
 if (FUNC_7(VAR_13) || !FUNC_1(FUNC_6(VAR_13)))
  goto out_dput;

 VAR_14 = FUNC_14(VAR_9, VAR_8);
 VAR_15 = FUNC_2(VAR_14);
 if (FUNC_0(VAR_14))
  goto out_dput;




 if (!VAR_18 &&
     !FUNC_4(VAR_8->mode) &&
     VAR_14->d_inode->i_mode != VAR_8->mode) {
  struct iattr VAR_19 = {
   .ia_valid = VAR_0,
   .ia_mode = VAR_8->mode,
  };
  FUNC_9(VAR_14->d_inode);
  VAR_15 = FUNC_12(VAR_14, &VAR_19, ((void*)0));
  FUNC_10(VAR_14->d_inode);
  if (VAR_15)
   goto out_cleanup;
 }
 if (!VAR_18) {
  VAR_15 = FUNC_20(VAR_14, VAR_4,
     VAR_16);
  if (VAR_15)
   goto out_cleanup;

  VAR_15 = FUNC_20(VAR_14, VAR_5,
     VAR_17);
  if (VAR_15)
   goto out_cleanup;
 }

 if (!VAR_18 && FUNC_3(VAR_8->mode)) {
  VAR_15 = FUNC_19(VAR_6, VAR_14);
  if (VAR_15)
   goto out_cleanup;

  VAR_15 = FUNC_16(VAR_10, VAR_14, VAR_12, VAR_13,
        VAR_3);
  if (VAR_15)
   goto out_cleanup;

  FUNC_13(VAR_10, VAR_13);
 } else {
  VAR_15 = FUNC_16(VAR_10, VAR_14, VAR_12, VAR_13, 0);
  if (VAR_15)
   goto out_cleanup;
 }
 VAR_15 = FUNC_17(VAR_6, VAR_7, VAR_14, VAR_18);
 if (VAR_15)
  goto out_cleanup;
out_dput:
 FUNC_8(VAR_13);
out_unlock:
 FUNC_24(VAR_9, VAR_11);
out:
 if (!VAR_18) {
  FUNC_23(VAR_16);
  FUNC_23(VAR_17);
 }
 return VAR_15;

out_cleanup:
 FUNC_13(VAR_10, VAR_14);
 FUNC_8(VAR_14);
 goto out_dput;
}
