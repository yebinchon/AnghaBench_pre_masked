
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gadget_config_name {int list; struct gadget_config_name* configuration; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (struct gadget_config_name*) ;
 int FUNC_1 (int *) ;
 struct gadget_config_name* FUNC_2 (struct config_item*) ;

__attribute__((used)) static void FUNC_3(struct config_item *VAR_0)
{
 struct gadget_config_name *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->configuration);

 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1);
}
