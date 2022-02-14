
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_core {int revision; } ;
typedef enum si476x_intb_config { ____Placeholder_si476x_intb_config } si476x_intb_config ;
typedef enum si476x_a1_config { ____Placeholder_si476x_a1_config } si476x_a1_config ;
struct TYPE_2__ {int (* intb_pin_cfg ) (struct si476x_core*,int,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct si476x_core*,int,int) ;

int FUNC_2(struct si476x_core *VAR_2,
       enum si476x_intb_config VAR_3,
       enum si476x_a1_config VAR_4)
{
 FUNC_0(VAR_2->revision > VAR_0 ||
        VAR_2->revision == -1);

 return VAR_1[VAR_2->revision].intb_pin_cfg(VAR_2, VAR_3, VAR_4);
}
