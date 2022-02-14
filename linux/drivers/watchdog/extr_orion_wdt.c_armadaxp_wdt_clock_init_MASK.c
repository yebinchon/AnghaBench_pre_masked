
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct orion_watchdog {int clk; int clk_rate; scalar_t__ reg; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3,
       struct orion_watchdog *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 VAR_4->clk = FUNC_6(VAR_3->dev.of_node, "fixed");
 if (FUNC_0(VAR_4->clk))
  return FUNC_1(VAR_4->clk);
 VAR_5 = FUNC_4(VAR_4->clk);
 if (VAR_5) {
  FUNC_5(VAR_4->clk);
  return VAR_5;
 }


 VAR_6 = VAR_2 | VAR_0;
 FUNC_2(VAR_4->reg + VAR_1, VAR_6, VAR_6);

 VAR_4->clk_rate = FUNC_3(VAR_4->clk);
 return 0;
}
