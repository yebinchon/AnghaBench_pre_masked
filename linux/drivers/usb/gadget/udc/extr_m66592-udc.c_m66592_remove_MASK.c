
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct m66592 {int clk; TYPE_2__* pdata; int ep0_req; TYPE_1__* ep; int reg; int timer; int gadget; } ;
struct TYPE_4__ {scalar_t__ on_chip; } ;
struct TYPE_3__ {int ep; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct m66592*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct m66592*) ;
 int FUNC_6 (int *,int ) ;
 struct m66592* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct m66592 *VAR_1 = FUNC_7(VAR_0);

 FUNC_9(&VAR_1->gadget);

 FUNC_2(&VAR_1->timer);
 FUNC_4(VAR_1->reg);
 FUNC_3(FUNC_8(VAR_0, 0), VAR_1);
 FUNC_6(&VAR_1->ep[0].ep, VAR_1->ep0_req);
 if (VAR_1->pdata->on_chip) {
  FUNC_0(VAR_1->clk);
  FUNC_1(VAR_1->clk);
 }
 FUNC_5(VAR_1);
 return 0;
}
