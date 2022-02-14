
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct TYPE_3__ {int workdir; } ;
struct ovl_fs {TYPE_1__ config; TYPE_2__* workbasedir; struct vfsmount* upper_mnt; } ;
struct inode {int dummy; } ;
struct iattr {int ia_mode; int ia_valid; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 struct dentry* FUNC_7 (char const*,TYPE_2__*,int ) ;
 int FUNC_8 (struct dentry*,struct iattr*,int *) ;
 struct dentry* FUNC_9 (struct inode*,struct dentry*,int ) ;
 int FUNC_10 (struct inode*,struct vfsmount*,struct dentry*,int ) ;
 int FUNC_11 (char*,int ,char const*,int) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (struct dentry*,int ) ;

__attribute__((used)) static struct dentry *FUNC_14(struct ovl_fs *VAR_8,
      const char *VAR_9, bool VAR_10)
{
 struct inode *VAR_11 = VAR_8->workbasedir->d_inode;
 struct vfsmount *VAR_12 = VAR_8->upper_mnt;
 struct dentry *VAR_13;
 int VAR_14;
 bool VAR_15 = 0;
 bool VAR_16 = 0;

 FUNC_5(VAR_11, VAR_4);
 VAR_16 = 1;

retry:
 VAR_13 = FUNC_7(VAR_9, VAR_8->workbasedir, FUNC_12(VAR_9));

 if (!FUNC_0(VAR_13)) {
  struct iattr VAR_17 = {
   .ia_valid = VAR_0,
   .ia_mode = VAR_5 | 0,
  };

  if (VAR_13->d_inode) {
   VAR_14 = -VAR_1;
   if (VAR_15)
    goto out_dput;

   if (VAR_10)
    goto out_unlock;

   VAR_15 = 1;
   FUNC_10(VAR_11, VAR_12, VAR_13, 0);
   FUNC_3(VAR_13);
   goto retry;
  }

  VAR_13 = FUNC_9(VAR_11, VAR_13, FUNC_1(VAR_17.ia_mode));
  VAR_14 = FUNC_2(VAR_13);
  if (FUNC_0(VAR_13))
   goto out_err;
  VAR_14 = FUNC_13(VAR_13, VAR_7);
  if (VAR_14 && VAR_14 != -VAR_2 && VAR_14 != -VAR_3)
   goto out_dput;

  VAR_14 = FUNC_13(VAR_13, VAR_6);
  if (VAR_14 && VAR_14 != -VAR_2 && VAR_14 != -VAR_3)
   goto out_dput;


  FUNC_4(VAR_13->d_inode);
  VAR_14 = FUNC_8(VAR_13, &VAR_17, ((void*)0));
  FUNC_6(VAR_13->d_inode);
  if (VAR_14)
   goto out_dput;
 } else {
  VAR_14 = FUNC_2(VAR_13);
  goto out_err;
 }
out_unlock:
 if (VAR_16)
  FUNC_6(VAR_11);

 return VAR_13;

out_dput:
 FUNC_3(VAR_13);
out_err:
 FUNC_11("overlayfs: failed to create directory %s/%s (errno: %i); mounting read-only\n",
  VAR_8->config.workdir, VAR_9, -VAR_14);
 VAR_13 = ((void*)0);
 goto out_unlock;
}
