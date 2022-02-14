
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r8a66597 {int clk; TYPE_2__* pdata; int ep0_req; TYPE_1__* ep; int timer; int gadget; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ on_chip; } ;
struct TYPE_3__ {int ep; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct r8a66597* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct r8a66597 *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(&VAR_1->gadget);
 FUNC_1(&VAR_1->timer);
 FUNC_3(&VAR_1->ep[0].ep, VAR_1->ep0_req);

 if (VAR_1->pdata->on_chip) {
  FUNC_0(VAR_1->clk);
 }

 return 0;
}
