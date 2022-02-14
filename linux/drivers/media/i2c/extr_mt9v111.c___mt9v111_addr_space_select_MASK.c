
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct v4l2_subdev {int dummy; } ;
struct mt9v111_dev {scalar_t__ addr_space; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,scalar_t__*) ;
 int FUNC_1 (struct i2c_client*,int ,scalar_t__) ;
 struct v4l2_subdev* FUNC_2 (struct i2c_client*) ;
 struct mt9v111_dev* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2, u16 VAR_3)
{
 struct v4l2_subdev *VAR_4 = FUNC_2(VAR_2);
 struct mt9v111_dev *VAR_5 = FUNC_3(VAR_4);
 u16 VAR_6;
 int VAR_7;

 if (VAR_5->addr_space == VAR_3)
  return 0;

 VAR_7 = FUNC_1(VAR_2, VAR_1, VAR_3);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_0(VAR_2, VAR_1, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6 != VAR_3)
  return -VAR_0;

 VAR_5->addr_space = VAR_3;

 return 0;
}
