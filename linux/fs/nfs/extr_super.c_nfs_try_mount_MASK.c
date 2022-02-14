
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_subversion {TYPE_2__* rpc_ops; } ;
struct nfs_server {int dummy; } ;
struct nfs_mount_info {TYPE_1__* parsed; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {struct nfs_server* (* create_server ) (struct nfs_mount_info*,struct nfs_subversion*) ;} ;
struct TYPE_3__ {scalar_t__ need_mount; } ;


 struct dentry* FUNC_0 (struct nfs_server*) ;
 scalar_t__ FUNC_1 (struct nfs_server*) ;
 struct dentry* FUNC_2 (struct nfs_server*,int,char const*,struct nfs_mount_info*,struct nfs_subversion*) ;
 struct nfs_server* FUNC_3 (struct nfs_mount_info*,struct nfs_subversion*) ;
 struct nfs_server* FUNC_4 (struct nfs_mount_info*,struct nfs_subversion*) ;

struct dentry *FUNC_5(int VAR_0, const char *VAR_1,
        struct nfs_mount_info *VAR_2,
        struct nfs_subversion *VAR_3)
{
 struct nfs_server *VAR_4;

 if (VAR_2->parsed->need_mount)
  VAR_4 = FUNC_3(VAR_2, VAR_3);
 else
  VAR_4 = VAR_3->rpc_ops->create_server(VAR_2, VAR_3);

 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4);

 return FUNC_2(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
}
