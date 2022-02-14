
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct ov_regvals {int val; int reg; } ;


 int FUNC_0 (struct sd*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sd *VAR_0,
    const struct ov_regvals *VAR_1,
    int VAR_2)
{
 while (--VAR_2 >= 0) {
  FUNC_0(VAR_0, VAR_1->reg, VAR_1->val);
  VAR_1++;
 }
}
