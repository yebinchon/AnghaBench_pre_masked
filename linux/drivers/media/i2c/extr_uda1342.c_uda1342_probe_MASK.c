
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; int dev; } ;
struct i2c_adapter {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int ) ;
 struct v4l2_subdev* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_4 (struct i2c_client*,char*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_5,
        const struct i2c_device_id *VAR_6)
{
 struct i2c_adapter *VAR_7 = VAR_5->adapter;
 struct v4l2_subdev *VAR_8;

 if (!FUNC_2(VAR_7, VAR_3))
  return -VAR_0;

 FUNC_0(&VAR_5->dev, "initializing UDA1342 at address %d on %s\n",
  VAR_5->addr, VAR_7->name);

 VAR_8 = FUNC_1(&VAR_5->dev, sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 FUNC_3(VAR_8, VAR_5, &VAR_4);

 FUNC_5(VAR_5, 0x00, 0x8000);
 FUNC_5(VAR_5, 0x00, 0x1241);

 FUNC_4(VAR_5, "chip found @ 0x%02x (%s)\n",
   VAR_5->addr << 1, VAR_5->adapter->name);

 return 0;
}
