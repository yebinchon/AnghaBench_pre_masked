
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct s3c_adc_bat {int cable_plugged; int psy; void* status; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ gpio_charge_finished; int (* enable_charger ) () ;int (* disable_charger ) () ;} ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct s3c_adc_bat*) ;
 struct s3c_adc_bat VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_4)
{
 struct s3c_adc_bat *VAR_5 = &VAR_3;
 int VAR_6;
 int VAR_7;
 static int VAR_8;

 VAR_7 = FUNC_1(VAR_5->psy);
 VAR_5->cable_plugged = VAR_7;
 if (VAR_7 != VAR_8) {
  VAR_8 = VAR_7;
  if (VAR_7) {
   if (VAR_5->pdata->enable_charger)
    VAR_5->pdata->enable_charger();
   VAR_5->status = VAR_0;
  } else {
   if (VAR_5->pdata->disable_charger)
    VAR_5->pdata->disable_charger();
   VAR_5->status = VAR_1;
  }
 } else {
  if ((VAR_5->pdata->gpio_charge_finished >= 0) && VAR_7) {
   VAR_6 = FUNC_0(&VAR_3);
   if (VAR_6) {
    if (VAR_5->pdata->disable_charger)
     VAR_5->pdata->disable_charger();
    VAR_5->status = VAR_2;
   } else {
    if (VAR_5->pdata->enable_charger)
     VAR_5->pdata->enable_charger();
    VAR_5->status = VAR_0;
   }
  }
 }

 FUNC_2(VAR_5->psy);
}
