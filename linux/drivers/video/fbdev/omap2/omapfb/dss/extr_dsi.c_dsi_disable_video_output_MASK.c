
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct omap_overlay_manager {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {struct omap_overlay_manager* manager; } ;
struct dsi_data {scalar_t__ mode; TYPE_1__ output; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct platform_device*,int ,int ,int,int) ;
 int FUNC_2 (struct platform_device*,struct omap_overlay_manager*) ;
 struct platform_device* FUNC_3 (struct omap_dss_device*) ;
 struct dsi_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int) ;
 int FUNC_6 (struct platform_device*,int,int) ;
 int FUNC_7 (struct omap_overlay_manager*) ;

__attribute__((used)) static void FUNC_8(struct omap_dss_device *VAR_1, int VAR_2)
{
 struct platform_device *VAR_3 = FUNC_3(VAR_1);
 struct dsi_data *VAR_4 = FUNC_4(VAR_3);
 struct omap_overlay_manager *VAR_5 = VAR_4->output.manager;

 if (VAR_4->mode == VAR_0) {
  FUNC_5(VAR_3, 0);
  FUNC_6(VAR_3, VAR_2, 0);


  FUNC_1(VAR_3, FUNC_0(VAR_2), 0, 4, 4);

  FUNC_6(VAR_3, VAR_2, 1);
  FUNC_5(VAR_3, 1);
 }

 FUNC_7(VAR_5);

 FUNC_2(VAR_3, VAR_5);
}
