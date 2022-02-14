
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {TYPE_1__* ctrl_handler; } ;
struct v4l2_ctrl {int flags; } ;
struct TYPE_4__ {int error; } ;
struct tw2804 {int channel; TYPE_1__ hdl; int norm; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; int dev; } ;
struct i2c_adapter {int name; } ;


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
 struct tw2804* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 struct v4l2_ctrl* FUNC_4 (TYPE_1__*,int *,int ,int ,int,int,int) ;
 int FUNC_5 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_18,
       const struct i2c_device_id *VAR_19)
{
 struct i2c_adapter *VAR_20 = VAR_18->adapter;
 struct tw2804 *VAR_21;
 struct v4l2_subdev *VAR_22;
 struct v4l2_ctrl *VAR_23;
 int VAR_24;

 if (!FUNC_1(VAR_20, VAR_3))
  return -VAR_0;

 VAR_21 = FUNC_0(&VAR_18->dev, sizeof(*VAR_21), VAR_2);
 if (VAR_21 == ((void*)0))
  return -VAR_1;
 VAR_22 = &VAR_21->sd;
 FUNC_5(VAR_22, VAR_18, &VAR_17);
 VAR_21->channel = -1;
 VAR_21->norm = VAR_15;

 FUNC_3(&VAR_21->hdl, 10);
 FUNC_4(&VAR_21->hdl, &VAR_16,
    VAR_6, 0, 255, 1, 128);
 FUNC_4(&VAR_21->hdl, &VAR_16,
    VAR_9, 0, 255, 1, 128);
 FUNC_4(&VAR_21->hdl, &VAR_16,
    VAR_13, 0, 255, 1, 128);
 FUNC_4(&VAR_21->hdl, &VAR_16,
    VAR_11, 0, 255, 1, 128);
 FUNC_4(&VAR_21->hdl, &VAR_16,
    VAR_8, 0, 1, 1, 0);
 FUNC_4(&VAR_21->hdl, &VAR_16,
    VAR_4, 0, 1, 1, 0);
 VAR_23 = FUNC_4(&VAR_21->hdl, &VAR_16,
    VAR_10, 0, 255, 1, 128);
 if (VAR_23)
  VAR_23->flags |= VAR_14;
 VAR_23 = FUNC_4(&VAR_21->hdl, &VAR_16,
    VAR_7, 0, 255, 1, 128);
 if (VAR_23)
  VAR_23->flags |= VAR_14;
 VAR_23 = FUNC_4(&VAR_21->hdl, &VAR_16,
    VAR_5, 0, 255, 1, 122);
 if (VAR_23)
  VAR_23->flags |= VAR_14;
 VAR_23 = FUNC_4(&VAR_21->hdl, &VAR_16,
    VAR_12, 0, 255, 1, 122);
 if (VAR_23)
  VAR_23->flags |= VAR_14;
 VAR_22->ctrl_handler = &VAR_21->hdl;
 VAR_24 = VAR_21->hdl.error;
 if (VAR_24) {
  FUNC_2(&VAR_21->hdl);
  return VAR_24;
 }

 FUNC_6(VAR_18, "chip found @ 0x%02x (%s)\n",
   VAR_18->addr << 1, VAR_18->adapter->name);

 return 0;
}
