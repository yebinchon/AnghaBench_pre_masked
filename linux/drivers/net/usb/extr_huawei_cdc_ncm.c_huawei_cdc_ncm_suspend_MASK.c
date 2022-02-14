
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int data; } ;
struct usb_interface {int dummy; } ;
struct huawei_cdc_ncm_state {TYPE_1__* subdriver; struct cdc_ncm_ctx* ctx; } ;
struct cdc_ncm_ctx {struct usb_interface* control; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int (* suspend ) (struct usb_interface*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct usb_interface*,int ) ;
 struct usbnet* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_1,
      pm_message_t VAR_2)
{
 int VAR_3 = 0;
 struct usbnet *VAR_4 = FUNC_1(VAR_1);
 struct huawei_cdc_ncm_state *VAR_5 = (void *)&VAR_4->data;
 struct cdc_ncm_ctx *VAR_6 = VAR_5->ctx;

 if (VAR_6 == ((void*)0)) {
  VAR_3 = -VAR_0;
  goto error;
 }

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto error;

 if (VAR_1 == VAR_6->control &&
  VAR_5->subdriver &&
  VAR_5->subdriver->suspend)
  VAR_3 = VAR_5->subdriver->suspend(VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_2(VAR_1);

error:
 return VAR_3;
}
