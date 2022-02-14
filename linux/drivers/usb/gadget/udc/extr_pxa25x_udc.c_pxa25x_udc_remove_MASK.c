
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa25x_udc {int * transceiver; scalar_t__ pullup; int gadget; scalar_t__ driver; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pxa25x_udc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct pxa25x_udc*) ;
 int FUNC_3 (struct pxa25x_udc*) ;
 int * VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct pxa25x_udc *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->driver)
  return -VAR_0;

 FUNC_4(&VAR_3->gadget);
 VAR_3->pullup = 0;
 FUNC_2(VAR_3);

 FUNC_3(VAR_3);

 if (!FUNC_0(VAR_3->transceiver))
  VAR_3->transceiver = ((void*)0);

 VAR_1 = ((void*)0);
 return 0;
}
