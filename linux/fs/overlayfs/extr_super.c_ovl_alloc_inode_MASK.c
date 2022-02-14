
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ovl_inode {struct inode vfs_inode; int lock; int * lowerdata; int * lower; int * __upperdentry; scalar_t__ flags; scalar_t__ version; int * redirect; int * cache; } ;


 int VAR_0 ;
 struct ovl_inode* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_2(struct super_block *VAR_2)
{
 struct ovl_inode *VAR_3 = FUNC_0(VAR_1, VAR_0);

 if (!VAR_3)
  return ((void*)0);

 VAR_3->cache = ((void*)0);
 VAR_3->redirect = ((void*)0);
 VAR_3->version = 0;
 VAR_3->flags = 0;
 VAR_3->__upperdentry = ((void*)0);
 VAR_3->lower = ((void*)0);
 VAR_3->lowerdata = ((void*)0);
 FUNC_1(&VAR_3->lock);

 return &VAR_3->vfs_inode;
}
