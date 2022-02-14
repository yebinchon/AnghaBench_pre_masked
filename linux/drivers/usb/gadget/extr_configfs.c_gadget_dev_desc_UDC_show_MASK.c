
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {char* udc_name; } ;
struct TYPE_5__ {TYPE_1__ gadget_driver; } ;
struct TYPE_6__ {TYPE_2__ composite; } ;


 int FUNC_0 (char*,char*,char*) ;
 TYPE_3__* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0, char *VAR_1)
{
 char *VAR_2 = FUNC_1(VAR_0)->composite.gadget_driver.udc_name;

 return FUNC_0(VAR_1, "%s\n", VAR_2 ?: "");
}
