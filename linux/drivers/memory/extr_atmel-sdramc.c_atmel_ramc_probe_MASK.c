
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct clk {int dummy; } ;
struct at91_ramc_caps {scalar_t__ has_mpddr_clk; scalar_t__ has_ddrck; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,char*) ;
 struct at91_ramc_caps* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 const struct at91_ramc_caps *VAR_1;
 struct clk *VAR_2;

 VAR_1 = FUNC_4(&VAR_0->dev);

 if (VAR_1->has_ddrck) {
  VAR_2 = FUNC_3(&VAR_0->dev, "ddrck");
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);
  FUNC_2(VAR_2);
 }

 if (VAR_1->has_mpddr_clk) {
  VAR_2 = FUNC_3(&VAR_0->dev, "mpddr");
  if (FUNC_0(VAR_2)) {
   FUNC_5("AT91 RAMC: couldn't get mpddr clock\n");
   return FUNC_1(VAR_2);
  }
  FUNC_2(VAR_2);
 }

 return 0;
}
