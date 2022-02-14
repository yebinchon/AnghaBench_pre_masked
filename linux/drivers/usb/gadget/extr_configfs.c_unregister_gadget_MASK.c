
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * udc_name; } ;
struct TYPE_3__ {TYPE_2__ gadget_driver; } ;
struct gadget_info {TYPE_1__ composite; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct gadget_info *VAR_1)
{
 int VAR_2;

 if (!VAR_1->composite.gadget_driver.udc_name)
  return -VAR_0;

 VAR_2 = FUNC_1(&VAR_1->composite.gadget_driver);
 if (VAR_2)
  return VAR_2;
 FUNC_0(VAR_1->composite.gadget_driver.udc_name);
 VAR_1->composite.gadget_driver.udc_name = ((void*)0);
 return 0;
}
