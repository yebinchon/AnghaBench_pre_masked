
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_camera {int dummy; } ;
struct regval {int reg; int val; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct stk_camera*) ;
 int FUNC_1 (struct stk_camera*) ;
 int FUNC_2 (struct stk_camera*) ;
 struct regval* VAR_1 ;
 int FUNC_3 (struct stk_camera*,int,int ) ;
 scalar_t__ FUNC_4 (struct stk_camera*) ;

__attribute__((used)) static int FUNC_5(struct stk_camera *VAR_2)
{
 struct regval *VAR_3;
 int VAR_4;
 if (!FUNC_1(VAR_2))
  return -VAR_0;
 if (FUNC_0(VAR_2))
  return 0;
 VAR_3 = VAR_1;
 while (VAR_3->reg != 0xffff) {
  VAR_4 = FUNC_3(VAR_2, VAR_3->reg, VAR_3->val);
  if (VAR_4)
   return VAR_4;
  VAR_3++;
 }
 if (FUNC_4(VAR_2) == 0) {
  FUNC_2(VAR_2);
  return 0;
 } else
  return -1;
}
