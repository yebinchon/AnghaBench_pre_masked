
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int videomode; scalar_t__ data_lines; struct omap_dss_device* in; } ;
struct TYPE_4__ {TYPE_1__* dpi; } ;
struct omap_dss_device {int state; int dev; TYPE_2__ ops; } ;
struct TYPE_3__ {int (* enable ) (struct omap_dss_device*) ;int (* set_timings ) (struct omap_dss_device*,int *) ;int (* set_data_lines ) (struct omap_dss_device*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct panel_drv_data*,int ,int) ;
 int FUNC_3 (struct panel_drv_data*,int ,int) ;
 int FUNC_4 (struct panel_drv_data*,int) ;
 int FUNC_5 (struct omap_dss_device*) ;
 scalar_t__ FUNC_6 (struct omap_dss_device*) ;
 int FUNC_7 (struct omap_dss_device*,scalar_t__) ;
 int FUNC_8 (struct omap_dss_device*,int *) ;
 int FUNC_9 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_10 (struct omap_dss_device*) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct omap_dss_device *VAR_42)
{
 struct panel_drv_data *VAR_43 = FUNC_10(VAR_42);
 struct omap_dss_device *VAR_44 = VAR_43->in;
 int VAR_45;

 if (!FUNC_5(VAR_42))
  return -VAR_1;

 if (FUNC_6(VAR_42))
  return 0;

 if (VAR_43->data_lines)
  VAR_44->ops.dpi->set_data_lines(VAR_44, VAR_43->data_lines);
 VAR_44->ops.dpi->set_timings(VAR_44, &VAR_43->videomode);

 VAR_45 = VAR_44->ops.dpi->enable(VAR_44);
 if (VAR_45)
  return VAR_45;

 FUNC_0(VAR_42->dev, "td028ttec1_panel_enable() - state %d\n",
  VAR_42->state);


 VAR_45 |= FUNC_4(VAR_43, 0x00);
 FUNC_11(1000, 2000);
 VAR_45 |= FUNC_4(VAR_43, 0x00);
 FUNC_11(1000, 2000);
 VAR_45 |= FUNC_4(VAR_43, 0x00);
 FUNC_11(1000, 2000);

 if (VAR_45) {
  FUNC_1(VAR_42->dev, "transfer error\n");
  goto transfer_err;
 }


 VAR_45 |= FUNC_2(VAR_43, VAR_28, 0x17);


 VAR_45 |= FUNC_2(VAR_43, VAR_13, 0x80);


 VAR_45 |= FUNC_2(VAR_43, VAR_29, 0x00);


 VAR_45 |= FUNC_2(VAR_43, VAR_28, 0x16);


 VAR_45 |= FUNC_3(VAR_43, VAR_27, 0xfff9);


 VAR_45 |= FUNC_4(VAR_43, VAR_35);




 VAR_45 |= FUNC_2(VAR_43, VAR_14, 0x01);
 VAR_45 |= FUNC_2(VAR_43, VAR_15, 0x00);
 VAR_45 |= FUNC_2(VAR_43, VAR_30, 0x60);
 VAR_45 |= FUNC_2(VAR_43, VAR_17, 0x10);
 VAR_45 |= FUNC_2(VAR_43, VAR_9, 0x56);
 VAR_45 |= FUNC_2(VAR_43, VAR_8, 0x33);
 VAR_45 |= FUNC_2(VAR_43, VAR_7, 0x11);
 VAR_45 |= FUNC_2(VAR_43, VAR_7, 0x11);
 VAR_45 |= FUNC_2(VAR_43, VAR_26, 0x02);
 VAR_45 |= FUNC_2(VAR_43, VAR_40, 0x2b);
 VAR_45 |= FUNC_2(VAR_43, VAR_39, 0x40);
 VAR_45 |= FUNC_2(VAR_43, VAR_19, 0x03);
 VAR_45 |= FUNC_2(VAR_43, VAR_12, 0x04);




 VAR_45 |= FUNC_2(VAR_43, VAR_2, 0x04);
 VAR_45 |= FUNC_2(VAR_43, VAR_18, 0x00);

 VAR_45 |= FUNC_2(VAR_43, VAR_36, 0x11);
 VAR_45 |= FUNC_2(VAR_43, VAR_37, 0x11);
 VAR_45 |= FUNC_2(VAR_43, VAR_38, 0x11);
 VAR_45 |= FUNC_3(VAR_43, VAR_31, 0x2040);
 VAR_45 |= FUNC_3(VAR_43, VAR_32, 0x60c0);
 VAR_45 |= FUNC_3(VAR_43, VAR_33, 0x1020);
 VAR_45 |= FUNC_3(VAR_43, VAR_34, 0x60c0);

 VAR_45 |= FUNC_3(VAR_43, VAR_21, 0x5533);
 VAR_45 |= FUNC_2(VAR_43, VAR_22, 0x00);
 VAR_45 |= FUNC_2(VAR_43, VAR_23, 0x00);
 VAR_45 |= FUNC_2(VAR_43, VAR_20, 0x00);

 VAR_45 |= FUNC_3(VAR_43, VAR_24, 0x1f0);
 VAR_45 |= FUNC_2(VAR_43, VAR_5, 0x02);
 VAR_45 |= FUNC_3(VAR_43, VAR_6, 0x0804);

 VAR_45 |= FUNC_2(VAR_43, VAR_11, 0x01);
 VAR_45 |= FUNC_3(VAR_43, VAR_10, 0x0000);

 VAR_45 |= FUNC_3(VAR_43, VAR_25, 0x0d0e);
 VAR_45 |= FUNC_3(VAR_43, VAR_3, 0x11a4);
 VAR_45 |= FUNC_2(VAR_43, VAR_4, 0x0e);

 VAR_45 |= FUNC_4(VAR_43, VAR_16);

 VAR_42->state = VAR_41;

transfer_err:

 return VAR_45 ? -VAR_0 : 0;
}
