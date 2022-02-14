
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int dummy; } ;
struct omap_dss_device {int name; int dispc_channel; } ;
struct dpi_data {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct dpi_data* FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (struct dpi_data*) ;
 int FUNC_3 (struct dpi_data*) ;
 int FUNC_4 (struct omap_overlay_manager*,struct omap_dss_device*) ;
 int FUNC_5 (struct omap_overlay_manager*,struct omap_dss_device*) ;
 struct omap_overlay_manager* FUNC_6 (int ) ;
 int FUNC_7 (struct omap_dss_device*,struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_8(struct omap_dss_device *VAR_1,
  struct omap_dss_device *VAR_2)
{
 struct dpi_data *VAR_3 = FUNC_1(VAR_1);
 struct omap_overlay_manager *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_3);

 VAR_4 = FUNC_6(VAR_1->dispc_channel);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_4, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_7(VAR_1, VAR_2);
 if (VAR_5) {
  FUNC_0("failed to connect output to new device: %s\n",
    VAR_2->name);
  FUNC_5(VAR_4, VAR_1);
  return VAR_5;
 }

 return 0;
}
