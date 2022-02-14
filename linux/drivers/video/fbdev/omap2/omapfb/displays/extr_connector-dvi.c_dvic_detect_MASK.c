
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int i2c_adapter; } ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 (int ,unsigned char*,int,int ) ;
 struct panel_drv_data* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static bool FUNC_2(struct omap_dss_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_1(VAR_0);
 unsigned char VAR_2;
 int VAR_3;

 if (!VAR_1->i2c_adapter)
  return 1;

 VAR_3 = FUNC_0(VAR_1->i2c_adapter, &VAR_2, 1, 0);

 return VAR_3 == 0;
}
