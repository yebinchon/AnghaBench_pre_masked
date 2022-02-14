
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct config_usb_cfg* label; int list; int functions; } ;
struct config_usb_cfg {TYPE_1__ c; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct config_usb_cfg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct config_usb_cfg* FUNC_4 (struct config_item*) ;

__attribute__((used)) static void FUNC_5(struct config_item *VAR_0)
{
 struct config_usb_cfg *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(!FUNC_3(&VAR_1->c.functions));
 FUNC_2(&VAR_1->c.list);
 FUNC_1(VAR_1->c.label);
 FUNC_1(VAR_1);
}
