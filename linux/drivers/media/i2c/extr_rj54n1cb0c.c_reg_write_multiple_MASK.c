
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rj54n1_reg_val {int val; int reg; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0,
         const struct rj54n1_reg_val *VAR_1, const int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1->reg, VAR_1->val);
  if (VAR_4 < 0)
   return VAR_4;
  VAR_1++;
 }

 return 0;
}
