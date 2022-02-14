
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
 int VAR_2 ;
 struct panel_drv_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct panel_drv_data*,int ,int*) ;
 int FUNC_2 (struct panel_drv_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,char*,int) ;
 int FUNC_6 (struct omap_dss_device*) ;
 int FUNC_7 (struct omap_dss_device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
  struct device_attribute *VAR_4, char *VAR_5)
{
 struct panel_drv_data *VAR_6 = FUNC_0(VAR_3);
 struct omap_dss_device *VAR_7 = VAR_6->in;
 u8 VAR_8 = 0;
 int VAR_9;

 FUNC_3(&VAR_6->lock);

 if (VAR_6->enabled) {
  VAR_7->ops.dsi->bus_lock(VAR_7);

  VAR_9 = FUNC_2(VAR_6);
  if (!VAR_9)
   VAR_9 = FUNC_1(VAR_6, VAR_0,
     &VAR_8);

  VAR_7->ops.dsi->bus_unlock(VAR_7);
 } else {
  VAR_9 = -VAR_1;
 }

 FUNC_4(&VAR_6->lock);

 if (VAR_9)
  return VAR_9;

 return FUNC_5(VAR_5, VAR_2, "%d\n", VAR_8);
}
