
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int error; } ;
struct v4l2_subdev {TYPE_1__* ctrl_handler; } ;
struct wm8739_state {int clock_freq; TYPE_1__ hdl; void* volume; void* balance; void* mute; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_5__* adapter; } ;
struct TYPE_7__ {int name; } ;


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
 struct wm8739_state* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (TYPE_1__*,int *,int ,int ,int,int,int) ;
 int FUNC_7 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,char*,int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_15,
   const struct i2c_device_id *VAR_16)
{
 struct wm8739_state *VAR_17;
 struct v4l2_subdev *VAR_18;


 if (!FUNC_1(VAR_15->adapter, VAR_3))
  return -VAR_0;

 FUNC_8(VAR_15, "chip found @ 0x%x (%s)\n",
   VAR_15->addr << 1, VAR_15->adapter->name);

 VAR_17 = FUNC_0(&VAR_15->dev, sizeof(*VAR_17), VAR_2);
 if (VAR_17 == ((void*)0))
  return -VAR_1;
 VAR_18 = &VAR_17->sd;
 FUNC_7(VAR_18, VAR_15, &VAR_14);
 FUNC_4(&VAR_17->hdl, 2);
 VAR_17->volume = FUNC_6(&VAR_17->hdl, &VAR_13,
   VAR_12, 0, 65535, 65535 / 100, 50736);
 VAR_17->mute = FUNC_6(&VAR_17->hdl, &VAR_13,
   VAR_11, 0, 1, 1, 0);
 VAR_17->balance = FUNC_6(&VAR_17->hdl, &VAR_13,
   VAR_10, 0, 65535, 65535 / 100, 32768);
 VAR_18->ctrl_handler = &VAR_17->hdl;
 if (VAR_17->hdl.error) {
  int VAR_19 = VAR_17->hdl.error;

  FUNC_3(&VAR_17->hdl);
  return VAR_19;
 }
 FUNC_2(3, &VAR_17->volume);

 VAR_17->clock_freq = 48000;




 FUNC_9(VAR_18, VAR_4, 0x00);

 FUNC_9(VAR_18, VAR_5, 0x000);

 FUNC_9(VAR_18, VAR_6, 0x000);


 FUNC_9(VAR_18, VAR_7, 0x049);

 FUNC_9(VAR_18, VAR_8, 0x000);

 FUNC_9(VAR_18, VAR_9, 0x001);

 FUNC_5(&VAR_17->hdl);
 return 0;
}
