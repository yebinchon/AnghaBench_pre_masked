
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_gadget {scalar_t__ speed; } ;
struct usb_function {TYPE_2__* config; } ;
struct f_uas {int flags; int ep_in; int ep_out; int ep_cmd; int ep_status; struct usb_function function; } ;
struct TYPE_4__ {TYPE_1__* cdev; } ;
struct TYPE_3__ {struct usb_gadget* gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct usb_gadget*,struct usb_function*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct f_uas*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct f_uas *VAR_4)
{
 struct usb_function *VAR_5 = &VAR_4->function;
 struct usb_gadget *VAR_6 = VAR_5->config->cdev->gadget;
 int VAR_7;

 VAR_4->flags = VAR_1;

 if (VAR_6->speed == VAR_3)
  VAR_4->flags |= VAR_2;

 FUNC_0(VAR_6, VAR_5, VAR_4->ep_in);
 VAR_7 = FUNC_4(VAR_4->ep_in);
 if (VAR_7)
  goto err_b_in;

 FUNC_0(VAR_6, VAR_5, VAR_4->ep_out);
 VAR_7 = FUNC_4(VAR_4->ep_out);
 if (VAR_7)
  goto err_b_out;

 FUNC_0(VAR_6, VAR_5, VAR_4->ep_cmd);
 VAR_7 = FUNC_4(VAR_4->ep_cmd);
 if (VAR_7)
  goto err_cmd;
 FUNC_0(VAR_6, VAR_5, VAR_4->ep_status);
 VAR_7 = FUNC_4(VAR_4->ep_status);
 if (VAR_7)
  goto err_status;

 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7)
  goto err_wq;
 VAR_4->flags |= VAR_0;

 FUNC_1("Using the UAS protocol\n");
 return;
err_wq:
 FUNC_3(VAR_4->ep_status);
err_status:
 FUNC_3(VAR_4->ep_cmd);
err_cmd:
 FUNC_3(VAR_4->ep_out);
err_b_out:
 FUNC_3(VAR_4->ep_in);
err_b_in:
 VAR_4->flags = 0;
}
