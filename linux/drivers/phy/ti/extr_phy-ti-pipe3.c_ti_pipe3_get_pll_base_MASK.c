
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pipe3 {scalar_t__ mode; int pll_ctrl_base; struct device* dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,struct resource*) ;
 struct resource* FUNC_2 (struct platform_device*,int ,char*) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct ti_pipe3 *VAR_2)
{
 struct resource *VAR_3;
 struct device *VAR_4 = VAR_2->dev;
 struct platform_device *VAR_5 = FUNC_3(VAR_4);

 if (VAR_2->mode == VAR_1)
  return 0;

 VAR_3 = FUNC_2(VAR_5, VAR_0,
        "pll_ctrl");
 VAR_2->pll_ctrl_base = FUNC_1(VAR_4, VAR_3);
 return FUNC_0(VAR_2->pll_ctrl_base);
}
