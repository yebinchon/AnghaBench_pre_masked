
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ovl_cu_creds {int dummy; } ;
struct TYPE_6__ {int len; int name; } ;
struct TYPE_5__ {int dentry; } ;
struct TYPE_4__ {int mode; int rdev; } ;
struct ovl_copy_up_ctx {int destdir; int workdir; int dentry; int metacopy; TYPE_3__ destname; TYPE_2__ lowerpath; scalar_t__ indexed; TYPE_1__ stat; int link; } ;
struct ovl_cattr {int mode; int link; int rdev; } ;
struct inode {int i_mode; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 struct inode* FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct inode*,struct dentry*) ;
 int FUNC_7 (struct ovl_copy_up_ctx*,struct dentry*) ;
 int FUNC_8 (int ,int ,struct dentry*) ;
 struct dentry* FUNC_9 (int ,struct ovl_cattr*) ;
 int FUNC_10 (struct inode*,struct dentry*,struct inode*,struct dentry*,int ) ;
 int FUNC_11 (struct inode*,struct dentry*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,struct ovl_cu_creds*) ;
 int FUNC_14 (struct ovl_cu_creds*) ;
 int FUNC_15 (int ,struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static int FUNC_18(struct ovl_copy_up_ctx *VAR_2)
{
 struct inode *VAR_3;
 struct inode *VAR_4 = FUNC_3(VAR_2->destdir), *VAR_5 = FUNC_3(VAR_2->workdir);
 struct dentry *VAR_6, *VAR_7;
 struct ovl_cu_creds VAR_8;
 int VAR_9;
 struct ovl_cattr VAR_10 = {

  .mode = VAR_2->stat.mode & VAR_1,
  .rdev = VAR_2->stat.rdev,
  .link = VAR_2->link
 };

 VAR_9 = FUNC_12(VAR_2->workdir, VAR_2->destdir);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_13(VAR_2->dentry, &VAR_8);
 if (VAR_9)
  goto unlock;

 VAR_6 = FUNC_9(VAR_2->workdir, &VAR_10);
 FUNC_14(&VAR_8);

 VAR_9 = FUNC_1(VAR_6);
 if (FUNC_0(VAR_6))
  goto unlock;

 VAR_9 = FUNC_7(VAR_2, VAR_6);
 if (VAR_9)
  goto cleanup;

 if (FUNC_2(VAR_2->stat.mode) && VAR_2->indexed) {
  VAR_9 = FUNC_8(VAR_2->dentry, VAR_2->lowerpath.dentry, VAR_6);
  if (VAR_9)
   goto cleanup;
 }

 VAR_7 = FUNC_5(VAR_2->destname.name, VAR_2->destdir, VAR_2->destname.len);
 VAR_9 = FUNC_1(VAR_7);
 if (FUNC_0(VAR_7))
  goto cleanup;

 VAR_9 = FUNC_10(VAR_5, VAR_6, VAR_4, VAR_7, 0);
 FUNC_4(VAR_7);
 if (VAR_9)
  goto cleanup;

 if (!VAR_2->metacopy)
  FUNC_16(FUNC_3(VAR_2->dentry));
 VAR_3 = FUNC_3(VAR_2->dentry);
 FUNC_11(VAR_3, VAR_6);
 if (FUNC_2(VAR_3->i_mode))
  FUNC_15(VAR_0, VAR_3);
unlock:
 FUNC_17(VAR_2->workdir, VAR_2->destdir);

 return VAR_9;

cleanup:
 FUNC_6(VAR_5, VAR_6);
 FUNC_4(VAR_6);
 goto unlock;
}
