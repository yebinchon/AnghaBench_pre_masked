
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_subversion {int dummy; } ;
struct nfs_server {int dummy; } ;
struct nfs_mount_info {int dummy; } ;


 int FUNC_0 (struct nfs_server*) ;
 struct nfs_server* FUNC_1 (struct nfs_mount_info*,struct nfs_subversion*) ;
 int FUNC_2 (struct nfs_server*) ;

struct nfs_server *FUNC_3(struct nfs_mount_info *VAR_0,
          struct nfs_subversion *VAR_1)
{
 struct nfs_server *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (!FUNC_0(VAR_2))
  FUNC_2(VAR_2);
 return VAR_2;
}
