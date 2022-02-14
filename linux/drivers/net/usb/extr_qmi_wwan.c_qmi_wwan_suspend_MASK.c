
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int data; } ;
struct usb_interface {int dummy; } ;
struct qmi_wwan_state {TYPE_1__* subdriver; struct usb_interface* control; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int (* suspend ) (struct usb_interface*,int ) ;} ;


 int FUNC_0 (struct usb_interface*,int ) ;
 struct usbnet* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct usbnet *VAR_2 = FUNC_1(VAR_0);
 struct qmi_wwan_state *VAR_3 = (void *)&VAR_2->data;
 int VAR_4;





 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (VAR_4 < 0)
  goto err;

 if (VAR_0 == VAR_3->control && VAR_3->subdriver &&
     VAR_3->subdriver->suspend)
  VAR_4 = VAR_3->subdriver->suspend(VAR_0, VAR_1);
 if (VAR_4 < 0)
  FUNC_2(VAR_0);
err:
 return VAR_4;
}
