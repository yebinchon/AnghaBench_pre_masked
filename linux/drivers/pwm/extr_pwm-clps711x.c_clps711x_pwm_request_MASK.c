
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int period; } ;
struct pwm_device {TYPE_1__ args; } ;
struct pwm_chip {int dummy; } ;
struct clps711x_chip {int clk; } ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 struct clps711x_chip* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 struct clps711x_chip *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5 = FUNC_1(VAR_4->clk);

 if (!VAR_5)
  return -VAR_0;


 VAR_3->args.period = FUNC_0(VAR_1, VAR_5);

 return 0;
}
