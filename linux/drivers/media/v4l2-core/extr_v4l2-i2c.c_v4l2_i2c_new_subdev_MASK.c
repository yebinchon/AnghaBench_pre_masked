
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_device {int dummy; } ;
struct i2c_board_info {int addr; int type; } ;
struct i2c_adapter {int dummy; } ;
typedef int info ;


 int FUNC_0 (struct i2c_board_info*,int ,int) ;
 int FUNC_1 (int ,char const*,int) ;
 struct v4l2_subdev* FUNC_2 (struct v4l2_device*,struct i2c_adapter*,struct i2c_board_info*,unsigned short const*) ;

struct v4l2_subdev *FUNC_3(struct v4l2_device *VAR_0,
     struct i2c_adapter *VAR_1,
     const char *VAR_2,
     u8 VAR_3,
     const unsigned short *VAR_4)
{
 struct i2c_board_info VAR_5;





 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 FUNC_1(VAR_5.type, VAR_2, sizeof(VAR_5.type));
 VAR_5.addr = VAR_3;

 return FUNC_2(VAR_0, VAR_1, &VAR_5,
      VAR_4);
}
