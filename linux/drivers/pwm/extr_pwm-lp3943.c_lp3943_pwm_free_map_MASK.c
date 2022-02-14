
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp3943_pwm_map {int num_outputs; int* output; } ;
struct lp3943_pwm {struct lp3943* lp3943; } ;
struct lp3943 {int pin_used; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct lp3943_pwm_map*) ;

__attribute__((used)) static void FUNC_2(struct lp3943_pwm *VAR_0,
    struct lp3943_pwm_map *VAR_1)
{
 struct lp3943 *VAR_2 = VAR_0->lp3943;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_outputs; VAR_3++) {
  VAR_4 = VAR_1->output[VAR_3];
  FUNC_0(VAR_4, &VAR_2->pin_used);
 }

 FUNC_1(VAR_1);
}
