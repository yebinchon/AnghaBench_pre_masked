
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct m52790_state {int output; int input; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct m52790_state* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_4 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct m52790_state *VAR_9;
 struct v4l2_subdev *VAR_10;


 if (!FUNC_1(VAR_7->adapter, VAR_3))
  return -VAR_0;

 FUNC_4(VAR_7, "chip found @ 0x%x (%s)\n",
   VAR_7->addr << 1, VAR_7->adapter->name);

 VAR_9 = FUNC_0(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_10 = &VAR_9->sd;
 FUNC_3(VAR_10, VAR_7, &VAR_6);
 VAR_9->input = VAR_4;
 VAR_9->output = VAR_5;
 FUNC_2(VAR_10);
 return 0;
}
