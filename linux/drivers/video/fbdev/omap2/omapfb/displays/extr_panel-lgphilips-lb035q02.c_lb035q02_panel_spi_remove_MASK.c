
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct omap_dss_device {int dummy; } ;
struct panel_drv_data {struct omap_dss_device* in; struct omap_dss_device dssdev; } ;


 struct panel_drv_data* FUNC_0 (int *) ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_0(&VAR_0->dev);
 struct omap_dss_device *VAR_2 = &VAR_1->dssdev;
 struct omap_dss_device *VAR_3 = VAR_1->in;

 FUNC_4(VAR_2);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 FUNC_3(VAR_3);

 return 0;
}
