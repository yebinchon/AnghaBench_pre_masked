
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dummy; } ;
struct inode {struct kernfs_node* i_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct kernfs_node*,struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct inode *VAR_3, int VAR_4)
{
 struct kernfs_node *VAR_5;

 if (VAR_4 & VAR_1)
  return -VAR_0;

 VAR_5 = VAR_3->i_private;

 FUNC_2(&VAR_2);
 FUNC_1(VAR_5, VAR_3);
 FUNC_3(&VAR_2);

 return FUNC_0(VAR_3, VAR_4);
}
