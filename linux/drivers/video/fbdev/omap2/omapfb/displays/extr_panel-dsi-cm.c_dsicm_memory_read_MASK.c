
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct panel_drv_data {int lock; int channel; TYPE_3__* pdev; int enabled; struct omap_dss_device* in; } ;
struct TYPE_10__ {TYPE_4__* dsi; } ;
struct TYPE_6__ {int x_res; int y_res; } ;
struct TYPE_7__ {TYPE_1__ timings; } ;
struct omap_dss_device {TYPE_5__ ops; int * dev; TYPE_2__ panel; } ;
struct TYPE_9__ {int (* set_max_rx_packet_size ) (struct omap_dss_device*,int ,int) ;int (* dcs_read ) (struct omap_dss_device*,int ,int,void*,size_t) ;int (* bus_unlock ) (struct omap_dss_device*) ;int (* bus_lock ) (struct omap_dss_device*) ;} ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct panel_drv_data*,int,int,int,int) ;
 int FUNC_2 (struct panel_drv_data*) ;
 size_t FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct omap_dss_device*) ;
 int FUNC_8 (struct omap_dss_device*,int ,int) ;
 int FUNC_9 (struct omap_dss_device*,int ,int,void*,size_t) ;
 int FUNC_10 (struct omap_dss_device*,int ,int) ;
 int FUNC_11 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_12 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_13(struct omap_dss_device *VAR_4,
  void *VAR_5, size_t VAR_6,
  u16 VAR_7, u16 VAR_8, u16 VAR_9, u16 VAR_10)
{
 struct panel_drv_data *VAR_11 = FUNC_12(VAR_4);
 struct omap_dss_device *VAR_12 = VAR_11->in;
 int VAR_13;
 int VAR_14 = 1;
 int VAR_15;
 unsigned VAR_16 = 0;

 if (VAR_6 < VAR_9 * VAR_10 * 3)
  return -VAR_1;

 FUNC_4(&VAR_11->lock);

 if (!VAR_11->enabled) {
  VAR_13 = -VAR_0;
  goto err1;
 }

 VAR_6 = FUNC_3(VAR_9 * VAR_10 * 3,
   VAR_4->panel.timings.x_res *
   VAR_4->panel.timings.y_res * 3);

 VAR_12->ops.dsi->bus_lock(VAR_12);

 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13)
  goto err2;




 if (VAR_6 % 2)
  VAR_15 = 1;
 else
  VAR_15 = 2;

 FUNC_1(VAR_11, VAR_7, VAR_8, VAR_9, VAR_10);

 VAR_13 = VAR_12->ops.dsi->set_max_rx_packet_size(VAR_12, VAR_11->channel, VAR_15);
 if (VAR_13)
  goto err2;

 while (VAR_16 < VAR_6) {
  u8 VAR_17 = VAR_14 ? 0x2e : 0x3e;
  VAR_14 = 0;

  VAR_13 = VAR_12->ops.dsi->dcs_read(VAR_12, VAR_11->channel, VAR_17,
    VAR_5 + VAR_16, VAR_6 - VAR_16);

  if (VAR_13 < 0) {
   FUNC_0(VAR_4->dev, "read error\n");
   goto err3;
  }

  VAR_16 += VAR_13;

  if (VAR_13 < VAR_15) {
   FUNC_0(&VAR_11->pdev->dev, "short read\n");
   break;
  }

  if (FUNC_6(VAR_3)) {
   FUNC_0(&VAR_11->pdev->dev, "signal pending, "
     "aborting memory read\n");
   VAR_13 = -VAR_2;
   goto err3;
  }
 }

 VAR_13 = VAR_16;

err3:
 VAR_12->ops.dsi->set_max_rx_packet_size(VAR_12, VAR_11->channel, 1);
err2:
 VAR_12->ops.dsi->bus_unlock(VAR_12);
err1:
 FUNC_5(&VAR_11->lock);
 return VAR_13;
}
