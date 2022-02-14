
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct s5k6aa_regval {scalar_t__ addr; scalar_t__ val; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,scalar_t__) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3,
         const struct s5k6aa_regval *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_1(VAR_3);
 u16 VAR_6 = 0;
 int VAR_7 = 0;

 while (VAR_4->addr != VAR_2) {
  if (VAR_6 != 2)
   VAR_7 = FUNC_0(VAR_5, VAR_1,
            VAR_4->addr);
  if (VAR_7)
   break;
  VAR_7 = FUNC_0(VAR_5, VAR_0, VAR_4->val);
  if (VAR_7)
   break;

  VAR_6 = (VAR_4 + 1)->addr - VAR_4->addr;
  VAR_4++;
 }

 return VAR_7;
}
