
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhsg_uep {int lock; TYPE_1__* pipe; } ;
struct usbhs_pipe {int dummy; } ;
struct usb_ep {int dummy; } ;
struct TYPE_2__ {int * mod_private; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct usbhs_pipe*) ;
 struct usbhsg_uep* FUNC_3 (struct usb_ep*) ;
 int FUNC_4 (struct usbhsg_uep*) ;
 struct usbhs_pipe* FUNC_5 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_6(struct usb_ep *VAR_0)
{
 struct usbhsg_uep *VAR_1 = FUNC_3(VAR_0);
 struct usbhs_pipe *VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_1->lock, VAR_3);
 VAR_2 = FUNC_5(VAR_1);
 if (!VAR_2)
  goto out;

 FUNC_4(VAR_1);
 FUNC_2(VAR_2);

 VAR_1->pipe->mod_private = ((void*)0);
 VAR_1->pipe = ((void*)0);

out:
 FUNC_1(&VAR_1->lock, VAR_3);

 return 0;
}
