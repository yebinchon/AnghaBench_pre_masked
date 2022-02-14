
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_event; int notifier; struct usb_otg* otg; } ;
struct usb_phy_generic {int vbus; TYPE_1__ phy; int gpiod_vbus; } ;
struct usb_otg {int gadget; int state; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_phy_generic*,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct usb_phy_generic *VAR_7 = VAR_6;
 struct usb_otg *VAR_8 = VAR_7->phy.otg;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_7->gpiod_vbus);
 if ((VAR_9 ^ VAR_7->vbus) == 0)
  return VAR_0;
 VAR_7->vbus = VAR_9;

 if (VAR_9) {
  VAR_10 = VAR_4;
  VAR_8->state = VAR_2;
  VAR_7->phy.last_event = VAR_10;


  FUNC_2(VAR_7, 100);

  FUNC_0(&VAR_7->phy.notifier, VAR_10,
        VAR_8->gadget);
 } else {
  FUNC_2(VAR_7, 0);

  VAR_10 = VAR_3;
  VAR_8->state = VAR_1;
  VAR_7->phy.last_event = VAR_10;

  FUNC_0(&VAR_7->phy.notifier, VAR_10,
        VAR_8->gadget);
 }
 return VAR_0;
}
