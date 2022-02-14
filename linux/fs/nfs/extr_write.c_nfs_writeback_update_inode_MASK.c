
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fattr {int dummy; } ;
struct nfs_pgio_header {struct inode* inode; struct nfs_fattr fattr; } ;
struct inode {int i_lock; } ;


 int FUNC_0 (struct inode*,struct nfs_fattr*) ;
 int FUNC_1 (struct nfs_pgio_header*,struct nfs_fattr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nfs_pgio_header *VAR_0)
{
 struct nfs_fattr *VAR_1 = &VAR_0->fattr;
 struct inode *VAR_2 = VAR_0->inode;

 FUNC_2(&VAR_2->i_lock);
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2, VAR_1);
 FUNC_3(&VAR_2->i_lock);
}
