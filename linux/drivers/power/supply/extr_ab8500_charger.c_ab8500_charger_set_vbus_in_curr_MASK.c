
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ usb_current; } ;
struct TYPE_7__ {scalar_t__ set_max; } ;
struct ab8500_charger {int usb_ipt_crnt_lock; int dev; int vbat; TYPE_4__ usb_state; TYPE_3__ max_usb_in_curr; TYPE_2__* bm; } ;
struct TYPE_6__ {TYPE_1__* chg_params; } ;
struct TYPE_5__ {scalar_t__ usb_curr_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ab8500_charger*,int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ab8500_charger *VAR_4,
  int VAR_5)
{
 int VAR_6;
 int VAR_7;


 VAR_6 = FUNC_2(VAR_4->bm->chg_params->usb_curr_max, VAR_5);
 if (VAR_4->max_usb_in_curr.set_max > 0)
  VAR_6 = FUNC_2(VAR_4->max_usb_in_curr.set_max, VAR_6);

 if (VAR_4->usb_state.usb_current >= 0)
  VAR_6 = FUNC_2(VAR_4->usb_state.usb_current, VAR_6);

 switch (VAR_6) {
 case 100:
  if (VAR_4->vbat < VAR_3)
   VAR_6 = VAR_1;
  break;
 case 500:
  if (VAR_4->vbat < VAR_3)
   VAR_6 = VAR_2;
  break;
 default:
  break;
 }

 FUNC_1(VAR_4->dev, "VBUS input current limit set to %d mA\n", VAR_6);

 FUNC_3(&VAR_4->usb_ipt_crnt_lock);
 VAR_7 = FUNC_0(VAR_4, VAR_6,
  VAR_0);
 FUNC_4(&VAR_4->usb_ipt_crnt_lock);

 return VAR_7;
}
