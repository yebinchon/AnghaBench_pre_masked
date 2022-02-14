
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct musb {int port1_status; int is_active; TYPE_2__* xceiv; int int_usb; int finish_resume_work; scalar_t__ rh_timer; } ;
struct TYPE_4__ {TYPE_1__* otg; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct musb*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,char*,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct musb*,char*,int ) ;
 int FUNC_4 (struct musb*) ;
 int FUNC_5 (struct musb*) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct musb *VAR_10, u8 VAR_11)
{
 FUNC_3(VAR_10, "RESUME (%s)",
   FUNC_7(VAR_10->xceiv->otg->state));

 if (VAR_11 & VAR_0) {
  switch (VAR_10->xceiv->otg->state) {
  case 131:

   VAR_10->port1_status |=
     (VAR_7 << 16)
     | VAR_5;
   VAR_10->rh_timer = VAR_9
    + FUNC_2(VAR_8);
   VAR_10->xceiv->otg->state = VAR_6;
   VAR_10->is_active = 1;
   FUNC_5(VAR_10);
   FUNC_6(&VAR_10->finish_resume_work,
    FUNC_2(VAR_8));
   break;
  case 128:
   VAR_10->xceiv->otg->state = 129;
   VAR_10->is_active = 1;
   FUNC_0(VAR_10);
   break;
  default:
   FUNC_1("bogus %s RESUME (%s)\n",
    "host",
    FUNC_7(VAR_10->xceiv->otg->state));
  }
 } else {
  switch (VAR_10->xceiv->otg->state) {
  case 131:

   VAR_10->xceiv->otg->state = VAR_6;
   FUNC_5(VAR_10);
   break;
  case 128:
  case 129:



   if ((VAR_11 & VAR_1)
     != (3 << VAR_2)
     ) {
    VAR_10->int_usb |= VAR_3;
    VAR_10->int_usb &= ~VAR_4;
    break;
   }
   FUNC_4(VAR_10);
   break;
  case 130:
   VAR_10->int_usb &= ~VAR_4;
   break;
  default:
   FUNC_1("bogus %s RESUME (%s)\n",
    "peripheral",
    FUNC_7(VAR_10->xceiv->otg->state));
  }
 }
}
