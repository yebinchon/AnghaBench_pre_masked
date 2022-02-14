
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_regval {scalar_t__ addr; int val; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,scalar_t__,int ) ;

__attribute__((used)) static inline int FUNC_1(struct v4l2_subdev *VAR_1,
      const struct i2c_regval *VAR_2)
{
 while (VAR_2->addr != VAR_0) {
  int VAR_3 = FUNC_0(VAR_1, VAR_2->addr, VAR_2->val);

  if (VAR_3)
   return VAR_3;
  VAR_2++;
 }
 return 0;
}
