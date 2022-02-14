
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct omap_dss_device {int name; } ;
struct panel_drv_data {struct omap_dss_device dssdev; int invert_polarity; struct omap_dss_device* in; } ;
struct connector_atv_platform_data {int name; int invert_polarity; int source; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct connector_atv_platform_data* FUNC_1 (int *) ;
 struct omap_dss_device* FUNC_2 (int ) ;
 struct panel_drv_data* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_3(VAR_1);
 struct connector_atv_platform_data *VAR_3;
 struct omap_dss_device *VAR_4, *VAR_5;

 VAR_3 = FUNC_1(&VAR_1->dev);

 VAR_4 = FUNC_2(VAR_3->source);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(&VAR_1->dev, "Failed to find video source\n");
  return -VAR_0;
 }

 VAR_2->in = VAR_4;

 VAR_2->invert_polarity = VAR_3->invert_polarity;

 VAR_5 = &VAR_2->dssdev;
 VAR_5->name = VAR_3->name;

 return 0;
}
