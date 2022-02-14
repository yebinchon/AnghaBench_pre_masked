
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int error; } ;
struct tw9903 {int norm; struct v4l2_ctrl_handler hdl; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct tw9903* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_5 (struct i2c_client*,char*) ;
 int FUNC_6 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,char*,int,int ) ;
 scalar_t__ FUNC_8 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_12,
        const struct i2c_device_id *VAR_13)
{
 struct tw9903 *VAR_14;
 struct v4l2_subdev *VAR_15;
 struct v4l2_ctrl_handler *VAR_16;


 if (!FUNC_1(VAR_12->adapter, VAR_4))
  return -VAR_1;

 FUNC_7(VAR_12, "chip found @ 0x%02x (%s)\n",
   VAR_12->addr << 1, VAR_12->adapter->name);

 VAR_14 = FUNC_0(&VAR_12->dev, sizeof(*VAR_14), VAR_3);
 if (VAR_14 == ((void*)0))
  return -VAR_2;
 VAR_15 = &VAR_14->sd;
 FUNC_6(VAR_15, VAR_12, &VAR_11);
 VAR_16 = &VAR_14->hdl;
 FUNC_3(VAR_16, 4);
 FUNC_4(VAR_16, &VAR_10,
  VAR_5, -128, 127, 1, 0);
 FUNC_4(VAR_16, &VAR_10,
  VAR_6, 0, 255, 1, 0x60);
 FUNC_4(VAR_16, &VAR_10,
  VAR_7, -128, 127, 1, 0);
 VAR_15->ctrl_handler = VAR_16;
 if (VAR_16->error) {
  int VAR_17 = VAR_16->error;

  FUNC_2(VAR_16);
  return VAR_17;
 }


 VAR_14->norm = VAR_8;

 if (FUNC_8(VAR_15, VAR_9) < 0) {
  FUNC_5(VAR_12, "error initializing TW9903\n");
  return -VAR_0;
 }

 return 0;
}
