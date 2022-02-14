
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb {int dev; struct clk* clk_m; struct clk* pll_u_480m; struct clk* ss_src_clk; } ;
struct clk {int dummy; } ;


 int VAR_0 ;


 struct clk* FUNC_0 (struct clk*) ;
 unsigned long FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*,struct clk*) ;
 int FUNC_3 (struct clk*,unsigned long) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct tegra_xusb *VAR_1,
     unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4;
 struct clk *VAR_5 = VAR_1->ss_src_clk;
 unsigned int VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_5) == VAR_2)
  return 0;

 switch (VAR_2) {
 case 129:




  VAR_4 = FUNC_1(FUNC_0(VAR_5));
  VAR_3 = FUNC_1(VAR_1->pll_u_480m);
  VAR_6 = VAR_3 / VAR_2;

  VAR_7 = FUNC_3(VAR_5, VAR_4 / VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_2(VAR_5, VAR_1->pll_u_480m);
  if (VAR_7)
   return VAR_7;





  VAR_7 = FUNC_3(VAR_5, VAR_2);
  if (VAR_7)
   return VAR_7;

  break;

 case 128:

  VAR_7 = FUNC_2(VAR_5, VAR_1->clk_m);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_3(VAR_5, VAR_2);
  if (VAR_7)
   return VAR_7;

  break;

 default:
  FUNC_4(VAR_1->dev, "Invalid SS rate: %lu Hz\n", VAR_2);
  return -VAR_0;
 }

 if (FUNC_1(VAR_5) != VAR_2) {
  FUNC_4(VAR_1->dev, "SS clock doesn't match requested rate\n");
  return -VAR_0;
 }

 return 0;
}
