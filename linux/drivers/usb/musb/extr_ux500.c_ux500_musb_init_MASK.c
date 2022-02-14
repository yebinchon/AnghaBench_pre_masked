
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct musb {int isr; int controller; TYPE_1__ nb; int xceiv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct musb *VAR_4)
{
 int VAR_5;

 VAR_4->xceiv = FUNC_3(VAR_1);
 if (FUNC_0(VAR_4->xceiv)) {
  FUNC_2("HS USB OTG: no transceiver configured\n");
  return -VAR_0;
 }

 VAR_4->nb.notifier_call = VAR_2;
 VAR_5 = FUNC_4(VAR_4->xceiv, &VAR_4->nb);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4->controller, "notification register failed\n");
  return VAR_5;
 }

 VAR_4->isr = VAR_3;

 return 0;
}
