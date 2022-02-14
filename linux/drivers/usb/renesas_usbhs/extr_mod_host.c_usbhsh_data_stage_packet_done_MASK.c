
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsh_request {int dummy; } ;
struct usbhsh_hpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int dummy; } ;


 struct usbhsh_request* FUNC_0 (struct usbhs_pkt*) ;
 struct usbhsh_hpriv* FUNC_1 (struct usbhs_priv*) ;
 int FUNC_2 (struct usbhsh_hpriv*,struct usbhsh_request*) ;

__attribute__((used)) static void FUNC_3(struct usbhs_priv *VAR_0,
       struct usbhs_pkt *VAR_1)
{
 struct usbhsh_request *VAR_2 = FUNC_0(VAR_1);
 struct usbhsh_hpriv *VAR_3 = FUNC_1(VAR_0);



 FUNC_2(VAR_3, VAR_2);
}
