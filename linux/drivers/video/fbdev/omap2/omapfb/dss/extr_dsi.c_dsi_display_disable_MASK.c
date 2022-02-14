
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
 int FUNC_3 (struct platform_device*,int,int) ;
 struct platform_device* FUNC_4 (struct omap_dss_device*) ;
 struct dsi_data* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct omap_dss_device *VAR_0,
  bool VAR_1, bool VAR_2)
{
 struct platform_device *VAR_3 = FUNC_4(VAR_0);
 struct dsi_data *VAR_4 = FUNC_5(VAR_3);

 FUNC_0("dsi_display_disable\n");

 FUNC_1(!FUNC_2(VAR_3));

 FUNC_8(&VAR_4->lock);

 FUNC_7(VAR_3, 0);
 FUNC_7(VAR_3, 1);
 FUNC_7(VAR_3, 2);
 FUNC_7(VAR_3, 3);

 FUNC_3(VAR_3, VAR_1, VAR_2);

 FUNC_6(VAR_3);

 FUNC_9(&VAR_4->lock);
}
