
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_delegation {int lock; int flags; int * inode; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct inode *FUNC_4(struct nfs_delegation *VAR_1)
{
 struct inode *VAR_2 = ((void*)0);

 FUNC_2(&VAR_1->lock);
 if (VAR_1->inode != ((void*)0))
  VAR_2 = FUNC_0(VAR_1->inode);
 if (!VAR_2)
  FUNC_1(VAR_0, &VAR_1->flags);
 FUNC_3(&VAR_1->lock);
 return VAR_2;
}
