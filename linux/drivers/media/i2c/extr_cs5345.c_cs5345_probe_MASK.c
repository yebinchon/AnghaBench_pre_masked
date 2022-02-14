
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_subdev {TYPE_1__* ctrl_handler; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_5__* adapter; } ;
struct TYPE_6__ {int error; } ;
struct cs5345_state {TYPE_1__ hdl; struct v4l2_subdev sd; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 struct cs5345_state* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int,int,int,int ) ;
 int FUNC_7 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct cs5345_state *VAR_10;
 struct v4l2_subdev *VAR_11;


 if (!FUNC_2(VAR_8->adapter, VAR_3))
  return -VAR_0;

 FUNC_8(VAR_8, "chip found @ 0x%x (%s)\n",
   VAR_8->addr << 1, VAR_8->adapter->name);

 VAR_10 = FUNC_1(&VAR_8->dev, sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;
 VAR_11 = &VAR_10->sd;
 FUNC_7(VAR_11, VAR_8, &VAR_7);

 FUNC_4(&VAR_10->hdl, 2);
 FUNC_6(&VAR_10->hdl, &VAR_6,
   VAR_4, 0, 1, 1, 0);
 FUNC_6(&VAR_10->hdl, &VAR_6,
   VAR_5, -24, 24, 1, 0);
 VAR_11->ctrl_handler = &VAR_10->hdl;
 if (VAR_10->hdl.error) {
  int VAR_12 = VAR_10->hdl.error;

  FUNC_3(&VAR_10->hdl);
  return VAR_12;
 }

 FUNC_5(&VAR_10->hdl);

 FUNC_0(VAR_11, 0x02, 0x00);
 FUNC_0(VAR_11, 0x04, 0x01);
 FUNC_0(VAR_11, 0x09, 0x01);
 return 0;
}
