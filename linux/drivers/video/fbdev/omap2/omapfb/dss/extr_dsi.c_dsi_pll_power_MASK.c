
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
typedef enum dsi_pll_power_state { ____Placeholder_dsi_pll_power_state } dsi_pll_power_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct platform_device*,int ,int,int,int) ;
 int FUNC_3 (struct platform_device*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5,
  enum dsi_pll_power_state VAR_6)
{
 int VAR_7 = 0;


 if (FUNC_4(VAR_4) &&
   VAR_6 == VAR_2)
  VAR_6 = VAR_1;


 FUNC_2(VAR_5, VAR_0, VAR_6, 31, 30);


 while (FUNC_1(FUNC_3(VAR_5, VAR_0), 29, 28) != VAR_6) {
  if (++VAR_7 > 1000) {
   FUNC_0("Failed to set DSI PLL power mode to %d\n",
     VAR_6);
   return -VAR_3;
  }
  FUNC_5(1);
 }

 return 0;
}
