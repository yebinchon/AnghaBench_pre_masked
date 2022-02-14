
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pipe3 {scalar_t__ mode; struct clk* div_clk; struct clk* sys_clk; scalar_t__ phy_power_syscon; struct clk* wkupclk; struct clk* refclk; struct device* dev; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*,int) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*) ;

__attribute__((used)) static int FUNC_6(struct ti_pipe3 *VAR_4)
{
 struct clk *VAR_5;
 struct device *VAR_6 = VAR_4->dev;

 VAR_4->refclk = FUNC_5(VAR_6, "refclk");
 if (FUNC_1(VAR_4->refclk)) {
  FUNC_4(VAR_6, "unable to get refclk\n");



  if (VAR_4->mode != VAR_3)
   return FUNC_2(VAR_4->refclk);
 }

 if (VAR_4->mode != VAR_3) {
  VAR_4->wkupclk = FUNC_5(VAR_6, "wkupclk");
  if (FUNC_1(VAR_4->wkupclk)) {
   FUNC_4(VAR_6, "unable to get wkupclk\n");
   return FUNC_2(VAR_4->wkupclk);
  }
 } else {
  VAR_4->wkupclk = FUNC_0(-VAR_1);
 }

 if (VAR_4->mode != VAR_2 || VAR_4->phy_power_syscon) {
  VAR_4->sys_clk = FUNC_5(VAR_6, "sysclk");
  if (FUNC_1(VAR_4->sys_clk)) {
   FUNC_4(VAR_6, "unable to get sysclk\n");
   return -VAR_0;
  }
 }

 if (VAR_4->mode == VAR_2) {
  VAR_5 = FUNC_5(VAR_6, "dpll_ref");
  if (FUNC_1(VAR_5)) {
   FUNC_4(VAR_6, "unable to get dpll ref clk\n");
   return FUNC_2(VAR_5);
  }
  FUNC_3(VAR_5, 1500000000);

  VAR_5 = FUNC_5(VAR_6, "dpll_ref_m2");
  if (FUNC_1(VAR_5)) {
   FUNC_4(VAR_6, "unable to get dpll ref m2 clk\n");
   return FUNC_2(VAR_5);
  }
  FUNC_3(VAR_5, 100000000);

  VAR_5 = FUNC_5(VAR_6, "phy-div");
  if (FUNC_1(VAR_5)) {
   FUNC_4(VAR_6, "unable to get phy-div clk\n");
   return FUNC_2(VAR_5);
  }
  FUNC_3(VAR_5, 100000000);

  VAR_4->div_clk = FUNC_5(VAR_6, "div-clk");
  if (FUNC_1(VAR_4->div_clk)) {
   FUNC_4(VAR_6, "unable to get div-clk\n");
   return FUNC_2(VAR_4->div_clk);
  }
 } else {
  VAR_4->div_clk = FUNC_0(-VAR_1);
 }

 return 0;
}
