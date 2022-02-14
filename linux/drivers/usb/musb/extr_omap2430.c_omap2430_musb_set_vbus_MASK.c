
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_otg {scalar_t__ state; } ;
struct musb {int is_active; int mregs; TYPE_1__* xceiv; int controller; } ;
struct TYPE_2__ {struct usb_otg* otg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct musb*) ;
 int FUNC_1 (struct musb*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 unsigned long VAR_6 ;
 int FUNC_5 (int) ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct usb_otg*,int) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct musb *VAR_7, int VAR_8)
{
 struct usb_otg *VAR_9 = VAR_7->xceiv->otg;
 u8 VAR_10;
 unsigned long VAR_11 = VAR_6 + FUNC_6(1000);





 VAR_10 = FUNC_7(VAR_7->mregs, VAR_0);

 if (VAR_8) {
  if (VAR_7->xceiv->otg->state == VAR_3) {
   int VAR_12 = 100;

   VAR_10 |= VAR_2;
   FUNC_8(VAR_7->mregs, VAR_0, VAR_10);




   while (FUNC_7(VAR_7->mregs, VAR_0) &
          VAR_1) {

    FUNC_5(5);
    FUNC_2();

    if (FUNC_10(VAR_6, VAR_11)
        || VAR_12-- <= 0) {
     FUNC_4(VAR_7->controller,
     "configured as A device timeout");
     break;
    }
   }

   FUNC_9(VAR_9, 1);
  } else {
   VAR_7->is_active = 1;
   VAR_7->xceiv->otg->state = VAR_4;
   VAR_10 |= VAR_2;
   FUNC_1(VAR_7);
  }
 } else {
  VAR_7->is_active = 0;





  VAR_7->xceiv->otg->state = VAR_5;
  VAR_10 &= ~VAR_2;

  FUNC_0(VAR_7);
 }
 FUNC_8(VAR_7->mregs, VAR_0, VAR_10);

 FUNC_3(VAR_7->controller, "VBUS %s, devctl %02x "
                                    "\n",
  FUNC_11(VAR_7->xceiv->otg->state),
  FUNC_7(VAR_7->mregs, VAR_0));
}
