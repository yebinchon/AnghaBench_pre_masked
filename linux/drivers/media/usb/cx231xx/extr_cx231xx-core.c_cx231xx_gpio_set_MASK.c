
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx_reg_seq {scalar_t__ sleep; int val; int bit; } ;
struct cx231xx {int dummy; } ;


 int FUNC_0 (struct cx231xx*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct cx231xx *VAR_0, struct cx231xx_reg_seq *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1)
  return VAR_2;


 while (VAR_1->sleep >= 0) {
  VAR_2 = FUNC_0(VAR_0, VAR_1->bit, VAR_1->val);
  if (VAR_2 < 0)
   return VAR_2;

  if (VAR_1->sleep > 0)
   FUNC_1(VAR_1->sleep);

  VAR_1++;
 }
 return VAR_2;
}
