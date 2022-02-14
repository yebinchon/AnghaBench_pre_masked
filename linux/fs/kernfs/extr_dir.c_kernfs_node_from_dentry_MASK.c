
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_node {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {int * s_op; } ;


 int FUNC_0 (struct dentry*) ;
 struct kernfs_node* FUNC_1 (struct dentry*) ;
 int VAR_0 ;

struct kernfs_node *FUNC_2(struct dentry *VAR_1)
{
 if (VAR_1->d_sb->s_op == &VAR_0 &&
     !FUNC_0(VAR_1))
  return FUNC_1(VAR_1);
 return ((void*)0);
}
