
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_spi {int src_clk; struct clk* clk; } ;
struct platform_device {int dev; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_0 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*,struct clk*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 void* FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1, struct sprd_spi *VAR_2)
{
 struct clk *VAR_3, *VAR_4;

 VAR_3 = FUNC_6(&VAR_1->dev, "spi");
 if (FUNC_0(VAR_3)) {
  FUNC_5(&VAR_1->dev, "can't get the spi clock\n");
  VAR_3 = ((void*)0);
 }

 VAR_4 = FUNC_6(&VAR_1->dev, "source");
 if (FUNC_0(VAR_4)) {
  FUNC_5(&VAR_1->dev, "can't get the source clock\n");
  VAR_4 = ((void*)0);
 }

 VAR_2->clk = FUNC_6(&VAR_1->dev, "enable");
 if (FUNC_0(VAR_2->clk)) {
  FUNC_4(&VAR_1->dev, "can't get the enable clock\n");
  return FUNC_1(VAR_2->clk);
 }

 if (!FUNC_3(VAR_3, VAR_4))
  VAR_2->src_clk = FUNC_2(VAR_3);
 else
  VAR_2->src_clk = VAR_0;

 return 0;
}
