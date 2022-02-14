
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct path {int dentry; } ;
struct nfs_server {TYPE_2__* nfs_client; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct TYPE_4__ {TYPE_1__* rpc_ops; } ;
struct TYPE_3__ {struct vfsmount* (* submount ) (struct nfs_server*,int ,struct nfs_fh*,struct nfs_fattr*) ;} ;


 int VAR_0 ;
 struct vfsmount* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct vfsmount*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct nfs_server* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vfsmount*,int *) ;
 int FUNC_6 (struct vfsmount*) ;
 struct nfs_fattr* FUNC_7 () ;
 struct nfs_fh* FUNC_8 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct nfs_fattr*) ;
 int FUNC_10 (struct nfs_fh*) ;
 int VAR_4 ;
 int FUNC_11 (int *,int ) ;
 struct vfsmount* FUNC_12 (struct nfs_server*,int ,struct nfs_fh*,struct nfs_fattr*) ;

struct vfsmount *FUNC_13(struct path *VAR_5)
{
 struct vfsmount *VAR_6;
 struct nfs_server *VAR_7 = FUNC_3(FUNC_4(VAR_5->dentry));
 struct nfs_fh *VAR_8 = ((void*)0);
 struct nfs_fattr *VAR_9 = ((void*)0);

 if (FUNC_2(VAR_5->dentry))
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_0(-VAR_0);
 VAR_8 = FUNC_8();
 VAR_9 = FUNC_7();
 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
  goto out;

 VAR_6 = VAR_7->nfs_client->rpc_ops->submount(VAR_7, VAR_5->dentry, VAR_8, VAR_9);
 if (FUNC_1(VAR_6))
  goto out;

 FUNC_6(VAR_6);
 FUNC_5(VAR_6, &VAR_2);
 FUNC_11(&VAR_3, VAR_4);

out:
 FUNC_9(VAR_9);
 FUNC_10(VAR_8);
 return VAR_6;
}
