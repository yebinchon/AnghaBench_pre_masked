
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_camera {int dummy; } ;
struct regval {int reg; int val; } ;


 int FUNC_0 (struct stk_camera*,int,int) ;

__attribute__((used)) static int FUNC_1(struct stk_camera *VAR_0,
  struct regval *VAR_1)
{
 int VAR_2;
 if (VAR_1 == ((void*)0))
  return 0;
 while (VAR_1->reg != 0xff || VAR_1->val != 0xff) {
  VAR_2 = FUNC_0(VAR_0, VAR_1->reg, VAR_1->val);
  if (VAR_2 != 0)
   return VAR_2;
  VAR_1++;
 }
 return 0;
}
