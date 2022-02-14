
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct nfs_server {TYPE_2__* client; TYPE_4__* nfs_client; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct dentry {int d_name; } ;
struct TYPE_8__ {TYPE_3__* rpc_ops; } ;
struct TYPE_7__ {int (* lookup ) (int ,int *,struct nfs_fh*,struct nfs_fattr*,int *) ;} ;
struct TYPE_6__ {TYPE_1__* cl_auth; } ;
struct TYPE_5__ {int au_flavor; } ;


 struct vfsmount* FUNC_0 (int) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 struct vfsmount* FUNC_4 (struct dentry*,struct nfs_fh*,struct nfs_fattr*,int ) ;
 int FUNC_5 (int ,int *,struct nfs_fh*,struct nfs_fattr*,int *) ;

struct vfsmount *FUNC_6(struct nfs_server *VAR_0, struct dentry *VAR_1,
         struct nfs_fh *VAR_2, struct nfs_fattr *VAR_3)
{
 int VAR_4;
 struct dentry *VAR_5 = FUNC_2(VAR_1);


 VAR_4 = VAR_0->nfs_client->rpc_ops->lookup(FUNC_1(VAR_5), &VAR_1->d_name, VAR_2, VAR_3, ((void*)0));
 FUNC_3(VAR_5);
 if (VAR_4 != 0)
  return FUNC_0(VAR_4);

 return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_0->client->cl_auth->au_flavor);
}
