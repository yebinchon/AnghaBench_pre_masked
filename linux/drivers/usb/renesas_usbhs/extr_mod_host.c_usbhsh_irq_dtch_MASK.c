
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_attch; } ;
struct usbhsh_hpriv {TYPE_1__ mod; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_irq_state {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct usbhs_priv*,TYPE_1__*) ;
 struct device* FUNC_2 (struct usbhs_priv*) ;
 int VAR_2 ;
 int FUNC_3 (struct usbhsh_hpriv*,int ) ;
 int FUNC_4 (struct usbhsh_hpriv*,int) ;
 struct usbhsh_hpriv* FUNC_5 (struct usbhs_priv*) ;
 int FUNC_6 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_7(struct usbhs_priv *VAR_3,
      struct usbhs_irq_state *VAR_4)
{
 struct usbhsh_hpriv *VAR_5 = FUNC_5(VAR_3);
 struct device *VAR_6 = FUNC_2(VAR_3);

 FUNC_0(VAR_6, "device detached\n");

 FUNC_3(VAR_5, VAR_0);
 FUNC_4(VAR_5, VAR_1 << 16);
 VAR_5->mod.irq_attch = VAR_2;
 FUNC_1(VAR_3, &VAR_5->mod);





 FUNC_6(VAR_3);

 return 0;
}
