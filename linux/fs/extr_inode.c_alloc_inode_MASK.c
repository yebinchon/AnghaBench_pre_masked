
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_operations {scalar_t__ free_inode; int (* destroy_inode ) (struct inode*) ;struct inode* (* alloc_inode ) (struct super_block*) ;} ;
struct super_block {struct super_operations* s_op; } ;
struct inode {int i_rcu; scalar_t__ free_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*,struct inode*) ;
 struct inode* FUNC_2 (int ,int ) ;
 struct inode* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static struct inode *FUNC_6(struct super_block *VAR_2)
{
 const struct super_operations *VAR_3 = VAR_2->s_op;
 struct inode *VAR_4;

 if (VAR_3->alloc_inode)
  VAR_4 = VAR_3->alloc_inode(VAR_2);
 else
  VAR_4 = FUNC_2(VAR_1, VAR_0);

 if (!VAR_4)
  return ((void*)0);

 if (FUNC_5(FUNC_1(VAR_2, VAR_4))) {
  if (VAR_3->destroy_inode) {
   VAR_3->destroy_inode(VAR_4);
   if (!VAR_3->free_inode)
    return ((void*)0);
  }
  VAR_4->free_inode = VAR_3->free_inode;
  FUNC_0(&VAR_4->i_rcu);
  return ((void*)0);
 }

 return VAR_4;
}
