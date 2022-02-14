
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_wp_data {int base; } ;
typedef enum hdmi_pll_pwr { ____Placeholder_hdmi_pll_pwr } hdmi_pll_pwr ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (int ,int ,int,int ,int) ;

int FUNC_3(struct hdmi_wp_data *VAR_2, enum hdmi_pll_pwr VAR_3)
{

 FUNC_1(VAR_2->base, VAR_1, VAR_3, 3, 2);


 if (FUNC_2(VAR_2->base, VAR_1, 1, 0, VAR_3)
   != VAR_3) {
  FUNC_0("Failed to set PLL_PWR_STATUS\n");
  return -VAR_0;
 }

 return 0;
}
