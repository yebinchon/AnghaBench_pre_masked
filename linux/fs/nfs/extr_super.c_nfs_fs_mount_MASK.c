
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfs_subversion {TYPE_1__* rpc_ops; } ;
struct nfs_mount_info {int * mntfh; TYPE_2__* parsed; int set_security; int fill_super; } ;
struct file_system_type {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_7__ {int version; } ;
struct TYPE_6__ {struct dentry* (* try_mount ) (int,char const*,struct nfs_mount_info*,struct nfs_subversion*) ;} ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct nfs_subversion*) ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct nfs_subversion*) ;
 int VAR_1 ;
 struct nfs_subversion* FUNC_3 (int ) ;
 int * FUNC_4 () ;
 TYPE_2__* FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_8 (struct file_system_type*,void*,TYPE_2__*,int *,char const*) ;
 int FUNC_9 (void*,TYPE_2__*,char const*) ;
 int FUNC_10 (struct nfs_subversion*) ;
 struct dentry* FUNC_11 (int,char const*,struct nfs_mount_info*,struct nfs_subversion*) ;

struct dentry *FUNC_12(struct file_system_type *VAR_4,
 int VAR_5, const char *VAR_6, void *VAR_7)
{
 struct nfs_mount_info VAR_8 = {
  .fill_super = VAR_2,
  .set_security = VAR_3,
 };
 struct dentry *VAR_9 = FUNC_1(-VAR_0);
 struct nfs_subversion *VAR_10;
 int VAR_11;

 VAR_8.parsed = FUNC_5();
 VAR_8.mntfh = FUNC_4();
 if (VAR_8.parsed == ((void*)0) || VAR_8.mntfh == ((void*)0))
  goto out;


 VAR_11 = FUNC_8(VAR_4, VAR_7, VAR_8.parsed, VAR_8.mntfh, VAR_6);
 if (VAR_11 == VAR_1)
  VAR_11 = FUNC_9(VAR_7, VAR_8.parsed, VAR_6);
 if (VAR_11 < 0) {
  VAR_9 = FUNC_1(VAR_11);
  goto out;
 }

 VAR_10 = FUNC_3(VAR_8.parsed->version);
 if (FUNC_2(VAR_10)) {
  VAR_9 = FUNC_0(VAR_10);
  goto out;
 }

 VAR_9 = VAR_10->rpc_ops->try_mount(VAR_5, VAR_6, &VAR_8, VAR_10);

 FUNC_10(VAR_10);
out:
 FUNC_7(VAR_8.parsed);
 FUNC_6(VAR_8.mntfh);
 return VAR_9;
}
