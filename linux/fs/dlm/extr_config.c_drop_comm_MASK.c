
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_comm {size_t addr_count; int * addr; int nodeid; } ;
struct config_item {int dummy; } ;
struct config_group {int dummy; } ;


 int FUNC_0 (struct config_item*) ;
 struct dlm_comm* FUNC_1 (struct config_item*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct dlm_comm* VAR_0 ;

__attribute__((used)) static void FUNC_4(struct config_group *VAR_1, struct config_item *VAR_2)
{
 struct dlm_comm *VAR_3 = FUNC_1(VAR_2);
 if (VAR_0 == VAR_3)
  VAR_0 = ((void*)0);
 FUNC_2(VAR_3->nodeid);
 while (VAR_3->addr_count--)
  FUNC_3(VAR_3->addr[VAR_3->addr_count]);
 FUNC_0(VAR_2);
}
