
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds2760_device_info {int charge_status; int full_counter; int current_uA; int bat; int full_active_uAh; int dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ds2760_device_info*) ;
 int FUNC_2 (struct ds2760_device_info*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ds2760_device_info *VAR_5)
{
 int VAR_6 = VAR_5->charge_status;

 FUNC_1(VAR_5);

 if (VAR_5->charge_status == VAR_4)
  VAR_5->full_counter = 0;

 if (FUNC_3(VAR_5->bat)) {
  if (VAR_5->current_uA > 10000) {
   VAR_5->charge_status = VAR_0;
   VAR_5->full_counter = 0;
  } else if (VAR_5->current_uA < -5000) {
   if (VAR_5->charge_status != VAR_3)
    FUNC_0(VAR_5->dev, "not enough power to "
        "charge\n");
   VAR_5->charge_status = VAR_3;
   VAR_5->full_counter = 0;
  } else if (VAR_5->current_uA < 10000 &&
       VAR_5->charge_status != VAR_2) {





   VAR_5->full_counter++;

   if (VAR_5->full_counter < 2) {
    VAR_5->charge_status = VAR_0;
   } else {
    VAR_5->charge_status = VAR_2;
    FUNC_2(VAR_5,
      VAR_5->full_active_uAh);
   }
  }
 } else {
  VAR_5->charge_status = VAR_1;
  VAR_5->full_counter = 0;
 }

 if (VAR_5->charge_status != VAR_6)
  FUNC_4(VAR_5->bat);
}
