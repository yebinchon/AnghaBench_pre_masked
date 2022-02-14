
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp3943_pwm_map {int* output; int num_outputs; } ;
struct lp3943_pwm {struct lp3943* lp3943; struct lp3943_platform_data* pdata; } ;
struct lp3943_platform_data {TYPE_1__** pwms; } ;
struct lp3943 {int pin_used; } ;
struct TYPE_2__ {int* output; int num_outputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp3943_pwm_map* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct lp3943_pwm_map*) ;
 struct lp3943_pwm_map* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,int *) ;

__attribute__((used)) static struct lp3943_pwm_map *
FUNC_4(struct lp3943_pwm *VAR_3, int VAR_4)
{
 struct lp3943_platform_data *VAR_5 = VAR_3->pdata;
 struct lp3943 *VAR_6 = VAR_3->lp3943;
 struct lp3943_pwm_map *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_7->output = VAR_5->pwms[VAR_4]->output;
 VAR_7->num_outputs = VAR_5->pwms[VAR_4]->num_outputs;

 for (VAR_8 = 0; VAR_8 < VAR_7->num_outputs; VAR_8++) {
  VAR_9 = VAR_7->output[VAR_8];


  if (FUNC_3(VAR_9, &VAR_6->pin_used)) {
   FUNC_1(VAR_7);
   return FUNC_0(-VAR_0);
  }
 }

 return VAR_7;
}
