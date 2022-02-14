
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rc_dev {struct pwm_ir* priv; } ;
struct pwm_ir {scalar_t__ carrier; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rc_dev *VAR_1, u32 VAR_2)
{
 struct pwm_ir *VAR_3 = VAR_1->priv;

 if (!VAR_2)
  return -VAR_0;

 VAR_3->carrier = VAR_2;

 return 0;
}
