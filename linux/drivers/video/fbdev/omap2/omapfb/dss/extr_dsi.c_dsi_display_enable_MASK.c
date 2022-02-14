
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct dsi_data {int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 struct platform_device* FUNC_5 (struct omap_dss_device*) ;
 struct dsi_data* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct omap_dss_device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_5(VAR_0);
 struct dsi_data *VAR_2 = FUNC_6(VAR_1);
 int VAR_3 = 0;

 FUNC_0("dsi_display_enable\n");

 FUNC_1(!FUNC_3(VAR_1));

 FUNC_9(&VAR_2->lock);

 VAR_3 = FUNC_7(VAR_1);
 if (VAR_3)
  goto err_get_dsi;

 FUNC_2(VAR_1);

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  goto err_init_dsi;

 FUNC_10(&VAR_2->lock);

 return 0;

err_init_dsi:
 FUNC_8(VAR_1);
err_get_dsi:
 FUNC_10(&VAR_2->lock);
 FUNC_0("dsi_display_enable FAILED\n");
 return VAR_3;
}
