
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_server {TYPE_2__* nfs_client; } ;
struct nfs_fh {scalar_t__ size; } ;
struct nfs_fattr {int valid; } ;
struct nfs4_label {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int d_sb; int d_name; } ;
struct TYPE_6__ {int (* lookup ) (struct inode*,int *,struct nfs_fh*,struct nfs_fattr*,int *) ;} ;
struct TYPE_5__ {TYPE_1__* rpc_ops; } ;
struct TYPE_4__ {int (* getattr ) (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*,int *,int *) ;} ;


 struct dentry* FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 struct nfs_server* FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct inode*,struct dentry*) ;
 struct dentry* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 struct inode* FUNC_8 (int ,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct dentry*,int ) ;
 int FUNC_12 (struct inode*,int *,struct nfs_fh*,struct nfs_fattr*,int *) ;
 int FUNC_13 (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*,int *,int *) ;

struct dentry *
FUNC_14(struct dentry *VAR_1, struct nfs_fh *VAR_2,
    struct nfs_fattr *VAR_3,
    struct nfs4_label *VAR_4)
{
 struct dentry *VAR_5 = FUNC_6(VAR_1);
 struct inode *VAR_6 = FUNC_4(VAR_5);
 struct inode *VAR_7;
 struct dentry *VAR_8;
 int VAR_9;

 FUNC_3(VAR_1);

 if (VAR_2->size == 0) {
  VAR_9 = FUNC_1(VAR_6)->lookup(VAR_6, &VAR_1->d_name, VAR_2, VAR_3, ((void*)0));
  if (VAR_9)
   goto out_error;
 }
 FUNC_11(VAR_1, FUNC_10(VAR_6));
 if (!(VAR_3->valid & VAR_0)) {
  struct nfs_server *VAR_10 = FUNC_2(VAR_1->d_sb);
  VAR_9 = VAR_10->nfs_client->rpc_ops->getattr(VAR_10, VAR_2,
    VAR_3, ((void*)0), ((void*)0));
  if (VAR_9 < 0)
   goto out_error;
 }
 VAR_7 = FUNC_8(VAR_1->d_sb, VAR_2, VAR_3, VAR_4);
 VAR_8 = FUNC_5(VAR_7, VAR_1);
out:
 FUNC_7(VAR_5);
 return VAR_8;
out_error:
 FUNC_9(VAR_6);
 VAR_8 = FUNC_0(VAR_9);
 goto out;
}
