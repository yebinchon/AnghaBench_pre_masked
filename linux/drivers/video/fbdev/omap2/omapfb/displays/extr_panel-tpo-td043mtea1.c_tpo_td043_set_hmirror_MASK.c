
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int hmirror; int vmirror; int spi; } ;
struct omap_dss_device {int dev; } ;


 struct panel_drv_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct omap_dss_device *VAR_0, bool VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_0(VAR_0->dev);

 VAR_2->hmirror = VAR_1;
 return FUNC_1(VAR_2->spi, VAR_2->hmirror,
   VAR_2->vmirror);
}
