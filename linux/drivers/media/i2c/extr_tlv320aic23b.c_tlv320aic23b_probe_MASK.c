
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_subdev {TYPE_1__* ctrl_handler; } ;
struct TYPE_6__ {int error; } ;
struct tlv320aic23b_state {TYPE_1__ hdl; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_5__* adapter; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tlv320aic23b_state* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct v4l2_subdev*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int ,int,int,int ) ;
 int FUNC_7 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_7,
         const struct i2c_device_id *VAR_8)
{
 struct tlv320aic23b_state *VAR_9;
 struct v4l2_subdev *VAR_10;


 if (!FUNC_1(VAR_7->adapter, VAR_3))
  return -VAR_0;

 FUNC_8(VAR_7, "chip found @ 0x%x (%s)\n",
   VAR_7->addr << 1, VAR_7->adapter->name);

 VAR_9 = FUNC_0(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;
 VAR_10 = &VAR_9->sd;
 FUNC_7(VAR_10, VAR_7, &VAR_6);




 FUNC_2(VAR_10, 15, 0x000);

 FUNC_2(VAR_10, 6, 0x00A);

 FUNC_2(VAR_10, 7, 0x049);

 FUNC_2(VAR_10, 0, 0x119);

 FUNC_2(VAR_10, 8, 0x000);

 FUNC_2(VAR_10, 9, 0x001);

 FUNC_4(&VAR_9->hdl, 1);
 FUNC_6(&VAR_9->hdl, &VAR_5,
   VAR_4, 0, 1, 1, 0);
 VAR_10->ctrl_handler = &VAR_9->hdl;
 if (VAR_9->hdl.error) {
  int VAR_11 = VAR_9->hdl.error;

  FUNC_3(&VAR_9->hdl);
  return VAR_11;
 }
 FUNC_5(&VAR_9->hdl);
 return 0;
}
