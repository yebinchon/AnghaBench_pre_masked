
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_sifive_ddata {int lock; int user_count; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pwm_sifive_ddata* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_3(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct pwm_sifive_ddata *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->lock);
 VAR_2->user_count--;
 FUNC_1(&VAR_2->lock);
}
