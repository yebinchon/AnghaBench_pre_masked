
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {TYPE_4__* net; TYPE_3__* status; TYPE_1__* driver_info; int data; } ;
struct usb_interface {int cur_altsetting; } ;
struct usb_driver {int dummy; } ;
struct cdc_ncm_ctx {TYPE_2__* mbim_desc; int control; } ;
struct cdc_mbim_state {struct usb_driver* subdriver; struct cdc_ncm_ctx* ctx; } ;
struct TYPE_8__ {int features; int * netdev_ops; int flags; } ;
struct TYPE_7__ {int desc; } ;
struct TYPE_6__ {int wMaxControlMessage; } ;
struct TYPE_5__ {int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_driver* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct usb_driver*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct usb_driver*) ;
 int VAR_6 ;
 int FUNC_3 (struct usbnet*,struct usb_interface*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_4 (struct usbnet*,struct usb_interface*,int,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usbnet*,struct usb_interface*) ;
 int FUNC_8 (int ) ;
 struct usb_driver* FUNC_9 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct usbnet *VAR_8, struct usb_interface *VAR_9)
{
 struct cdc_ncm_ctx *VAR_10;
 struct usb_driver *VAR_11 = FUNC_0(-VAR_2);
 int VAR_12 = -VAR_2;
 u8 VAR_13 = 1;
 struct cdc_mbim_state *VAR_14 = (void *)&VAR_8->data;


 if (FUNC_6(VAR_9) == VAR_0) {
  VAR_13 = VAR_1;
  VAR_12 = FUNC_3(VAR_8, VAR_9, VAR_0);
  if (VAR_12)
   goto err;
  VAR_12 = -VAR_2;
 }


 if (!FUNC_5(VAR_9->cur_altsetting))
  goto err;

 VAR_12 = FUNC_4(VAR_8, VAR_9, VAR_13, VAR_8->driver_info->data);
 if (VAR_12)
  goto err;

 VAR_10 = VAR_14->ctx;


 if (VAR_10->mbim_desc && VAR_8->status)
  VAR_11 = FUNC_9(VAR_10->control,
       &VAR_8->status->desc,
       FUNC_8(VAR_10->mbim_desc->wMaxControlMessage),
       VAR_7);
 if (FUNC_1(VAR_11)) {
  VAR_12 = FUNC_2(VAR_11);
  FUNC_7(VAR_8, VAR_9);
  goto err;
 }


 VAR_8->status = ((void*)0);
 VAR_14->subdriver = VAR_11;


 VAR_8->net->flags |= VAR_3;


 VAR_8->net->features |= VAR_5 | VAR_4;


 VAR_8->net->netdev_ops = &VAR_6;
err:
 return VAR_12;
}
