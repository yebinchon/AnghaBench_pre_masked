
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {struct clk* tv_dac_clk; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct clk *VAR_3;

 if (FUNC_4(VAR_0)) {
  VAR_3 = FUNC_3(&VAR_2->dev, "tv_dac_clk");
  if (FUNC_1(VAR_3)) {
   FUNC_0("can't get tv_dac_clk\n");
   return FUNC_2(VAR_3);
  }
 } else {
  VAR_3 = ((void*)0);
 }

 VAR_1.tv_dac_clk = VAR_3;

 return 0;
}
