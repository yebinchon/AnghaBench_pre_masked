
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kernfs_node {TYPE_1__* parent; } ;
struct TYPE_2__ {struct kobject* priv; } ;


 int FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kobject*) ;

void FUNC_3(struct kernfs_node *VAR_0)
{
 struct kobject *VAR_1 = VAR_0->parent->priv;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_2(VAR_1);
}
