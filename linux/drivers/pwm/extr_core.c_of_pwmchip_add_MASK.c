
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_chip {int of_pwm_n_cells; TYPE_1__* dev; scalar_t__ of_xlate; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct pwm_chip *VAR_1)
{
 if (!VAR_1->dev || !VAR_1->dev->of_node)
  return;

 if (!VAR_1->of_xlate) {
  VAR_1->of_xlate = VAR_0;
  VAR_1->of_pwm_n_cells = 2;
 }

 FUNC_0(VAR_1->dev->of_node);
}
