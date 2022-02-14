
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {int gadget_driver; } ;


 int FUNC_0 (struct dwc3*) ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (struct dwc3*,int,int) ;

int FUNC_3(struct dwc3 *VAR_0)
{
 int VAR_1;

 if (!VAR_0->gadget_driver)
  return 0;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < 0)
  goto err0;

 VAR_1 = FUNC_2(VAR_0, 1, 0);
 if (VAR_1 < 0)
  goto err1;

 return 0;

err1:
 FUNC_1(VAR_0);

err0:
 return VAR_1;
}
