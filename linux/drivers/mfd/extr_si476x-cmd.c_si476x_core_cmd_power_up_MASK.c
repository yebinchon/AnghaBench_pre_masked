
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_power_up_args {int dummy; } ;
struct si476x_core {int revision; } ;
struct TYPE_2__ {int (* power_up ) (struct si476x_core*,struct si476x_power_up_args*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct si476x_core*,struct si476x_power_up_args*) ;

int FUNC_2(struct si476x_core *VAR_2,
        struct si476x_power_up_args *VAR_3)
{
 FUNC_0(VAR_2->revision > VAR_0 ||
        VAR_2->revision == -1);
 return VAR_1[VAR_2->revision].power_up(VAR_2, VAR_3);
}
