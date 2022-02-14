
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_server {TYPE_1__* nfs_client; } ;
struct nfs_rpc_ops {int (* lookupp ) (struct inode*,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*) ;} ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nfs4_label {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct nfs_rpc_ops* rpc_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (struct nfs4_label*) ;
 struct dentry* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct nfs4_label*) ;
 struct nfs_server* FUNC_3 (struct super_block*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct inode*) ;
 struct nfs4_label* FUNC_6 (struct nfs_server*,int ) ;
 int FUNC_7 (struct nfs4_label*) ;
 struct nfs_fattr* FUNC_8 () ;
 struct inode* FUNC_9 (struct super_block*,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*) ;
 int FUNC_10 (struct nfs_fattr*) ;
 int FUNC_11 (struct inode*,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*) ;

__attribute__((used)) static struct dentry *
FUNC_12(struct dentry *VAR_3)
{
 int VAR_4;
 struct inode *VAR_5 = FUNC_4(VAR_3), *VAR_6;
 struct super_block *VAR_7 = VAR_5->i_sb;
 struct nfs_server *VAR_8 = FUNC_3(VAR_7);
 struct nfs_fattr *VAR_9 = ((void*)0);
 struct nfs4_label *VAR_10 = ((void*)0);
 struct dentry *VAR_11;
 struct nfs_rpc_ops const *VAR_12 = VAR_8->nfs_client->rpc_ops;
 struct nfs_fh VAR_13;

 if (!VAR_12->lookupp)
  return FUNC_1(-VAR_0);

 VAR_9 = FUNC_8();
 if (VAR_9 == ((void*)0)) {
  VAR_11 = FUNC_1(-VAR_1);
  goto out;
 }

 VAR_10 = FUNC_6(VAR_8, VAR_2);
 if (FUNC_2(VAR_10)) {
  VAR_11 = FUNC_0(VAR_10);
  goto out_free_fattr;
 }

 VAR_4 = VAR_12->lookupp(VAR_5, &VAR_13, VAR_9, VAR_10);
 if (VAR_4) {
  VAR_11 = FUNC_1(VAR_4);
  goto out_free_label;
 }

 VAR_6 = FUNC_9(VAR_7, &VAR_13, VAR_9, VAR_10);
 VAR_11 = FUNC_5(VAR_6);
out_free_label:
 FUNC_7(VAR_10);
out_free_fattr:
 FUNC_10(VAR_9);
out:
 return VAR_11;
}
