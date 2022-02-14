
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct panel_drv_data {int i2c_adapter; } ;
struct omap_dss_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,int,int) ;
 int FUNC_1 (int,int) ;
 struct panel_drv_data* FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_3(struct omap_dss_device *VAR_2,
  u8 *VAR_3, int VAR_4)
{
 struct panel_drv_data *VAR_5 = FUNC_2(VAR_2);
 int VAR_6, VAR_7, VAR_8;

 if (!VAR_5->i2c_adapter)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_0, VAR_4);
 VAR_6 = FUNC_0(VAR_5->i2c_adapter, VAR_3, VAR_7, 0);
 if (VAR_6)
  return VAR_6;

 VAR_8 = VAR_7;


 if (VAR_4 > VAR_0 && VAR_3[0x7e] > 0) {
  VAR_7 = FUNC_1(VAR_0, VAR_4 - VAR_0);

  VAR_6 = FUNC_0(VAR_5->i2c_adapter, VAR_3 + VAR_0,
    VAR_7, VAR_0);
  if (VAR_6)
   return VAR_6;

  VAR_8 += VAR_7;
 }

 return VAR_8;
}
