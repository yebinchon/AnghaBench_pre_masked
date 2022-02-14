
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int function; } ;
struct v4l2_subdev {TYPE_1__ entity; struct v4l2_ctrl_handler* ctrl_handler; int flags; } ;
struct v4l2_dv_timings {int dummy; } ;
struct v4l2_ctrl_handler {int error; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_10__ {struct ad9389b_platform_data* platform_data; } ;
struct i2c_client {int addr; TYPE_4__* adapter; int name; TYPE_6__ dev; } ;
struct TYPE_8__ {int flags; } ;
struct ad9389b_state {int chip_revision; struct v4l2_ctrl_handler hdl; struct v4l2_dv_timings dv_timings; int edid_handler; int edid_i2c_client; TYPE_2__ pad; void* rgb_quantization_range_ctrl; void* have_edid0_ctrl; void* rx_sense_ctrl; void* hotplug_ctrl; void* hdmi_mode_ctrl; struct v4l2_subdev sd; int pdata; } ;
struct ad9389b_platform_data {int dummy; } ;
struct TYPE_9__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct v4l2_dv_timings VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct v4l2_subdev*) ;
 int VAR_20 ;
 int FUNC_4 (struct v4l2_subdev*,int) ;
 int FUNC_5 (struct v4l2_subdev*,int) ;
 int VAR_21 ;
 struct ad9389b_state* FUNC_6 (TYPE_6__*,int,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_11 (int *,struct ad9389b_platform_data*,int) ;
 int FUNC_12 (struct v4l2_ctrl_handler*) ;
 int FUNC_13 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_14 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int ,int ) ;
 void* FUNC_15 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;
 int FUNC_16 (int,int ,struct v4l2_subdev*,char*,int,int) ;
 int FUNC_17 (struct v4l2_subdev*,char*,...) ;
 int FUNC_18 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_19 (struct v4l2_subdev*,char*,int ,int,int ) ;
 int FUNC_20 (int,int ,struct i2c_client*,char*,int) ;
 int FUNC_21 (struct i2c_client*,char*) ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_22, const struct i2c_device_id *VAR_23)
{
 const struct v4l2_dv_timings VAR_24 = VAR_12;
 struct ad9389b_state *VAR_25;
 struct ad9389b_platform_data *VAR_26 = VAR_22->dev.platform_data;
 struct v4l2_ctrl_handler *VAR_27;
 struct v4l2_subdev *VAR_28;
 int VAR_29 = -VAR_0;


 if (!FUNC_7(VAR_22->adapter, VAR_4))
  return -VAR_0;

 FUNC_20(1, VAR_21, VAR_22, "detecting ad9389b client on address 0x%x\n",
  VAR_22->addr << 1);

 VAR_25 = FUNC_6(&VAR_22->dev, sizeof(*VAR_25), VAR_3);
 if (!VAR_25)
  return -VAR_2;


 if (VAR_26 == ((void*)0)) {
  FUNC_21(VAR_22, "No platform data!\n");
  return -VAR_1;
 }
 FUNC_11(&VAR_25->pdata, VAR_26, sizeof(VAR_25->pdata));

 VAR_28 = &VAR_25->sd;
 FUNC_18(VAR_28, VAR_22, &VAR_20);
 VAR_28->flags |= VAR_17;

 VAR_27 = &VAR_25->hdl;
 FUNC_13(VAR_27, 5);

 VAR_25->hdmi_mode_ctrl = FUNC_15(VAR_27, &VAR_18,
   VAR_9, VAR_16,
   0, VAR_15);
 VAR_25->hotplug_ctrl = FUNC_14(VAR_27, ((void*)0),
   VAR_8, 0, 1, 0, 0);
 VAR_25->rx_sense_ctrl = FUNC_14(VAR_27, ((void*)0),
   VAR_11, 0, 1, 0, 0);
 VAR_25->have_edid0_ctrl = FUNC_14(VAR_27, ((void*)0),
   VAR_7, 0, 1, 0, 0);
 VAR_25->rgb_quantization_range_ctrl =
  FUNC_15(VAR_27, &VAR_18,
   VAR_10, VAR_14,
   0, VAR_13);
 VAR_28->ctrl_handler = VAR_27;
 if (VAR_27->error) {
  VAR_29 = VAR_27->error;

  goto err_hdl;
 }
 VAR_25->pad.flags = VAR_6;
 VAR_28->entity.function = VAR_5;
 VAR_29 = FUNC_10(&VAR_28->entity, 1, &VAR_25->pad);
 if (VAR_29)
  goto err_hdl;

 VAR_25->chip_revision = FUNC_4(VAR_28, 0x0);
 if (VAR_25->chip_revision != 2) {
  FUNC_17(VAR_28, "chip_revision %d != 2\n", VAR_25->chip_revision);
  VAR_29 = -VAR_0;
  goto err_entity;
 }
 FUNC_16(1, VAR_21, VAR_28, "reg 0x41 0x%x, chip version (reg 0x00) 0x%x\n",
   FUNC_4(VAR_28, 0x41), VAR_25->chip_revision);

 VAR_25->edid_i2c_client = FUNC_8(VAR_22->adapter, (0x7e >> 1));
 if (FUNC_1(VAR_25->edid_i2c_client)) {
  FUNC_17(VAR_28, "failed to register edid i2c client\n");
  VAR_29 = FUNC_2(VAR_25->edid_i2c_client);
  goto err_entity;
 }

 FUNC_0(&VAR_25->edid_handler, VAR_19);
 VAR_25->dv_timings = VAR_24;

 FUNC_3(VAR_28);
 FUNC_5(VAR_28, 1);

 FUNC_19(VAR_28, "%s found @ 0x%x (%s)\n", VAR_22->name,
    VAR_22->addr << 1, VAR_22->adapter->name);
 return 0;

err_entity:
 FUNC_9(&VAR_28->entity);
err_hdl:
 FUNC_12(&VAR_25->hdl);
 return VAR_29;
}
