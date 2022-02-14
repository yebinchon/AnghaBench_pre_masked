
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ac_suspended; int usb_suspended; int suspended_change; } ;
struct abx500_chargalg {int dev; int chargalg_work; int chargalg_wq; TYPE_1__ susp_status; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*,int,long*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct abx500_chargalg *VAR_0,
 const char *VAR_1, size_t VAR_2)
{
 long int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, 10, &VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = VAR_3;
 switch (VAR_4) {
 case 0:

  VAR_0->susp_status.ac_suspended = 1;
  VAR_0->susp_status.usb_suspended = 1;
  VAR_0->susp_status.suspended_change = 1;

  FUNC_2(VAR_0->chargalg_wq,
   &VAR_0->chargalg_work);
  break;
 case 1:

  VAR_0->susp_status.ac_suspended = 0;
  VAR_0->susp_status.suspended_change = 1;

  FUNC_2(VAR_0->chargalg_wq,
   &VAR_0->chargalg_work);
  break;
 case 2:

  VAR_0->susp_status.usb_suspended = 0;
  VAR_0->susp_status.suspended_change = 1;

  FUNC_2(VAR_0->chargalg_wq,
   &VAR_0->chargalg_work);
  break;
 default:
  FUNC_0(VAR_0->dev, "Wrong input\n"
   "Enter 0. Disable AC/USB Charging\n"
   "1. Enable AC charging\n"
   "2. Enable USB Charging\n");
 };
 return FUNC_3(VAR_1);
}
