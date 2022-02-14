
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct panel_drv_data {int channel; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* dsi; } ;
struct omap_dss_device {TYPE_2__ ops; } ;
typedef int buf ;
struct TYPE_3__ {int (* dcs_write_nosync ) (struct omap_dss_device*,int ,int*,int) ;int (* bta_sync ) (struct omap_dss_device*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_dss_device*,int ,int*,int) ;
 int FUNC_1 (struct omap_dss_device*,int ,int*,int) ;
 int FUNC_2 (struct omap_dss_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct panel_drv_data *VAR_2,
  u16 VAR_3, u16 VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct omap_dss_device *VAR_7 = VAR_2->in;
 int VAR_8;
 u16 VAR_9 = VAR_3;
 u16 VAR_10 = VAR_3 + VAR_5 - 1;
 u16 VAR_11 = VAR_4;
 u16 VAR_12 = VAR_4 + VAR_6 - 1;

 u8 VAR_13[5];
 VAR_13[0] = VAR_0;
 VAR_13[1] = (VAR_9 >> 8) & 0xff;
 VAR_13[2] = (VAR_9 >> 0) & 0xff;
 VAR_13[3] = (VAR_10 >> 8) & 0xff;
 VAR_13[4] = (VAR_10 >> 0) & 0xff;

 VAR_8 = VAR_7->ops.dsi->dcs_write_nosync(VAR_7, VAR_2->channel, VAR_13, sizeof(VAR_13));
 if (VAR_8)
  return VAR_8;

 VAR_13[0] = VAR_1;
 VAR_13[1] = (VAR_11 >> 8) & 0xff;
 VAR_13[2] = (VAR_11 >> 0) & 0xff;
 VAR_13[3] = (VAR_12 >> 8) & 0xff;
 VAR_13[4] = (VAR_12 >> 0) & 0xff;

 VAR_8 = VAR_7->ops.dsi->dcs_write_nosync(VAR_7, VAR_2->channel, VAR_13, sizeof(VAR_13));
 if (VAR_8)
  return VAR_8;

 VAR_7->ops.dsi->bta_sync(VAR_7, VAR_2->channel);

 return VAR_8;
}
