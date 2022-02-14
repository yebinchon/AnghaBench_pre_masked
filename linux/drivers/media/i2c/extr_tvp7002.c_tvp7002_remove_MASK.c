
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int entity; } ;
struct tvp7002 {int hdl; TYPE_1__ sd; } ;
struct i2c_client {int addr; } ;


 int VAR_0 ;
 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 struct tvp7002* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int ,struct v4l2_subdev*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_0(VAR_1);
 struct tvp7002 *VAR_3 = FUNC_2(VAR_2);

 FUNC_5(1, VAR_0, VAR_2, "Removing tvp7002 adapter"
    "on address 0x%x\n", VAR_1->addr);
 FUNC_3(&VAR_3->sd);



 FUNC_4(&VAR_3->hdl);
 return 0;
}
