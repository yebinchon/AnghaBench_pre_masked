
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct gadget_info* function; } ;
struct TYPE_6__ {TYPE_2__ gadget_driver; } ;
struct TYPE_4__ {int configs; } ;
struct gadget_info {TYPE_3__ composite; int available_func; int string_list; TYPE_1__ cdev; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gadget_info*) ;
 int FUNC_2 (int *) ;
 struct gadget_info* FUNC_3 (struct config_item*) ;

__attribute__((used)) static void FUNC_4(struct config_item *VAR_0)
{
 struct gadget_info *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(!FUNC_2(&VAR_1->cdev.configs));
 FUNC_0(!FUNC_2(&VAR_1->string_list));
 FUNC_0(!FUNC_2(&VAR_1->available_func));
 FUNC_1(VAR_1->composite.gadget_driver.function);
 FUNC_1(VAR_1);
}
