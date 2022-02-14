
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_node {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct bin_attribute {TYPE_1__ attr; } ;
struct attribute_group {struct bin_attribute** bin_attrs; struct attribute** attrs; } ;
struct attribute {int name; } ;


 int FUNC_0 (struct kernfs_node*,int ) ;

__attribute__((used)) static void FUNC_1(struct kernfs_node *VAR_0,
    const struct attribute_group *VAR_1)
{
 struct attribute *const *VAR_2;
 struct bin_attribute *const *VAR_3;

 if (VAR_1->attrs)
  for (VAR_2 = VAR_1->attrs; *VAR_2; VAR_2++)
   FUNC_0(VAR_0, (*VAR_2)->name);
 if (VAR_1->bin_attrs)
  for (VAR_3 = VAR_1->bin_attrs; *VAR_3; VAR_3++)
   FUNC_0(VAR_0, (*VAR_3)->attr.name);
}
