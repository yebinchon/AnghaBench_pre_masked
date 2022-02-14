
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int ,int ) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_4, VAR_2, VAR_3))
  FUNC_1(1, VAR_0, VAR_1, "error writing %02x to %02x\n",
    VAR_3, VAR_2);
}
