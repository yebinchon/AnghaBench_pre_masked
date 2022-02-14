
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct asus_wmi_driver {int panel_power; TYPE_1__* quirks; } ;
struct TYPE_3__ {int wapf; scalar_t__ i8042_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct asus_wmi_driver *VAR_5)
{
 int VAR_6;

 VAR_3 = &VAR_2;
 FUNC_0(VAR_1);

 VAR_5->quirks = VAR_3;
 VAR_5->panel_power = VAR_0;


 if (VAR_4 != -1)
  VAR_3->wapf = VAR_4;
 else
  VAR_4 = VAR_3->wapf;

 if (VAR_3->i8042_filter) {
  VAR_6 = FUNC_1(VAR_3->i8042_filter);
  if (VAR_6) {
   FUNC_3("Unable to install key filter\n");
   return;
  }
  FUNC_2("Using i8042 filter function for receiving events\n");
 }
}
