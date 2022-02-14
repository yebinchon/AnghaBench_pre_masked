
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct aspeed_vuart {int clk; TYPE_1__* dev; int line; int unthrottle_timer; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct aspeed_vuart*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct aspeed_vuart* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct aspeed_vuart *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(&VAR_2->unthrottle_timer);
 FUNC_0(VAR_2, 0);
 FUNC_4(VAR_2->line);
 FUNC_5(&VAR_2->dev->kobj, &VAR_0);
 FUNC_1(VAR_2->clk);

 return 0;
}
