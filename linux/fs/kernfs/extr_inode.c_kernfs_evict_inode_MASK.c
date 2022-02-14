
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dummy; } ;
struct inode {int i_data; struct kernfs_node* i_private; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct inode *VAR_0)
{
 struct kernfs_node *VAR_1 = VAR_0->i_private;

 FUNC_2(&VAR_0->i_data);
 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
