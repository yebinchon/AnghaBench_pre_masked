
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct dsi_data {int bus_lock; } ;


 int FUNC_0 (int *) ;
 struct platform_device* FUNC_1 (struct omap_dss_device*) ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static void FUNC_3(struct omap_dss_device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_1(VAR_0);
 struct dsi_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_2->bus_lock);
}
