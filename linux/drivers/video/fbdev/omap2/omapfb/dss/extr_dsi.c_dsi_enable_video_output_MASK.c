
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct platform_device {int dummy; } ;
struct omap_overlay_manager {int dummy; } ;
struct omap_dss_device {struct omap_overlay_manager* manager; } ;
struct TYPE_2__ {int x_res; } ;
struct dsi_data {int pix_fmt; scalar_t__ mode; TYPE_1__ timings; struct omap_dss_device output; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 scalar_t__ VAR_6 ;
 int FUNC_3 (struct platform_device*,int ,int,int,int) ;
 int FUNC_4 (struct platform_device*,struct omap_overlay_manager*) ;
 int FUNC_5 (struct platform_device*,struct omap_overlay_manager*) ;
 struct platform_device* FUNC_6 (struct omap_dss_device*) ;
 struct dsi_data* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct platform_device*,int) ;
 int FUNC_10 (struct platform_device*,int,int) ;
 int FUNC_11 (struct platform_device*,int,int ,int ,int ) ;
 int FUNC_12 (struct omap_overlay_manager*) ;

__attribute__((used)) static int FUNC_13(struct omap_dss_device *VAR_7, int VAR_8)
{
 struct platform_device *VAR_9 = FUNC_6(VAR_7);
 struct dsi_data *VAR_10 = FUNC_7(VAR_9);
 struct omap_overlay_manager *VAR_11 = VAR_10->output.manager;
 int VAR_12 = FUNC_8(VAR_10->pix_fmt);
 struct omap_dss_device *VAR_13 = &VAR_10->output;
 u8 VAR_14;
 u16 VAR_15;
 int VAR_16;

 if (VAR_13->manager == ((void*)0)) {
  FUNC_2("failed to enable display: no output/manager\n");
  return -VAR_1;
 }

 VAR_16 = FUNC_4(VAR_9, VAR_11);
 if (VAR_16)
  goto err_init_dispc;

 if (VAR_10->mode == VAR_6) {
  switch (VAR_10->pix_fmt) {
  case 128:
   VAR_14 = VAR_4;
   break;
  case 130:
   VAR_14 = VAR_5;
   break;
  case 129:
   VAR_14 = VAR_3;
   break;
  case 131:
   VAR_14 = VAR_2;
   break;
  default:
   VAR_16 = -VAR_0;
   goto err_pix_fmt;
  }

  FUNC_9(VAR_9, 0);
  FUNC_10(VAR_9, VAR_8, 0);


  FUNC_3(VAR_9, FUNC_1(VAR_8), 1, 4, 4);

  VAR_15 = FUNC_0(VAR_10->timings.x_res * VAR_12, 8);

  FUNC_11(VAR_9, VAR_8, VAR_14,
    VAR_15, 0);

  FUNC_10(VAR_9, VAR_8, 1);
  FUNC_9(VAR_9, 1);
 }

 VAR_16 = FUNC_12(VAR_11);
 if (VAR_16)
  goto err_mgr_enable;

 return 0;

err_mgr_enable:
 if (VAR_10->mode == VAR_6) {
  FUNC_9(VAR_9, 0);
  FUNC_10(VAR_9, VAR_8, 0);
 }
err_pix_fmt:
 FUNC_5(VAR_9, VAR_11);
err_init_dispc:
 return VAR_16;
}
