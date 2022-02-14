
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct orion_watchdog {int clk_rate; int clk; scalar_t__ reg; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3,
        struct orion_watchdog *VAR_4)
{
 int VAR_5;

 VAR_4->clk = FUNC_4(&VAR_3->dev, ((void*)0));
 if (FUNC_0(VAR_4->clk))
  return FUNC_1(VAR_4->clk);
 VAR_5 = FUNC_6(VAR_4->clk);
 if (VAR_5) {
  FUNC_7(VAR_4->clk);
  return VAR_5;
 }


 FUNC_3(VAR_4->reg + VAR_0,
   FUNC_2(VAR_2),
   FUNC_2(VAR_2));

 VAR_4->clk_rate = FUNC_5(VAR_4->clk) / VAR_1;
 return 0;
}
