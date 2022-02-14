
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsh_hpriv {int setup_ack_done; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_irq_state {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct usbhs_priv*) ;
 struct usbhsh_hpriv* FUNC_3 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_4(struct usbhs_priv *VAR_0,
    struct usbhs_irq_state *VAR_1)
{
 struct usbhsh_hpriv *VAR_2 = FUNC_3(VAR_0);
 struct device *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_3, "setup packet OK\n");

 FUNC_0(&VAR_2->setup_ack_done);

 return 0;
}
