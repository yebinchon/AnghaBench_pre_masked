
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct rpc_clnt {TYPE_1__* cl_auth; } ;
struct qstr {int dummy; } ;
struct nfs_server {TYPE_3__* client; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int valid; } ;
struct inode {int dummy; } ;
struct dentry {struct qstr d_name; } ;
typedef scalar_t__ rpc_authflavor_t ;
struct TYPE_6__ {TYPE_2__* cl_auth; } ;
struct TYPE_5__ {scalar_t__ au_flavor; } ;
struct TYPE_4__ {scalar_t__ au_flavor; } ;


 struct vfsmount* FUNC_0 (struct rpc_clnt*) ;
 scalar_t__ FUNC_1 (struct rpc_clnt*) ;
 int VAR_0 ;
 struct inode* FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct rpc_clnt* FUNC_5 (struct inode*,struct qstr const*,struct nfs_fh*,struct nfs_fattr*) ;
 struct vfsmount* FUNC_6 (struct rpc_clnt*,struct dentry*) ;
 struct vfsmount* FUNC_7 (struct dentry*,struct nfs_fh*,struct nfs_fattr*,scalar_t__) ;
 int FUNC_8 (struct rpc_clnt*) ;

struct vfsmount *FUNC_9(struct nfs_server *VAR_1, struct dentry *VAR_2,
          struct nfs_fh *VAR_3, struct nfs_fattr *VAR_4)
{
 rpc_authflavor_t VAR_5 = VAR_1->client->cl_auth->au_flavor;
 struct dentry *VAR_6 = FUNC_3(VAR_2);
 struct inode *VAR_7 = FUNC_2(VAR_6);
 const struct qstr *VAR_8 = &VAR_2->d_name;
 struct rpc_clnt *VAR_9;
 struct vfsmount *VAR_10;


 VAR_9 = FUNC_5(VAR_7, VAR_8, VAR_3, VAR_4);
 FUNC_4(VAR_6);
 if (FUNC_1(VAR_9))
  return FUNC_0(VAR_9);

 if (VAR_4->valid & VAR_0) {
  VAR_10 = FUNC_6(VAR_9, VAR_2);
  goto out;
 }

 if (VAR_9->cl_auth->au_flavor != VAR_5)
  VAR_5 = VAR_9->cl_auth->au_flavor;
 VAR_10 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5);
out:
 FUNC_8(VAR_9);
 return VAR_10;
}
