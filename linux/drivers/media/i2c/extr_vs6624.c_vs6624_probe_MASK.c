
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_5__ {int numerator; int denominator; } ;
struct v4l2_subdev {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct vs6624 {unsigned int ce_pin; struct v4l2_ctrl_handler hdl; int fmt; TYPE_1__ frame_rate; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {unsigned int* platform_data; } ;
struct i2c_client {int addr; TYPE_2__* adapter; TYPE_3__ dev; } ;
struct TYPE_6__ {int name; } ;


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
 int FUNC_0 (TYPE_3__*,unsigned int const,int ,char*) ;
 struct vs6624* FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct v4l2_ctrl_handler*) ;
 int FUNC_6 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_7 (struct v4l2_ctrl_handler*) ;
 int FUNC_8 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 int FUNC_9 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_10 (struct i2c_client*,char*,unsigned int const) ;
 int FUNC_11 (struct i2c_client*,char*,int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_12 (struct v4l2_subdev*,int ,int) ;
 int FUNC_13 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_25,
   const struct i2c_device_id *VAR_26)
{
 struct vs6624 *VAR_27;
 struct v4l2_subdev *VAR_28;
 struct v4l2_ctrl_handler *VAR_29;
 const unsigned *VAR_30;
 int VAR_31;


 if (!FUNC_2(VAR_25->adapter, VAR_5))
  return -VAR_1;

 VAR_30 = VAR_25->dev.platform_data;
 if (VAR_30 == ((void*)0))
  return -VAR_0;

 VAR_31 = FUNC_0(&VAR_25->dev, *VAR_30, VAR_4,
        "VS6624 Chip Enable");
 if (VAR_31) {
  FUNC_10(VAR_25, "failed to request GPIO %d\n", *VAR_30);
  return VAR_31;
 }

 FUNC_3(100);

 VAR_27 = FUNC_1(&VAR_25->dev, sizeof(*VAR_27), VAR_3);
 if (VAR_27 == ((void*)0))
  return -VAR_2;

 VAR_28 = &VAR_27->sd;
 FUNC_9(VAR_28, VAR_25, &VAR_21);

 FUNC_13(VAR_28, VAR_22);
 FUNC_12(VAR_28, VAR_17, 0x2);
 FUNC_12(VAR_28, VAR_11, 0x1);
 FUNC_4(10000, 11000);
 FUNC_13(VAR_28, VAR_23);

 FUNC_13(VAR_28, VAR_19);
 FUNC_12(VAR_28, VAR_16, 0xF);
 FUNC_13(VAR_28, VAR_24);


 VAR_27->frame_rate.numerator = VAR_6;
 VAR_27->frame_rate.denominator = 1;
 FUNC_12(VAR_28, VAR_12, 0x0);
 FUNC_12(VAR_28, VAR_15,
   VAR_27->frame_rate.numerator >> 8);
 FUNC_12(VAR_28, VAR_14,
   VAR_27->frame_rate.numerator & 0xFF);
 FUNC_12(VAR_28, VAR_13,
   VAR_27->frame_rate.denominator & 0xFF);

 VAR_27->fmt = VAR_20;
 VAR_27->ce_pin = *VAR_30;

 FUNC_11(VAR_25, "chip found @ 0x%02x (%s)\n",
   VAR_25->addr << 1, VAR_25->adapter->name);

 VAR_29 = &VAR_27->hdl;
 FUNC_6(VAR_29, 4);
 FUNC_8(VAR_29, &VAR_18,
   VAR_7, 0, 0xFF, 1, 0x87);
 FUNC_8(VAR_29, &VAR_18,
   VAR_9, 0, 0xFF, 1, 0x78);
 FUNC_8(VAR_29, &VAR_18,
   VAR_8, 0, 1, 1, 0);
 FUNC_8(VAR_29, &VAR_18,
   VAR_10, 0, 1, 1, 0);

 VAR_28->ctrl_handler = VAR_29;
 if (VAR_29->error) {
  int VAR_32 = VAR_29->error;

  FUNC_5(VAR_29);
  return VAR_32;
 }


 VAR_31 = FUNC_7(VAR_29);
 if (VAR_31)
  FUNC_5(VAR_29);
 return VAR_31;
}
