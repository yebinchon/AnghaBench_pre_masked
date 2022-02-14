
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_subdev {TYPE_1__* ctrl_handler; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_5__* adapter; int dev; } ;
struct TYPE_6__ {int error; } ;
struct bt819 {int enable; TYPE_1__ hdl; scalar_t__ input; int norm; struct v4l2_subdev sd; } ;
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
 int FUNC_0 (struct v4l2_subdev*) ;
 int VAR_10 ;
 int FUNC_1 (struct bt819*,int) ;
 int VAR_11 ;
 struct bt819* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int,int,int,int) ;
 int FUNC_8 (int,int ,struct v4l2_subdev*,char*,int) ;
 int FUNC_9 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_10 (struct i2c_client*,char*,char const*,int,int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_12,
   const struct i2c_device_id *VAR_13)
{
 int VAR_14, VAR_15;
 struct bt819 *VAR_16;
 struct v4l2_subdev *VAR_17;
 const char *VAR_18;


 if (!FUNC_3(VAR_12->adapter, VAR_3))
  return -VAR_0;

 VAR_16 = FUNC_2(&VAR_12->dev, sizeof(*VAR_16), VAR_2);
 if (VAR_16 == ((void*)0))
  return -VAR_1;
 VAR_17 = &VAR_16->sd;
 FUNC_9(VAR_17, VAR_12, &VAR_10);

 VAR_15 = FUNC_1(VAR_16, 0x17);
 switch (VAR_15 & 0xf0) {
 case 0x70:
  VAR_18 = "bt819a";
  break;
 case 0x60:
  VAR_18 = "bt817a";
  break;
 case 0x20:
  VAR_18 = "bt815a";
  break;
 default:
  FUNC_8(1, VAR_11, VAR_17,
   "unknown chip version 0x%02x\n", VAR_15);
  return -VAR_0;
 }

 FUNC_10(VAR_12, "%s found @ 0x%x (%s)\n", VAR_18,
   VAR_12->addr << 1, VAR_12->adapter->name);

 VAR_16->norm = VAR_8;
 VAR_16->input = 0;
 VAR_16->enable = 1;

 VAR_14 = FUNC_0(VAR_17);
 if (VAR_14 < 0)
  FUNC_8(1, VAR_11, VAR_17, "init status %d\n", VAR_14);

 FUNC_5(&VAR_16->hdl, 4);
 FUNC_7(&VAR_16->hdl, &VAR_9,
   VAR_4, -128, 127, 1, 0);
 FUNC_7(&VAR_16->hdl, &VAR_9,
   VAR_5, 0, 511, 1, 0xd8);
 FUNC_7(&VAR_16->hdl, &VAR_9,
   VAR_7, 0, 511, 1, 0xfe);
 FUNC_7(&VAR_16->hdl, &VAR_9,
   VAR_6, -128, 127, 1, 0);
 VAR_17->ctrl_handler = &VAR_16->hdl;
 if (VAR_16->hdl.error) {
  int VAR_19 = VAR_16->hdl.error;

  FUNC_4(&VAR_16->hdl);
  return VAR_19;
 }
 FUNC_6(&VAR_16->hdl);
 return 0;
}
