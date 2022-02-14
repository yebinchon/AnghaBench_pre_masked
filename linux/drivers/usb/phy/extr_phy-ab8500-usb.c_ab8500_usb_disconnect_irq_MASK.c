
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* otg; int notifier; } ;
struct ab8500_usb {scalar_t__ mode; int dev; int ab8500; scalar_t__ vbus_draw; TYPE_2__ phy; } ;
typedef int irqreturn_t ;
typedef enum usb_phy_events { ____Placeholder_usb_phy_events } usb_phy_events ;
struct TYPE_3__ {int default_a; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ab8500_usb*) ;
 int FUNC_1 (struct ab8500_usb*) ;
 int FUNC_2 (struct ab8500_usb*,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_10, void *VAR_11)
{
 struct ab8500_usb *VAR_12 = (struct ab8500_usb *) VAR_11;
 enum usb_phy_events VAR_13 = VAR_5;


 if (VAR_12->mode == VAR_6) {
  VAR_12->phy.otg->default_a = 0;
  VAR_12->vbus_draw = 0;
  FUNC_4(&VAR_12->phy.notifier,
    VAR_13, &VAR_12->vbus_draw);
  FUNC_0(VAR_12);
  VAR_12->mode = VAR_7;
 }

 if (VAR_12->mode == VAR_8) {
  FUNC_4(&VAR_12->phy.notifier,
    VAR_13, &VAR_12->vbus_draw);
  FUNC_1(VAR_12);
  FUNC_4(&VAR_12->phy.notifier,
    VAR_9, &VAR_12->vbus_draw);
  VAR_12->mode = VAR_7;
  VAR_12->phy.otg->default_a = 0;
  VAR_12->vbus_draw = 0;
 }

 if (FUNC_5(VAR_12->ab8500)) {
  if (VAR_12->mode == VAR_4) {
   FUNC_2(VAR_12,
     VAR_0);
   FUNC_3(VAR_12->dev,
     VAR_1, VAR_2,
     VAR_0, 0);
  }
 }

 return VAR_3;
}
