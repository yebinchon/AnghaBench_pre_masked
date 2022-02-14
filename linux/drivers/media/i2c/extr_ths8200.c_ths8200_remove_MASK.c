
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ths8200_state {int sd; } ;
struct i2c_client {int addr; TYPE_1__* adapter; int name; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 struct ths8200_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ,struct v4l2_subdev*,char*,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_0(VAR_1);
 struct ths8200_state *VAR_3 = FUNC_2(VAR_2);

 FUNC_4(1, VAR_0, VAR_2, "%s removed @ 0x%x (%s)\n", VAR_1->name,
   VAR_1->addr << 1, VAR_1->adapter->name);

 FUNC_1(VAR_2, 0);
 FUNC_3(&VAR_3->sd);

 return 0;
}
