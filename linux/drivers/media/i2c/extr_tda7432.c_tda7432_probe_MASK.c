
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_subdev {TYPE_2__* ctrl_handler; } ;
struct TYPE_7__ {int error; } ;
struct tda7432 {TYPE_2__ hdl; void* mute; void* bass; void* treble; void* balance; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_1__* adapter; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct tda7432* FUNC_0 (int *,int,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (TYPE_2__*,int *,int ,int,int,int,int) ;
 int FUNC_7 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_8 (struct v4l2_subdev*,char*) ;
 int FUNC_9 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_11,
   const struct i2c_device_id *VAR_12)
{
 struct tda7432 *VAR_13;
 struct v4l2_subdev *VAR_14;

 FUNC_9(VAR_11, "chip found @ 0x%02x (%s)\n",
   VAR_11->addr << 1, VAR_11->adapter->name);

 VAR_13 = FUNC_0(&VAR_11->dev, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;
 VAR_14 = &VAR_13->sd;
 FUNC_7(VAR_14, VAR_11, &VAR_10);
 FUNC_4(&VAR_13->hdl, 5);
 FUNC_6(&VAR_13->hdl, &VAR_9,
  VAR_6, 0, VAR_8 ? 0x68 : 0x4f, 1, VAR_8 ? 0x5d : 0x47);
 VAR_13->mute = FUNC_6(&VAR_13->hdl, &VAR_9,
  VAR_4, 0, 1, 1, 0);
 VAR_13->balance = FUNC_6(&VAR_13->hdl, &VAR_9,
  VAR_2, -31, 31, 1, 0);
 VAR_13->bass = FUNC_6(&VAR_13->hdl, &VAR_9,
  VAR_3, 0, 14, 1, 7);
 VAR_13->treble = FUNC_6(&VAR_13->hdl, &VAR_9,
  VAR_5, 0, 14, 1, 7);
 VAR_14->ctrl_handler = &VAR_13->hdl;
 if (VAR_13->hdl.error) {
  int VAR_15 = VAR_13->hdl.error;

  FUNC_3(&VAR_13->hdl);
  return VAR_15;
 }
 FUNC_2(2, &VAR_13->bass);
 FUNC_2(2, &VAR_13->mute);
 FUNC_5(&VAR_13->hdl);
 if (VAR_7 < 0 || VAR_7 > 15) {
  FUNC_8(VAR_14, "loudness parameter must be between 0 and 15\n");
  if (VAR_7 < 0)
   VAR_7 = 0;
  if (VAR_7 > 15)
   VAR_7 = 15;
 }

 FUNC_1(VAR_14);
 return 0;
}
