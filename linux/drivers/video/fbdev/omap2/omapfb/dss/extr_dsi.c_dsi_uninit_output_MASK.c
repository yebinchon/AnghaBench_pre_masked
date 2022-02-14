
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct dsi_data {struct omap_dss_device output; } ;


 struct dsi_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0)
{
 struct dsi_data *VAR_1 = FUNC_0(VAR_0);
 struct omap_dss_device *VAR_2 = &VAR_1->output;

 FUNC_1(VAR_2);
}
