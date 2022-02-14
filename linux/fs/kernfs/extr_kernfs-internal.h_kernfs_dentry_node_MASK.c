
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_node {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct kernfs_node* i_private; } ;


 TYPE_1__* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;

__attribute__((used)) static inline struct kernfs_node *FUNC_2(struct dentry *VAR_0)
{
 if (FUNC_1(VAR_0))
  return ((void*)0);
 return FUNC_0(VAR_0)->i_private;
}
