
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ths7303_state {struct v4l2_subdev sd; struct ths7303_platform_data* pdata; } ;
struct ths7303_platform_data {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {struct ths7303_platform_data* platform_data; } ;
struct i2c_client {int addr; TYPE_2__ dev; TYPE_1__* adapter; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct ths7303_state* FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,char*) ;
 int FUNC_6 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct ths7303_platform_data *VAR_9 = VAR_7->dev.platform_data;
 struct ths7303_state *VAR_10;
 struct v4l2_subdev *VAR_11;

 if (VAR_9 == ((void*)0)) {
  FUNC_0(&VAR_7->dev, "No platform data\n");
  return -VAR_0;
 }

 if (!FUNC_2(VAR_7->adapter, VAR_4))
  return -VAR_1;

 FUNC_6(VAR_7, "chip found @ 0x%x (%s)\n",
   VAR_7->addr << 1, VAR_7->adapter->name);

 VAR_10 = FUNC_1(&VAR_7->dev, sizeof(struct ths7303_state),
        VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->pdata = VAR_9;
 VAR_11 = &VAR_10->sd;
 FUNC_4(VAR_11, VAR_7, &VAR_6);


 if (FUNC_3(VAR_11, VAR_5) < 0) {
  FUNC_5(VAR_7, "Setting to 480I_576I filter mode failed!\n");
  return -VAR_0;
 }

 return 0;
}
