
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct omap_dss_device {int name; } ;
struct panel_drv_data {struct omap_dss_device dssdev; int datapairs; struct omap_dss_device* in; int reset_gpio; } ;
struct panel_acx565akm_platform_data {int name; int datapairs; int source; int reset_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 struct panel_drv_data* FUNC_1 (int *) ;
 struct panel_acx565akm_platform_data* FUNC_2 (int *) ;
 struct omap_dss_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_1)
{
 const struct panel_acx565akm_platform_data *VAR_2;
 struct panel_drv_data *VAR_3 = FUNC_1(&VAR_1->dev);
 struct omap_dss_device *VAR_4, *VAR_5;

 VAR_2 = FUNC_2(&VAR_1->dev);

 VAR_3->reset_gpio = VAR_2->reset_gpio;

 VAR_5 = FUNC_3(VAR_2->source);
 if (VAR_5 == ((void*)0)) {
  FUNC_0(&VAR_1->dev, "failed to find video source '%s'\n",
    VAR_2->source);
  return -VAR_0;
 }
 VAR_3->in = VAR_5;

 VAR_3->datapairs = VAR_2->datapairs;

 VAR_4 = &VAR_3->dssdev;
 VAR_4->name = VAR_2->name;

 return 0;
}
