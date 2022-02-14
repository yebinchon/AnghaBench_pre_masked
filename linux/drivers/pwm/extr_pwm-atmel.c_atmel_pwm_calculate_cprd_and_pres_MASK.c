
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pwm_state {unsigned long long period; } ;
struct pwm_chip {int dev; } ;
struct atmel_pwm_chip {TYPE_2__* data; int clk; } ;
struct TYPE_3__ {unsigned long long max_period; scalar_t__ max_pres; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned long long,int ) ;
 struct atmel_pwm_chip* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_2,
          const struct pwm_state *VAR_3,
          unsigned long *VAR_4, u32 *VAR_5)
{
 struct atmel_pwm_chip *VAR_6 = FUNC_3(VAR_2);
 unsigned long long VAR_7 = VAR_3->period;


 VAR_7 *= FUNC_0(VAR_6->clk);
 FUNC_2(VAR_7, VAR_1);

 for (*VAR_5 = 0; VAR_7 > VAR_6->data->cfg.max_period; VAR_7 >>= 1)
  (*VAR_5)++;

 if (*VAR_5 > VAR_6->data->cfg.max_pres) {
  FUNC_1(VAR_2->dev, "pres exceeds the maximum value\n");
  return -VAR_0;
 }

 *VAR_4 = VAR_7;

 return 0;
}
