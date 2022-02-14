
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhsg_uep {int dummy; } ;
struct TYPE_2__ {int actual; } ;
struct usbhsg_request {TYPE_1__ req; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int actual; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int dummy; } ;


 int FUNC_0 (struct usbhsg_uep*,struct usbhsg_request*,int ) ;
 int FUNC_1 (struct usbhs_priv*,unsigned long) ;
 int FUNC_2 (struct usbhs_priv*,unsigned long) ;
 struct usbhsg_uep* FUNC_3 (struct usbhs_pipe*) ;
 struct usbhsg_request* FUNC_4 (struct usbhs_pkt*) ;

__attribute__((used)) static void FUNC_5(struct usbhs_priv *VAR_0, struct usbhs_pkt *VAR_1)
{
 struct usbhs_pipe *VAR_2 = VAR_1->pipe;
 struct usbhsg_uep *VAR_3 = FUNC_3(VAR_2);
 struct usbhsg_request *VAR_4 = FUNC_4(VAR_1);
 unsigned long VAR_5;

 VAR_4->req.actual = VAR_1->actual;

 FUNC_1(VAR_0, VAR_5);
 if (VAR_3)
  FUNC_0(VAR_3, VAR_4, 0);
 FUNC_2(VAR_0, VAR_5);
}
