
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; int * attrs; } ;
struct attribute_set {unsigned int max_members; TYPE_1__ group; } ;
struct attribute_set_obj {struct attribute_set s; int a; } ;
struct attribute {int dummy; } ;


 int VAR_0 ;
 struct attribute_set_obj* FUNC_0 (int,int ) ;

__attribute__((used)) static struct attribute_set *FUNC_1(unsigned int VAR_1,
      const char *VAR_2)
{
 struct attribute_set_obj *VAR_3;

 if (VAR_1 == 0)
  return ((void*)0);


 VAR_3 = FUNC_0(sizeof(struct attribute_set_obj) +
      VAR_1 * sizeof(struct attribute *),
      VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->s.max_members = VAR_1;
 VAR_3->s.group.attrs = &VAR_3->a;
 VAR_3->s.group.name = VAR_2;

 return &VAR_3->s;
}
