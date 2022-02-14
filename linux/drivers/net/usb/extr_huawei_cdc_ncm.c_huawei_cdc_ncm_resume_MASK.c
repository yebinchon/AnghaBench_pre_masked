
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int data; } ;
struct usb_interface {int dummy; } ;
struct huawei_cdc_ncm_state {TYPE_1__* subdriver; struct cdc_ncm_ctx* ctx; } ;
struct cdc_ncm_ctx {struct usb_interface* control; } ;
struct TYPE_2__ {int (* resume ) (struct usb_interface*) ;int (* suspend ) (struct usb_interface*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_interface*,int ) ;
 struct usbnet* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_1)
{
 int VAR_2 = 0;
 struct usbnet *VAR_3 = FUNC_2(VAR_1);
 struct huawei_cdc_ncm_state *VAR_4 = (void *)&VAR_3->data;
 bool VAR_5;
 struct cdc_ncm_ctx *VAR_6 = VAR_4->ctx;


 VAR_5 =
  (VAR_1 == VAR_6->control &&
  VAR_4->subdriver &&
  VAR_4->subdriver->resume);

 if (VAR_5)
  VAR_2 = VAR_4->subdriver->resume(VAR_1);
 if (VAR_2 < 0)
  goto err;
 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0 && VAR_5)
  VAR_4->subdriver->suspend(VAR_1, VAR_0);
err:
 return VAR_2;
}
