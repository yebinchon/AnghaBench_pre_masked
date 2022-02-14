
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct v4l2_subdev {int dummy; } ;
struct saa7110 {scalar_t__ reg; } ;
struct i2c_client {int adapter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i2c_client*,scalar_t__ const*,unsigned int) ;
 int FUNC_2 (scalar_t__,scalar_t__ const*,unsigned int) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ) ;
 struct saa7110* FUNC_4 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_2, const u8 *VAR_3, unsigned int VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_5(VAR_2);
 struct saa7110 *VAR_6 = FUNC_4(VAR_2);
 int VAR_7 = -1;
 u8 VAR_8 = *VAR_3;


 if (VAR_8 + (VAR_4 - 1) > VAR_1)
  return VAR_7;



 if (FUNC_0(VAR_5->adapter, VAR_0)) {
  VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_4);


  FUNC_2(VAR_6->reg + VAR_8, VAR_3 + 1, VAR_4 - 1);
 } else {
  for (++VAR_3, --VAR_4; VAR_4; VAR_4--) {
   VAR_7 = FUNC_3(VAR_2, VAR_8++, *VAR_3++);
   if (VAR_7 < 0)
    break;
  }
 }

 return VAR_7;
}
