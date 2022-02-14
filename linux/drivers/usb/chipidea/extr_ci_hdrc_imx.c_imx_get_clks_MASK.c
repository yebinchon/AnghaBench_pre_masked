
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ci_hdrc_imx_data {int need_three_clks; void* clk_per; void* clk_ahb; void* clk_ipg; void* clk; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,int,...) ;
 struct ci_hdrc_imx_data* FUNC_3 (struct device*) ;
 void* FUNC_4 (struct device*,char*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct ci_hdrc_imx_data *VAR_1 = FUNC_3(VAR_0);
 int VAR_2 = 0;

 VAR_1->clk_ipg = FUNC_4(VAR_0, "ipg");
 if (FUNC_0(VAR_1->clk_ipg)) {

  VAR_1->clk = FUNC_4(VAR_0, ((void*)0));
  if (FUNC_0(VAR_1->clk)) {
   VAR_2 = FUNC_1(VAR_1->clk);
   FUNC_2(VAR_0,
    "Failed to get clks, err=%ld,%ld\n",
    FUNC_1(VAR_1->clk), FUNC_1(VAR_1->clk_ipg));
   return VAR_2;
  }
  return VAR_2;
 }

 VAR_1->clk_ahb = FUNC_4(VAR_0, "ahb");
 if (FUNC_0(VAR_1->clk_ahb)) {
  VAR_2 = FUNC_1(VAR_1->clk_ahb);
  FUNC_2(VAR_0,
   "Failed to get ahb clock, err=%d\n", VAR_2);
  return VAR_2;
 }

 VAR_1->clk_per = FUNC_4(VAR_0, "per");
 if (FUNC_0(VAR_1->clk_per)) {
  VAR_2 = FUNC_1(VAR_1->clk_per);
  FUNC_2(VAR_0,
   "Failed to get per clock, err=%d\n", VAR_2);
  return VAR_2;
 }

 VAR_1->need_three_clks = 1;
 return VAR_2;
}
