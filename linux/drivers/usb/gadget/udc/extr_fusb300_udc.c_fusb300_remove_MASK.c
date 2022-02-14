
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct fusb300 {struct fusb300** ep; int ep0_req; int reg; int gadget; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct fusb300*) ;
 int FUNC_1 (struct fusb300***,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fusb300*) ;
 struct fusb300* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct fusb300 *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 FUNC_6(&VAR_2->gadget);
 FUNC_2(VAR_2->reg);
 FUNC_0(FUNC_5(VAR_1, 0), VAR_2);

 FUNC_1(&VAR_2->ep[0]->ep, VAR_2->ep0_req);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_3(VAR_2->ep[VAR_3]);
 FUNC_3(VAR_2);

 return 0;
}
