
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_1__* adapter; } ;
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
 struct v4l2_subdev* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_9 ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ) ;
 int FUNC_3 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_4 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_10,
     const struct i2c_device_id *VAR_11)
{
 struct v4l2_subdev *VAR_12;


 if (!FUNC_1(VAR_10->adapter,
   VAR_3 |
   VAR_4))
  return -VAR_0;

 FUNC_4(VAR_10, "chip found @ 0x%x (%s)\n",
   VAR_10->addr << 1, VAR_10->adapter->name);

 VAR_12 = FUNC_0(&VAR_10->dev, sizeof(*VAR_12), VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_1;
 FUNC_3(VAR_12, VAR_10, &VAR_9);


 FUNC_2(VAR_12, VAR_5, 0);
 FUNC_2(VAR_12, VAR_6, 0);
 FUNC_2(VAR_12, VAR_7, VAR_8);
 return 0;
}
