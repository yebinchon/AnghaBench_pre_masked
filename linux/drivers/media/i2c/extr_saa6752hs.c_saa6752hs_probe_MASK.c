
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int error; } ;
struct saa6752hs_state {int revision; int has_ac3; scalar_t__ standard; int video_bitrate_mode; void* video_bitrate; void* video_bitrate_peak; struct v4l2_ctrl_handler hdl; int params; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_1__* adapter; } ;
typedef int data ;
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
 struct saa6752hs_state* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct i2c_client*,int*,int) ;
 int FUNC_2 (struct i2c_client*,int*,int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct v4l2_ctrl_handler*) ;
 int FUNC_5 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_6 (struct v4l2_ctrl_handler*) ;
 void* FUNC_7 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_8 (struct v4l2_ctrl_handler*,int *,int ,int,int,int) ;
 int FUNC_9 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_10 (struct i2c_client*,char*,...) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_32,
  const struct i2c_device_id *VAR_33)
{
 struct saa6752hs_state *VAR_34;
 struct v4l2_subdev *VAR_35;
 struct v4l2_ctrl_handler *VAR_36;
 u8 VAR_37 = 0x13;
 u8 VAR_38[12];

 FUNC_10(VAR_32, "chip found @ 0x%x (%s)\n",
   VAR_32->addr << 1, VAR_32->adapter->name);

 VAR_34 = FUNC_0(&VAR_32->dev, sizeof(*VAR_34), VAR_1);
 if (VAR_34 == ((void*)0))
  return -VAR_0;
 VAR_35 = &VAR_34->sd;
 FUNC_9(VAR_35, VAR_32, &VAR_31);

 FUNC_2(VAR_32, &VAR_37, 1);
 FUNC_1(VAR_32, VAR_38, sizeof(VAR_38));
 VAR_34->revision = (VAR_38[8] << 8) | VAR_38[9];
 VAR_34->has_ac3 = 0;
 if (VAR_34->revision == 0x0206) {
  VAR_34->has_ac3 = 1;
  FUNC_10(VAR_32, "supports AC-3\n");
 }
 VAR_34->params = VAR_29;

 VAR_36 = &VAR_34->hdl;
 FUNC_5(VAR_36, 14);
 FUNC_8(VAR_36, &VAR_30,
  VAR_3,
  VAR_34->has_ac3 ? VAR_18 :
   VAR_19,
  0x0d, VAR_19);

 FUNC_8(VAR_36, &VAR_30,
  VAR_4,
  VAR_21,
  ~((1 << VAR_20) |
    (1 << VAR_21)),
  VAR_20);

 if (VAR_34->has_ac3)
  FUNC_8(VAR_36, &VAR_30,
   VAR_2,
   VAR_17,
   ~((1 << VAR_16) |
     (1 << VAR_17)),
   VAR_16);

 FUNC_8(VAR_36, &VAR_30,
  VAR_5,
  VAR_22,
  ~(1 << VAR_22),
  VAR_22);

 FUNC_8(VAR_36, &VAR_30,
  VAR_15,
  VAR_28,
  ~(1 << VAR_28),
  VAR_28);

 FUNC_8(VAR_36, &VAR_30,
  VAR_11,
  VAR_24, 0x01,
  VAR_25);

 VAR_34->video_bitrate_peak = FUNC_7(VAR_36, &VAR_30,
  VAR_14,
  1000000, 27000000, 1000, 8000000);

 FUNC_8(VAR_36, &VAR_30,
  VAR_10,
  VAR_23,
  ~(1 << VAR_23),
  VAR_23);

 VAR_34->video_bitrate_mode = FUNC_8(VAR_36, &VAR_30,
  VAR_13,
  VAR_26, 0,
  VAR_27);
 VAR_34->video_bitrate = FUNC_7(VAR_36, &VAR_30,
  VAR_12, 1000000, 27000000, 1000, 6000000);
 FUNC_7(VAR_36, &VAR_30,
  VAR_8, 0, (1 << 14) - 1, 1, 16);
 FUNC_7(VAR_36, &VAR_30,
  VAR_6, 0, (1 << 14) - 1, 1, 260);
 FUNC_7(VAR_36, &VAR_30,
  VAR_9, 0, (1 << 14) - 1, 1, 256);
 FUNC_7(VAR_36, &VAR_30,
  VAR_7, 0, (1 << 14) - 1, 1, 259);
 VAR_35->ctrl_handler = VAR_36;
 if (VAR_36->error) {
  int VAR_39 = VAR_36->error;

  FUNC_4(VAR_36);
  return VAR_39;
 }
 FUNC_3(3, &VAR_34->video_bitrate_mode);
 FUNC_6(VAR_36);
 VAR_34->standard = 0;
 return 0;
}
