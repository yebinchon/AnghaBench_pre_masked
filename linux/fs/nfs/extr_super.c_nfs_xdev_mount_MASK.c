
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_subversion {TYPE_2__* rpc_ops; } ;
struct nfs_server {int dummy; } ;
struct nfs_mount_info {struct nfs_clone_mount* cloned; int mntfh; int set_security; int fill_super; } ;
struct nfs_clone_mount {int authflavor; int fattr; int fh; int sb; } ;
struct file_system_type {int dummy; } ;
typedef struct nfs_server dentry ;
struct TYPE_7__ {TYPE_1__* nfs_client; } ;
struct TYPE_6__ {struct nfs_server* (* clone_server ) (TYPE_3__*,int ,int ,int ) ;} ;
struct TYPE_5__ {struct nfs_subversion* cl_nfs_mod; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (struct nfs_server*) ;
 struct nfs_server* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nfs_server*) ;
 TYPE_3__* FUNC_3 (int ) ;
 long FUNC_4 (struct nfs_server*) ;
 int FUNC_5 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfs_server* FUNC_6 (struct nfs_server*,int,char const*,struct nfs_mount_info*,struct nfs_subversion*) ;
 struct nfs_server* FUNC_7 (TYPE_3__*,int ,int ,int ) ;

__attribute__((used)) static struct dentry *
FUNC_8(struct file_system_type *VAR_3, int VAR_4,
  const char *VAR_5, void *VAR_6)
{
 struct nfs_clone_mount *VAR_7 = VAR_6;
 struct nfs_mount_info VAR_8 = {
  .fill_super = VAR_2,
  .set_security = VAR_1,
  .cloned = VAR_7,
 };
 struct nfs_server *VAR_9;
 struct dentry *VAR_10 = FUNC_1(-VAR_0);
 struct nfs_subversion *VAR_11 = FUNC_3(VAR_7->sb)->nfs_client->cl_nfs_mod;

 FUNC_5("--> nfs_xdev_mount()\n");

 VAR_8.mntfh = VAR_8.cloned->fh;


 VAR_9 = VAR_11->rpc_ops->clone_server(FUNC_3(VAR_7->sb), VAR_7->fh, VAR_7->fattr, VAR_7->authflavor);

 if (FUNC_2(VAR_9))
  VAR_10 = FUNC_0(VAR_9);
 else
  VAR_10 = FUNC_6(VAR_9, VAR_4,
    VAR_5, &VAR_8, VAR_11);

 FUNC_5("<-- nfs_xdev_mount() = %ld\n",
   FUNC_2(VAR_10) ? FUNC_4(VAR_10) : 0L);
 return VAR_10;
}
