
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_dev; int s_d_op; struct nfs_server* s_fs_info; int s_flags; } ;
struct nfs_server {int s_dev; TYPE_1__* nfs_client; } ;
struct nfs_sb_mountdata {int mntflags; struct nfs_server* server; } ;
struct TYPE_4__ {int dentry_ops; } ;
struct TYPE_3__ {TYPE_2__* rpc_ops; } ;


 int FUNC_0 (struct super_block*,struct nfs_server*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0, void *VAR_1)
{
 struct nfs_sb_mountdata *VAR_2 = VAR_1;
 struct nfs_server *VAR_3 = VAR_2->server;
 int VAR_4;

 VAR_0->s_flags = VAR_2->mntflags;
 VAR_0->s_fs_info = VAR_3;
 VAR_0->s_d_op = VAR_3->nfs_client->rpc_ops->dentry_ops;
 VAR_4 = FUNC_0(VAR_0, VAR_3);
 if (VAR_4 == 0)
  VAR_3->s_dev = VAR_0->s_dev;
 return VAR_4;
}
