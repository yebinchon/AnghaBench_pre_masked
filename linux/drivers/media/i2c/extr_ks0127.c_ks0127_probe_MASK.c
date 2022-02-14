
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ks0127 {struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ks0127* FUNC_0 (int *,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int VAR_4 ;
 int FUNC_3 (struct v4l2_subdev*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,char*,char*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_5, const struct i2c_device_id *VAR_6)
{
 struct ks0127 *VAR_7;
 struct v4l2_subdev *VAR_8;

 FUNC_6(VAR_5, "%s chip found @ 0x%x (%s)\n",
  VAR_5->addr == (VAR_2 >> 1) ? "addon" : "on-board",
  VAR_5->addr << 1, VAR_5->adapter->name);

 VAR_7 = FUNC_0(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 VAR_8 = &VAR_7->sd;
 FUNC_5(VAR_8, VAR_5, &VAR_4);


 FUNC_1();
 FUNC_3(VAR_8, VAR_3, 0x2c);
 FUNC_4(10);


 FUNC_2(VAR_8);
 return 0;
}
