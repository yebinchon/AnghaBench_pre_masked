
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_mount_info {void* cloned; int * mntfh; int set_security; int fill_super; } ;
struct file_system_type {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct nfs_server*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nfs_server*) ;
 int FUNC_3 (char*) ;
 struct nfs_server* FUNC_4 (void*,int *) ;
 int * FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 struct dentry* FUNC_7 (struct nfs_server*,int,char const*,struct nfs_mount_info*,int *) ;
 int VAR_3 ;

__attribute__((used)) static struct dentry *
FUNC_8(struct file_system_type *VAR_4, int VAR_5,
      const char *VAR_6, void *VAR_7)
{
 struct nfs_mount_info VAR_8 = {
  .fill_super = VAR_2,
  .set_security = VAR_1,
  .cloned = VAR_7,
 };
 struct nfs_server *VAR_9;
 struct dentry *VAR_10 = FUNC_1(-VAR_0);

 FUNC_3("--> nfs4_referral_get_sb()\n");

 VAR_8.mntfh = FUNC_5();
 if (VAR_8.cloned == ((void*)0) || VAR_8.mntfh == ((void*)0))
  goto out;


 VAR_9 = FUNC_4(VAR_8.cloned, VAR_8.mntfh);
 if (FUNC_2(VAR_9)) {
  VAR_10 = FUNC_0(VAR_9);
  goto out;
 }

 VAR_10 = FUNC_7(VAR_9, VAR_5, VAR_6, &VAR_8, &VAR_3);
out:
 FUNC_6(VAR_8.mntfh);
 return VAR_10;
}
