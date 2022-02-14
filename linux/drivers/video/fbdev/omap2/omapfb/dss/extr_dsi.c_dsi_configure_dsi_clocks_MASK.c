
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dss_pll_clock_info {int dummy; } ;
struct dsi_data {int pll; struct dss_pll_clock_info user_dsi_cinfo; } ;


 int FUNC_0 (char*) ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,struct dss_pll_clock_info*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct dsi_data *VAR_1 = FUNC_1(VAR_0);
 struct dss_pll_clock_info VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->user_dsi_cinfo;

 VAR_3 = FUNC_2(&VAR_1->pll, &VAR_2);
 if (VAR_3) {
  FUNC_0("Failed to set dsi clocks\n");
  return VAR_3;
 }

 return 0;
}
