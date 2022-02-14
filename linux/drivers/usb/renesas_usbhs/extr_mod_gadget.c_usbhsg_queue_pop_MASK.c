
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int dummy; } ;
struct usbhsg_request {int dummy; } ;
struct usbhsg_gpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;


 int FUNC_0 (struct usbhsg_uep*,struct usbhsg_request*,int) ;
 int FUNC_1 (struct usbhs_priv*,unsigned long) ;
 int FUNC_2 (struct usbhs_priv*,unsigned long) ;
 struct usbhs_priv* FUNC_3 (struct usbhsg_gpriv*) ;
 struct usbhsg_gpriv* FUNC_4 (struct usbhsg_uep*) ;

__attribute__((used)) static void FUNC_5(struct usbhsg_uep *VAR_0,
        struct usbhsg_request *VAR_1,
        int VAR_2)
{
 struct usbhsg_gpriv *VAR_3 = FUNC_4(VAR_0);
 struct usbhs_priv *VAR_4 = FUNC_3(VAR_3);
 unsigned long VAR_5;

 FUNC_1(VAR_4, VAR_5);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_4, VAR_5);
}
