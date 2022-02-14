
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct musb {int is_active; int mregs; TYPE_2__* xceiv; int controller; } ;
struct TYPE_4__ {TYPE_1__* otg; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct musb*) ;
 int FUNC_1 (struct musb*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 unsigned long VAR_4 ;
 int FUNC_4 (int) ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct musb *VAR_5, int VAR_6)
{
 u8 VAR_7;
 unsigned long VAR_8 = VAR_4 + FUNC_5(1000);





 VAR_7 = FUNC_6(VAR_5->mregs, VAR_0);

 if (VAR_6) {
  if (VAR_5->xceiv->otg->state == VAR_2) {

   VAR_7 |= VAR_1;
   FUNC_7(VAR_5->mregs, VAR_0, VAR_7);




   while (FUNC_6(VAR_5->mregs, VAR_0) & 0x80) {

    if (FUNC_8(VAR_4, VAR_8)) {
     FUNC_3(VAR_5->controller,
     "configured as A device timeout");
     break;
    }
   }

  } else {
   VAR_5->is_active = 1;
   VAR_5->xceiv->otg->state = VAR_3;
   VAR_7 |= VAR_1;
   FUNC_1(VAR_5);
  }
 } else {
  VAR_5->is_active = 0;




  VAR_7 &= ~VAR_1;
  FUNC_0(VAR_5);
 }
 FUNC_7(VAR_5->mregs, VAR_0, VAR_7);







 if (!VAR_6)
  FUNC_4(200);

 FUNC_2(VAR_5->controller, "VBUS %s, devctl %02x\n",
  FUNC_9(VAR_5->xceiv->otg->state),
  FUNC_6(VAR_5->mregs, VAR_0));
}
