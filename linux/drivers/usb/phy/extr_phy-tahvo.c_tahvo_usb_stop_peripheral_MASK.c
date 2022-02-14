
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* otg; } ;
struct tahvo_usb {TYPE_2__ phy; } ;
struct TYPE_3__ {int state; scalar_t__ gadget; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct tahvo_usb *VAR_1)
{
 if (VAR_1->phy.otg->gadget)
  FUNC_0(VAR_1->phy.otg->gadget);
 VAR_1->phy.otg->state = VAR_0;
}
