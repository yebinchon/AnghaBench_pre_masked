
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* status; int data; } ;
struct usb_interface {int dummy; } ;
struct usb_driver {int dummy; } ;
struct huawei_cdc_ncm_state {struct usb_driver* subdriver; struct cdc_ncm_ctx* ctx; } ;
struct cdc_ncm_ctx {int control; } ;
struct TYPE_2__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_driver* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct usb_driver*) ;
 int FUNC_2 (struct usb_driver*) ;
 int FUNC_3 (struct usbnet*,struct usb_interface*,int,int) ;
 int FUNC_4 (struct usbnet*,struct usb_interface*) ;
 int VAR_3 ;
 struct usb_driver* FUNC_5 (int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_4,
          struct usb_interface *VAR_5)
{
 struct cdc_ncm_ctx *VAR_6;
 struct usb_driver *VAR_7 = FUNC_0(-VAR_2);
 int VAR_8 = -VAR_2;
 struct huawei_cdc_ncm_state *VAR_9 = (void *)&VAR_4->data;
 int VAR_10 = 0;





 VAR_10 |= VAR_0;





 VAR_10 |= VAR_1;
 VAR_8 = FUNC_3(VAR_4, VAR_5, 1, VAR_10);
 if (VAR_8)
  goto err;

 VAR_6 = VAR_9->ctx;

 if (VAR_4->status)




  VAR_7 = FUNC_5(VAR_6->control,
       &VAR_4->status->desc,
       1024,
       VAR_3);
 if (FUNC_1(VAR_7)) {
  VAR_8 = FUNC_2(VAR_7);
  FUNC_4(VAR_4, VAR_5);
  goto err;
 }


 VAR_4->status = ((void*)0);

 VAR_9->subdriver = VAR_7;

err:
 return VAR_8;
}
