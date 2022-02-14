
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * irq_attch; } ;
struct usbhsh_hpriv {TYPE_1__ mod; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_irq_state {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct usbhs_priv*,TYPE_1__*) ;
 struct device* FUNC_2 (struct usbhs_priv*) ;
 int FUNC_3 (struct usbhsh_hpriv*,int) ;
 struct usbhsh_hpriv* FUNC_4 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_5(struct usbhs_priv *VAR_2,
       struct usbhs_irq_state *VAR_3)
{
 struct usbhsh_hpriv *VAR_4 = FUNC_4(VAR_2);
 struct device *VAR_5 = FUNC_2(VAR_2);

 FUNC_0(VAR_5, "device attached\n");

 FUNC_3(VAR_4, VAR_0);
 FUNC_3(VAR_4, VAR_1 << 16);
 VAR_4->mod.irq_attch = ((void*)0);
 FUNC_1(VAR_2, &VAR_4->mod);

 return 0;
}
