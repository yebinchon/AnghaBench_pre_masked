
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov9740_reg {int val; int reg; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0,
      const struct ov9740_reg *VAR_1,
      int VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0,
           VAR_1[VAR_3].reg, VAR_1[VAR_3].val);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return 0;
}
