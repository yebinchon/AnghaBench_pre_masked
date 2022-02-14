
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct core_component {int name; int list; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct core_component*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;

int FUNC_4(struct core_component *VAR_3)
{
 if (!VAR_3) {
  FUNC_2("Bad component\n");
  return -VAR_0;
 }

 FUNC_0(&VAR_2.bus, ((void*)0), VAR_3, VAR_1);
 FUNC_1(&VAR_3->list);
 FUNC_3("deregistering component %s\n", VAR_3->name);
 return 0;
}
