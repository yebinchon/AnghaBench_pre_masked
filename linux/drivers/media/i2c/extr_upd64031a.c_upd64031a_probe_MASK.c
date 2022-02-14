
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct upd64031a_state {int gr_mode; int direct_3dycs_connect; int * regs; scalar_t__ ext_vert_sync; scalar_t__ ext_comp_sync; struct v4l2_subdev sd; } ;
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
 struct upd64031a_state* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct v4l2_subdev*,int,int ) ;
 int FUNC_4 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_9,
      const struct i2c_device_id *VAR_10)
{
 struct upd64031a_state *VAR_11;
 struct v4l2_subdev *VAR_12;
 int VAR_13;

 if (!FUNC_1(VAR_9->adapter, VAR_3))
  return -VAR_0;

 FUNC_5(VAR_9, "chip found @ 0x%x (%s)\n",
   VAR_9->addr << 1, VAR_9->adapter->name);

 VAR_11 = FUNC_0(&VAR_9->dev, sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;
 VAR_12 = &VAR_11->sd;
 FUNC_4(VAR_12, VAR_9, &VAR_8);
 FUNC_2(VAR_11->regs, VAR_7, sizeof(VAR_11->regs));
 VAR_11->gr_mode = VAR_6 << 6;
 VAR_11->direct_3dycs_connect = VAR_5 << 4;
 VAR_11->ext_comp_sync = VAR_11->ext_vert_sync = 0;
 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
  FUNC_3(VAR_12, VAR_13, VAR_11->regs[VAR_13]);
 return 0;
}
