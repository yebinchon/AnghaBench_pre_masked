
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int ctrl_handler; int entity; } ;
struct i2c_client {int addr; TYPE_1__* adapter; int name; } ;
struct adv7511_state {int chip_revision; int work_queue; int i2c_pktmem; int i2c_cec; int i2c_edid; int edid_handler; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 struct adv7511_state* FUNC_4 (struct v4l2_subdev*) ;
 struct v4l2_subdev* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ,struct v4l2_subdev*,char*,int ,int,int ) ;
 int FUNC_10 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_5(VAR_1);
 struct adv7511_state *VAR_3 = FUNC_4(VAR_2);

 VAR_3->chip_revision = -1;

 FUNC_9(1, VAR_0, VAR_2, "%s removed @ 0x%x (%s)\n", VAR_1->name,
   VAR_1->addr << 1, VAR_1->adapter->name);

 FUNC_1(VAR_2, 0);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_3->edid_handler);
 FUNC_6(VAR_3->i2c_edid);
 FUNC_6(VAR_3->i2c_cec);
 FUNC_6(VAR_3->i2c_pktmem);
 FUNC_3(VAR_3->work_queue);
 FUNC_10(VAR_2);
 FUNC_7(&VAR_2->entity);
 FUNC_8(VAR_2->ctrl_handler);
 return 0;
}
