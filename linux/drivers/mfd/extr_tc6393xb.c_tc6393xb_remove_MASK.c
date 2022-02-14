
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc6393xb_platform_data {int (* disable ) (struct platform_device*) ;int (* teardown ) (struct platform_device*) ;} ;
struct TYPE_2__ {int base; } ;
struct tc6393xb {int clk; int rscr; int scr; TYPE_1__ gpio; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct tc6393xb_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tc6393xb*) ;
 int FUNC_6 (int *) ;
 struct tc6393xb* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_0)
{
 struct tc6393xb_platform_data *VAR_1 = FUNC_2(&VAR_0->dev);
 struct tc6393xb *VAR_2 = FUNC_7(VAR_0);
 int VAR_3;

 FUNC_6(&VAR_0->dev);

 if (VAR_1->teardown)
  VAR_1->teardown(VAR_0);

 FUNC_11(VAR_0);

 if (VAR_2->gpio.base != -1)
  FUNC_3(&VAR_2->gpio);

 VAR_3 = VAR_1->disable(VAR_0);
 FUNC_0(VAR_2->clk);
 FUNC_4(VAR_2->scr);
 FUNC_8(&VAR_2->rscr);
 FUNC_1(VAR_2->clk);
 FUNC_5(VAR_2);

 return VAR_3;
}
