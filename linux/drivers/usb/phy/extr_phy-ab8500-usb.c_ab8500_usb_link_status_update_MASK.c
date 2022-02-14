
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int notifier; TYPE_1__* otg; } ;
struct ab8500_usb {scalar_t__ previous_link_status_state; TYPE_2__ phy; int vbus_draw; int mode; int dev; } ;
typedef enum ux500_musb_vbus_id_status { ____Placeholder_ux500_musb_vbus_id_status } ux500_musb_vbus_id_status ;
typedef enum ab8500_usb_link_status { ____Placeholder_ab8500_usb_link_status } ab8500_usb_link_status ;
struct TYPE_3__ {int default_a; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct ab8500_usb*) ;
 int FUNC_1 (struct ab8500_usb*) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(struct ab8500_usb *VAR_16,
  enum ab8500_usb_link_status VAR_17)
{
 enum ux500_musb_vbus_id_status VAR_18 = 0;

 FUNC_3(VAR_16->dev, "ab8500_usb_link_status_update %d\n", VAR_17);





 if (VAR_16->previous_link_status_state == 137 &&
   (VAR_17 == 130 ||
    VAR_17 == 128))
  return 0;

 if (VAR_16->previous_link_status_state == 143 &&
   VAR_17 == 128)
  return 0;

 VAR_16->previous_link_status_state = VAR_17;

 switch (VAR_17) {
 case 142:
  VAR_18 = VAR_13;

 case 133:
 case 132:
  VAR_16->mode = VAR_6;
  VAR_16->phy.otg->default_a = 0;
  VAR_16->vbus_draw = 0;
  if (VAR_18 != VAR_13)
   VAR_18 = VAR_10;

  VAR_16->phy.otg->state = VAR_0;
  FUNC_4(&VAR_16->phy, VAR_4);
  break;

 case 139:
 case 141:
 case 140:
  VAR_18 = VAR_14;

 case 128:
 case 130:
 case 129:
 case 134:
 case 136:
 case 135:
  if (VAR_16->mode == VAR_6) {
   VAR_16->mode = VAR_7;
   FUNC_1(VAR_16);
   FUNC_2(&VAR_16->phy.notifier,
     VAR_11, &VAR_16->vbus_draw);
   FUNC_4(&VAR_16->phy, VAR_3);
  }
  if (VAR_18 != VAR_14)
   VAR_18 = VAR_15;
  break;

 case 143:
  VAR_18 = VAR_12;

 case 137:
  if (VAR_16->mode == VAR_6) {
   VAR_16->mode = VAR_5;
   FUNC_0(VAR_16);
   FUNC_2(&VAR_16->phy.notifier,
     VAR_11, &VAR_16->vbus_draw);
  }
  VAR_16->phy.otg->default_a = 1;
  if (VAR_18 != VAR_12)
   VAR_18 = VAR_9;
  FUNC_2(&VAR_16->phy.notifier,
    VAR_18, &VAR_16->vbus_draw);
  break;

 case 138:
  VAR_16->mode = VAR_1;
  VAR_18 = VAR_8;
  FUNC_2(&VAR_16->phy.notifier,
    VAR_18, &VAR_16->vbus_draw);
  FUNC_4(&VAR_16->phy, VAR_2);
  break;

 case 131:
  break;
 }

 return 0;
}
