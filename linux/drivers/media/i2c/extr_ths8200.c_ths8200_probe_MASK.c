
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ths8200_state {struct v4l2_subdev sd; int chip_version; } ;
struct i2c_client {int addr; TYPE_1__* adapter; int name; int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ths8200_state* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int VAR_6 ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int,int ,struct v4l2_subdev*,char*,int ) ;
 int FUNC_6 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_7 (struct v4l2_subdev*,char*,int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_7)
{
 struct ths8200_state *VAR_8;
 struct v4l2_subdev *VAR_9;
 int VAR_10;


 if (!FUNC_1(VAR_7->adapter, VAR_3))
  return -VAR_0;

 VAR_8 = FUNC_0(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = &VAR_8->sd;
 FUNC_6(VAR_9, VAR_7, &VAR_6);

 VAR_8->chip_version = FUNC_3(VAR_9, VAR_4);
 FUNC_5(1, VAR_5, VAR_9, "chip version 0x%x\n", VAR_8->chip_version);

 FUNC_2(VAR_9);

 VAR_10 = FUNC_4(&VAR_8->sd);
 if (VAR_10)
  return VAR_10;

 FUNC_7(VAR_9, "%s found @ 0x%x (%s)\n", VAR_7->name,
    VAR_7->addr << 1, VAR_7->adapter->name);

 return 0;
}
