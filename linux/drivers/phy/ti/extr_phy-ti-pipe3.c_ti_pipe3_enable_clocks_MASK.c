
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pipe3 {int refclk; int wkupclk; int dev; int div_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct ti_pipe3 *VAR_0)
{
 int VAR_1 = 0;

 if (!FUNC_0(VAR_0->refclk)) {
  VAR_1 = FUNC_2(VAR_0->refclk);
  if (VAR_1) {
   FUNC_3(VAR_0->dev, "Failed to enable refclk %d\n", VAR_1);
   return VAR_1;
  }
 }

 if (!FUNC_0(VAR_0->wkupclk)) {
  VAR_1 = FUNC_2(VAR_0->wkupclk);
  if (VAR_1) {
   FUNC_3(VAR_0->dev, "Failed to enable wkupclk %d\n", VAR_1);
   goto disable_refclk;
  }
 }

 if (!FUNC_0(VAR_0->div_clk)) {
  VAR_1 = FUNC_2(VAR_0->div_clk);
  if (VAR_1) {
   FUNC_3(VAR_0->dev, "Failed to enable div_clk %d\n", VAR_1);
   goto disable_wkupclk;
  }
 }

 return 0;

disable_wkupclk:
 if (!FUNC_0(VAR_0->wkupclk))
  FUNC_1(VAR_0->wkupclk);

disable_refclk:
 if (!FUNC_0(VAR_0->refclk))
  FUNC_1(VAR_0->refclk);

 return VAR_1;
}
