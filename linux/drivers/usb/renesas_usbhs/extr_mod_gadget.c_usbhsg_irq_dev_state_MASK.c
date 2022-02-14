
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct usbhsg_gpriv {TYPE_1__ gadget; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_irq_state {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (struct usbhs_priv*) ;
 int FUNC_2 (struct usbhs_irq_state*) ;
 struct device* FUNC_3 (struct usbhsg_gpriv*) ;
 struct usbhsg_gpriv* FUNC_4 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_5(struct usbhs_priv *VAR_0,
    struct usbhs_irq_state *VAR_1)
{
 struct usbhsg_gpriv *VAR_2 = FUNC_4(VAR_0);
 struct device *VAR_3 = FUNC_3(VAR_2);

 VAR_2->gadget.speed = FUNC_1(VAR_0);

 FUNC_0(VAR_3, "state = %x : speed : %d\n",
  FUNC_2(VAR_1),
  VAR_2->gadget.speed);

 return 0;
}
