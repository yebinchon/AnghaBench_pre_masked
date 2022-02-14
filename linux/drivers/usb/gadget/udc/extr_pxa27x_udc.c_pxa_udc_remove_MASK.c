
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_udc {int clk; int * transceiver; int gadget; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct pxa_udc* FUNC_2 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct pxa_udc*) ;
 int * VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct pxa_udc *VAR_3 = FUNC_2(VAR_2);

 FUNC_4(&VAR_3->gadget);
 FUNC_3(VAR_3);

 if (!FUNC_0(VAR_3->transceiver)) {
  FUNC_6(VAR_3->transceiver, &VAR_0);
  FUNC_5(VAR_3->transceiver);
 }

 VAR_3->transceiver = ((void*)0);
 VAR_1 = ((void*)0);
 FUNC_1(VAR_3->clk);

 return 0;
}
