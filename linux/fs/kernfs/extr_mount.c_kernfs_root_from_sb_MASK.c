
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int * s_op; } ;
struct kernfs_root {int dummy; } ;
struct TYPE_2__ {struct kernfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;

struct kernfs_root *FUNC_1(struct super_block *VAR_1)
{
 if (VAR_1->s_op == &VAR_0)
  return FUNC_0(VAR_1)->root;
 return ((void*)0);
}
