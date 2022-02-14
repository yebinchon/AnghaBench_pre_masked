
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_1__* adapter; } ;
struct bt856 {int norm; struct v4l2_subdev sd; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bt856*) ;
 int VAR_5 ;
 int FUNC_1 (struct bt856*,int,int,int) ;
 int FUNC_2 (struct bt856*,int,int) ;
 scalar_t__ VAR_6 ;
 struct bt856* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct bt856 *VAR_9;
 struct v4l2_subdev *VAR_10;


 if (!FUNC_4(VAR_7->adapter, VAR_3))
  return -VAR_0;

 FUNC_6(VAR_7, "chip found @ 0x%x (%s)\n",
   VAR_7->addr << 1, VAR_7->adapter->name);

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;
 VAR_10 = &VAR_9->sd;
 FUNC_5(VAR_10, VAR_7, &VAR_5);
 VAR_9->norm = VAR_4;

 FUNC_2(VAR_9, 0xdc, 0x18);
 FUNC_2(VAR_9, 0xda, 0);
 FUNC_2(VAR_9, 0xde, 0);

 FUNC_1(VAR_9, 0xdc, 3, 1);

 FUNC_1(VAR_9, 0xdc, 4, 1);

 if (VAR_9->norm & VAR_4)
  FUNC_1(VAR_9, 0xdc, 2, 0);
 else
  FUNC_1(VAR_9, 0xdc, 2, 1);

 FUNC_1(VAR_9, 0xdc, 1, 1);
 FUNC_1(VAR_9, 0xde, 4, 0);
 FUNC_1(VAR_9, 0xde, 3, 1);

 if (VAR_6 != 0)
  FUNC_0(VAR_9);
 return 0;
}
