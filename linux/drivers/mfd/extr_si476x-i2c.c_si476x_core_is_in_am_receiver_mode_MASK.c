
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ func; } ;
struct si476x_core {TYPE_1__ power_up_parameters; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct si476x_core*) ;

bool FUNC_1(struct si476x_core *VAR_1)
{
 return FUNC_0(VAR_1) &&
  (VAR_1->power_up_parameters.func == VAR_0);
}
