
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct i2c_client*,int) ;
 struct v4l2_subdev* FUNC_3 (int,int ) ;
 int FUNC_4 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 struct v4l2_subdev *VAR_8;
 unsigned VAR_9;


 if (!FUNC_1(VAR_6->adapter, VAR_4))
  return -VAR_0;

 if ((FUNC_2(VAR_6, 0x1c) & 0xf0) != 0xe0)
  return -VAR_1;

 FUNC_5(VAR_6, "chip found @ 0x%x (%s)\n",
   VAR_6->addr << 1, VAR_6->adapter->name);

 VAR_8 = FUNC_3(sizeof(struct v4l2_subdev), VAR_3);
 if (VAR_8 == ((void*)0))
  return -VAR_2;

 FUNC_4(VAR_8, VAR_6, &VAR_5);


 FUNC_0(VAR_8, 0x0d, 0x00);
 FUNC_0(VAR_8, 0x0e, 0x00);
 FUNC_0(VAR_8, 0x0b, 0x00);

 for (VAR_9 = 1; VAR_9 <= 8; VAR_9++)
  FUNC_0(VAR_8, VAR_9, 0xd2);
 FUNC_0(VAR_8, 0x0a, 0x00);
 return 0;
}
