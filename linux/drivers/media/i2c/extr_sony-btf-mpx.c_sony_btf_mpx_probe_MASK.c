
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct sony_btf_mpx {int audmode; scalar_t__ mpxmode; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sony_btf_mpx* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_3 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct sony_btf_mpx *VAR_8;
 struct v4l2_subdev *VAR_9;

 if (!FUNC_1(VAR_6->adapter, VAR_3))
  return -VAR_0;

 FUNC_3(VAR_6, "chip found @ 0x%x (%s)\n",
   VAR_6->addr << 1, VAR_6->adapter->name);

 VAR_8 = FUNC_0(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_9 = &VAR_8->sd;
 FUNC_2(VAR_9, VAR_6, &VAR_5);


 VAR_8->mpxmode = 0;
 VAR_8->audmode = VAR_4;

 return 0;
}
