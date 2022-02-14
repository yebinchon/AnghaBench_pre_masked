
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int dummy; } ;
struct nfs_delegation {int dummy; } ;
struct inode {int dummy; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct nfs_delegation*,int) ;
 struct nfs_delegation* FUNC_2 (struct nfs_inode*) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct inode *VAR_0)
{
 struct nfs_inode *VAR_1 = FUNC_0(VAR_0);
 struct nfs_delegation *VAR_2;
 int VAR_3 = 0;

 FUNC_3(VAR_0);
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 != ((void*)0))
  VAR_3 = FUNC_1(VAR_0, VAR_2, 1);
 return VAR_3;
}
