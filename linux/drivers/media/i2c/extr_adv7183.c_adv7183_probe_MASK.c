
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; } ;
struct v4l2_subdev_format {TYPE_1__ format; int which; } ;
struct v4l2_subdev {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int error; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {unsigned int* platform_data; } ;
struct i2c_client {int addr; TYPE_3__ dev; TYPE_2__* adapter; } ;
struct adv7183 {unsigned int reset_pin; unsigned int oe_pin; int std; int output; int input; struct v4l2_ctrl_handler hdl; struct v4l2_subdev sd; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int *,struct v4l2_subdev_format*) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,unsigned int,int ,char*) ;
 struct adv7183* FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (unsigned int,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct v4l2_ctrl_handler*) ;
 int FUNC_10 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_11 (struct v4l2_ctrl_handler*) ;
 int FUNC_12 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_13 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_14 (struct i2c_client*,char*,unsigned int) ;
 int FUNC_15 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_19,
   const struct i2c_device_id *VAR_20)
{
 struct adv7183 *VAR_21;
 struct v4l2_subdev *VAR_22;
 struct v4l2_ctrl_handler *VAR_23;
 int VAR_24;
 struct v4l2_subdev_format VAR_25 = {
  .which = VAR_15,
 };
 const unsigned *VAR_26;


 if (!FUNC_7(VAR_19->adapter, VAR_9))
  return -VAR_4;

 FUNC_15(VAR_19, "chip found @ 0x%02x (%s)\n",
   VAR_19->addr << 1, VAR_19->adapter->name);

 VAR_26 = VAR_19->dev.platform_data;
 if (VAR_26 == ((void*)0))
  return -VAR_3;

 VAR_21 = FUNC_5(&VAR_19->dev, sizeof(*VAR_21), VAR_6);
 if (VAR_21 == ((void*)0))
  return -VAR_5;

 VAR_21->reset_pin = VAR_26[0];
 VAR_21->oe_pin = VAR_26[1];

 if (FUNC_4(&VAR_19->dev, VAR_21->reset_pin,
      VAR_8, "ADV7183 Reset")) {
  FUNC_14(VAR_19, "failed to request GPIO %d\n", VAR_21->reset_pin);
  return -VAR_2;
 }

 if (FUNC_4(&VAR_19->dev, VAR_21->oe_pin,
      VAR_7,
      "ADV7183 Output Enable")) {
  FUNC_14(VAR_19, "failed to request GPIO %d\n", VAR_21->oe_pin);
  return -VAR_2;
 }

 VAR_22 = &VAR_21->sd;
 FUNC_13(VAR_22, VAR_19, &VAR_18);

 VAR_23 = &VAR_21->hdl;
 FUNC_10(VAR_23, 4);
 FUNC_12(VAR_23, &VAR_16,
   VAR_10, -128, 127, 1, 0);
 FUNC_12(VAR_23, &VAR_16,
   VAR_11, 0, 0xFF, 1, 0x80);
 FUNC_12(VAR_23, &VAR_16,
   VAR_13, 0, 0xFFFF, 1, 0x8080);
 FUNC_12(VAR_23, &VAR_16,
   VAR_12, 0, 0xFFFF, 1, 0x8080);

 VAR_22->ctrl_handler = VAR_23;
 if (VAR_23->error) {
  VAR_24 = VAR_23->error;

  FUNC_9(VAR_23);
  return VAR_24;
 }


 VAR_21->std = VAR_14;
 VAR_21->input = VAR_1;
 VAR_21->output = VAR_0;



 FUNC_8(10);
 FUNC_6(VAR_21->reset_pin, 1);

 FUNC_8(5);

 FUNC_3(VAR_22, VAR_17, FUNC_0(VAR_17));
 FUNC_1(VAR_22, VAR_21->std);
 VAR_25.format.width = 720;
 VAR_25.format.height = 576;
 FUNC_2(VAR_22, ((void*)0), &VAR_25);


 VAR_24 = FUNC_11(VAR_23);
 if (VAR_24) {
  FUNC_9(VAR_23);
  return VAR_24;
 }

 return 0;
}
