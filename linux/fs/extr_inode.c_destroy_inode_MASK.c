
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_operations {scalar_t__ free_inode; int (* destroy_inode ) (struct inode*) ;} ;
struct inode {int i_rcu; scalar_t__ free_inode; int i_lru; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct super_operations* s_op; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_1)
{
 const struct super_operations *VAR_2 = VAR_1->i_sb->s_op;

 FUNC_0(!FUNC_3(&VAR_1->i_lru));
 FUNC_1(VAR_1);
 if (VAR_2->destroy_inode) {
  VAR_2->destroy_inode(VAR_1);
  if (!VAR_2->free_inode)
   return;
 }
 VAR_1->free_inode = VAR_2->free_inode;
 FUNC_2(&VAR_1->i_rcu, VAR_0);
}
