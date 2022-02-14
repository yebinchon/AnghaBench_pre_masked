
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* psy; } ;
struct TYPE_7__ {int vbus_drop_end; } ;
struct TYPE_6__ {int charger_connected; } ;
struct ab8500_charger {int charger_attached_mutex; int usb_charger_attached_work; int charger_wq; int parent; TYPE_5__ usb_chg; TYPE_2__ flags; TYPE_1__ usb; int dev; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_9__ {TYPE_3__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_7(struct ab8500_charger *VAR_1,
 bool VAR_2)
{
 if (VAR_2 != VAR_1->usb.charger_connected) {
  FUNC_1(VAR_1->dev, "USB connected:%i\n", VAR_2);
  VAR_1->usb.charger_connected = VAR_2;

  if (!VAR_2)
   VAR_1->flags.vbus_drop_end = 0;

  FUNC_6(&VAR_1->usb_chg.psy->dev.kobj, ((void*)0), "present");

  if (VAR_2) {
   FUNC_3(&VAR_1->charger_attached_mutex);
   FUNC_4(&VAR_1->charger_attached_mutex);

   if (FUNC_2(VAR_1->parent))
    FUNC_5(VAR_1->charger_wq,
        &VAR_1->usb_charger_attached_work,
        VAR_0);
  } else {
   FUNC_0(&VAR_1->usb_charger_attached_work);
   FUNC_3(&VAR_1->charger_attached_mutex);
   FUNC_4(&VAR_1->charger_attached_mutex);
  }
 }
}
