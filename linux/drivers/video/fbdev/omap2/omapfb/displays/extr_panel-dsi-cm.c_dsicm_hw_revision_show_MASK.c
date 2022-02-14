
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct panel_drv_data {int lock; scalar_t__ enabled; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* dsi; } ;
struct omap_dss_device {TYPE_2__ ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* bus_unlock ) (struct omap_dss_device*) ;int (* bus_lock ) (struct omap_dss_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct panel_drv_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct panel_drv_data*,int*,int*,int*) ;
 int FUNC_2 (struct panel_drv_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,char*,int,int,int) ;
 int FUNC_6 (struct omap_dss_device*) ;
 int FUNC_7 (struct omap_dss_device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct panel_drv_data *VAR_5 = FUNC_0(VAR_2);
 struct omap_dss_device *VAR_6 = VAR_5->in;
 u8 VAR_7, VAR_8, VAR_9;
 int VAR_10;

 FUNC_3(&VAR_5->lock);

 if (VAR_5->enabled) {
  VAR_6->ops.dsi->bus_lock(VAR_6);

  VAR_10 = FUNC_2(VAR_5);
  if (!VAR_10)
   VAR_10 = FUNC_1(VAR_5, &VAR_7, &VAR_8, &VAR_9);

  VAR_6->ops.dsi->bus_unlock(VAR_6);
 } else {
  VAR_10 = -VAR_0;
 }

 FUNC_4(&VAR_5->lock);

 if (VAR_10)
  return VAR_10;

 return FUNC_5(VAR_4, VAR_1, "%02x.%02x.%02x\n", VAR_7, VAR_8, VAR_9);
}
