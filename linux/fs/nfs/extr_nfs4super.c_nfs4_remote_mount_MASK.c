
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_mount_info {int set_security; } ;
struct file_system_type {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct nfs_server*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nfs_server*) ;
 struct nfs_server* FUNC_3 (struct nfs_mount_info*,int *) ;
 struct dentry* FUNC_4 (struct nfs_server*,int,char const*,struct nfs_mount_info*,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct dentry *
FUNC_5(struct file_system_type *VAR_3, int VAR_4,
    const char *VAR_5, void *VAR_6)
{
 struct nfs_mount_info *VAR_7 = VAR_6;
 struct nfs_server *VAR_8;
 struct dentry *VAR_9 = FUNC_1(-VAR_0);

 VAR_7->set_security = VAR_1;


 VAR_8 = FUNC_3(VAR_7, &VAR_2);
 if (FUNC_2(VAR_8)) {
  VAR_9 = FUNC_0(VAR_8);
  goto out;
 }

 VAR_9 = FUNC_4(VAR_8, VAR_4, VAR_5, VAR_7, &VAR_2);

out:
 return VAR_9;
}
