
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_value {int val; int reg; } ;
struct ov7251 {int dummy; } ;


 int FUNC_0 (struct ov7251*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ov7251 *VAR_0,
         const struct reg_value *VAR_1,
         unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3, ++VAR_1) {
  VAR_4 = FUNC_0(VAR_0, VAR_1->reg, VAR_1->val);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return 0;
}
