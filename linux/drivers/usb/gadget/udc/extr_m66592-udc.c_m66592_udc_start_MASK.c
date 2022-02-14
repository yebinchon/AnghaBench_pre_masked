
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; } ;
struct usb_gadget_driver {TYPE_1__ driver; } ;
struct usb_gadget {int dummy; } ;
struct m66592 {int old_vbus; int timer; int scount; struct usb_gadget_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct m66592*,int,int ) ;
 int FUNC_1 (struct m66592*,int ) ;
 int FUNC_2 (struct m66592*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 struct m66592* FUNC_5 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_6(struct usb_gadget *VAR_7,
  struct usb_gadget_driver *VAR_8)
{
 struct m66592 *VAR_9 = FUNC_5(VAR_7);


 VAR_8->driver.bus = ((void*)0);
 VAR_9->driver = VAR_8;

 FUNC_0(VAR_9, VAR_4 | VAR_3, VAR_0);
 if (FUNC_1(VAR_9, VAR_1) & VAR_5) {
  FUNC_2(VAR_9);

  VAR_9->old_vbus = FUNC_1(VAR_9,
      VAR_1) & VAR_5;
  VAR_9->scount = VAR_2;
  FUNC_3(&VAR_9->timer, VAR_6 + FUNC_4(50));
 }

 return 0;
}
