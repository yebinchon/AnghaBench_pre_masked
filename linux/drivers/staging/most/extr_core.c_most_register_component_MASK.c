
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct core_component {int name; int list; } ;
struct TYPE_2__ {int comp_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct core_component *VAR_2)
{
 if (!VAR_2) {
  FUNC_1("Bad component\n");
  return -VAR_0;
 }
 FUNC_0(&VAR_2->list, &VAR_1.comp_list);
 FUNC_2("registered new core component %s\n", VAR_2->name);
 return 0;
}
