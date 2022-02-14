
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct si476x_radio {TYPE_2__* core; } ;
typedef enum si476x_func { ____Placeholder_si476x_func } si476x_func ;
struct TYPE_4__ {int func; } ;
struct TYPE_5__ {TYPE_1__ power_up_parameters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct si476x_radio*,int) ;

__attribute__((used)) static int FUNC_3(struct si476x_radio *VAR_2,
        enum si476x_func VAR_3)
{
 int VAR_4;
 bool VAR_5;





 if (VAR_3 == VAR_2->core->power_up_parameters.func)
  return 0;

 VAR_5 = 1;
 VAR_4 = FUNC_1(VAR_2->core, VAR_5);
 if (VAR_4 < 0) {




  VAR_5 = 0;
  VAR_4 = FUNC_1(VAR_2->core, VAR_5);
  if (VAR_4 < 0)
   return VAR_4;
 }



 VAR_2->core->power_up_parameters.func = VAR_3;

 VAR_4 = FUNC_0(VAR_2->core, VAR_5);
 if (VAR_4 < 0)
  return VAR_4;





 if (VAR_3 != VAR_1 &&
     VAR_3 != VAR_0)
  return VAR_4;

 return FUNC_2(VAR_2, VAR_3);
}
