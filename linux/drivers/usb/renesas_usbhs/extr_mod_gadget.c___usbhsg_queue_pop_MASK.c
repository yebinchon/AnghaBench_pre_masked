
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhsg_uep {int ep; } ;
struct TYPE_2__ {int status; } ;
struct usbhsg_request {TYPE_1__ req; } ;
struct usbhsg_gpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (struct usbhs_pipe*) ;
 int FUNC_5 (struct usbhs_priv*) ;
 struct device* FUNC_6 (struct usbhsg_gpriv*) ;
 struct usbhs_priv* FUNC_7 (struct usbhsg_gpriv*) ;
 struct usbhsg_gpriv* FUNC_8 (struct usbhsg_uep*) ;
 struct usbhs_pipe* FUNC_9 (struct usbhsg_uep*) ;

__attribute__((used)) static void FUNC_10(struct usbhsg_uep *VAR_0,
          struct usbhsg_request *VAR_1,
          int VAR_2)
{
 struct usbhsg_gpriv *VAR_3 = FUNC_8(VAR_0);
 struct usbhs_pipe *VAR_4 = FUNC_9(VAR_0);
 struct device *VAR_5 = FUNC_6(VAR_3);
 struct usbhs_priv *VAR_6 = FUNC_7(VAR_3);

 if (VAR_4)
  FUNC_0(VAR_5, "pipe %d : queue pop\n", FUNC_4(VAR_4));

 VAR_1->req.status = VAR_2;
 FUNC_2(FUNC_5(VAR_6));
 FUNC_3(&VAR_0->ep, &VAR_1->req);
 FUNC_1(FUNC_5(VAR_6));
}
