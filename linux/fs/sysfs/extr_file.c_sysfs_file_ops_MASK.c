
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysfs_ops {int dummy; } ;
struct kobject {TYPE_2__* ktype; } ;
struct kernfs_node {int flags; TYPE_1__* parent; } ;
struct TYPE_4__ {struct sysfs_ops const* sysfs_ops; } ;
struct TYPE_3__ {struct kobject* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct kernfs_node*) ;

__attribute__((used)) static const struct sysfs_ops *FUNC_1(struct kernfs_node *VAR_1)
{
 struct kobject *VAR_2 = VAR_1->parent->priv;

 if (VAR_1->flags & VAR_0)
  FUNC_0(VAR_1);
 return VAR_2->ktype ? VAR_2->ktype->sysfs_ops : ((void*)0);
}
