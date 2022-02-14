
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct attribute** attrs; } ;
struct attribute_set {size_t members; size_t max_members; TYPE_1__ group; } ;
struct attribute {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct attribute_set *VAR_2, struct attribute *VAR_3)
{
 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 if (VAR_2->members >= VAR_2->max_members)
  return -VAR_1;

 VAR_2->group.attrs[VAR_2->members] = VAR_3;
 VAR_2->members++;

 return 0;
}
