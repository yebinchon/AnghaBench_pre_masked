
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct nfs_server {int dummy; } ;
struct nfs_clone_mount {int dentry; } ;


 int VAR_0 ;
 struct vfsmount* FUNC_0 (int ,int *,char const*,struct nfs_clone_mount*) ;

__attribute__((used)) static struct vfsmount *FUNC_1(struct nfs_server *VAR_1,
        const char *VAR_2,
        struct nfs_clone_mount *VAR_3)
{
 return FUNC_0(VAR_3->dentry, &VAR_0, VAR_2, VAR_3);
}
