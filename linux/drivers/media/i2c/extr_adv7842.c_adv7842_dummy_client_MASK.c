
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int adapter; } ;


 scalar_t__ FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (int ,int) ;
 int FUNC_3 (struct v4l2_subdev*,int) ;
 int FUNC_4 (struct v4l2_subdev*,int,int) ;
 int FUNC_5 (struct v4l2_subdev*,char*,char const*,...) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static struct i2c_client *FUNC_7(struct v4l2_subdev *VAR_0, const char *VAR_1,
            u8 VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_6(VAR_0);
 struct i2c_client *VAR_5;

 FUNC_4(VAR_0, VAR_3, VAR_2 << 1);

 if (VAR_2 == 0) {
  FUNC_5(VAR_0, "no %s i2c addr configured\n", VAR_1);
  return ((void*)0);
 }

 VAR_5 = FUNC_2(VAR_4->adapter, FUNC_3(VAR_0, VAR_3) >> 1);
 if (FUNC_0(VAR_5)) {
  FUNC_5(VAR_0, "register %s on i2c addr 0x%x failed with %ld\n",
    VAR_1, VAR_2, FUNC_1(VAR_5));
  VAR_5 = ((void*)0);
 }

 return VAR_5;
}
