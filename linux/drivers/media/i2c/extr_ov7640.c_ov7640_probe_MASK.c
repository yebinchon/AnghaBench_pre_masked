
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; int flags; int dev; } ;
struct i2c_adapter {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct v4l2_subdev* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_3 (struct i2c_client*,char*) ;
 int FUNC_4 (struct i2c_client*,char*,int,int ) ;
 scalar_t__ FUNC_5 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 struct v4l2_subdev *VAR_10;

 if (!FUNC_1(VAR_9, VAR_4))
  return -VAR_0;

 VAR_10 = FUNC_0(&VAR_7->dev, sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;
 FUNC_2(VAR_10, VAR_7, &VAR_6);

 VAR_7->flags = VAR_3;

 FUNC_4(VAR_7, "chip found @ 0x%02x (%s)\n",
   VAR_7->addr << 1, VAR_7->adapter->name);

 if (FUNC_5(VAR_7, VAR_5) < 0) {
  FUNC_3(VAR_7, "error initializing OV7640\n");
  return -VAR_0;
 }

 return 0;
}
