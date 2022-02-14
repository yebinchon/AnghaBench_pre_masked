
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int controller; } ;
struct usb_hcd {int power_budget; TYPE_1__ self; int state; } ;
struct sl811 {TYPE_2__* board; } ;
struct TYPE_4__ {int power; int can_wakeup; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct sl811* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct sl811*,int) ;

__attribute__((used)) static int
FUNC_4(struct usb_hcd *VAR_1)
{
 struct sl811 *VAR_2 = FUNC_2(VAR_1);


 VAR_1->state = VAR_0;

 if (VAR_2->board) {
  if (!FUNC_0(VAR_1->self.controller))
   FUNC_1(VAR_1->self.controller,
    VAR_2->board->can_wakeup);
  VAR_1->power_budget = VAR_2->board->power * 2;
 }


 FUNC_3(VAR_2, 1);

 return 0;
}
