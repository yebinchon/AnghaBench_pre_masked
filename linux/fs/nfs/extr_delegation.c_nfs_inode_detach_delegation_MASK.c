
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_inode {int dummy; } ;
struct nfs_delegation {int dummy; } ;
struct inode {int dummy; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 struct nfs_delegation* FUNC_2 (struct nfs_inode*,struct nfs_delegation*,struct nfs_server*) ;
 struct nfs_delegation* FUNC_3 (struct nfs_inode*) ;

__attribute__((used)) static struct nfs_delegation *
FUNC_4(struct inode *VAR_0)
{
 struct nfs_inode *VAR_1 = FUNC_0(VAR_0);
 struct nfs_server *VAR_2 = FUNC_1(VAR_0);
 struct nfs_delegation *VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 return FUNC_2(VAR_1, VAR_3, VAR_2);
}
