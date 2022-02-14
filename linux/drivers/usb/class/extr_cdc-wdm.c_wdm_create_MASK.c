
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wdm_device {int wMaxCommand; int wMaxPacketSize; int (* manage_power ) (struct usb_interface*,int) ;int device_list; void* inbuf; TYPE_3__* irq; struct usb_interface* intf; void* response; void* inum; void* sbuf; void* validity; void* ubuf; void* command; void* orq; int service_outs_intr; int rxwork; int wait; int iuspin; int wlock; int rlock; } ;
struct usb_interface {int usb_dev; int dev; TYPE_2__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_ctrlrequest {int dummy; } ;
struct TYPE_6__ {int bRequestType; void* wLength; void* wIndex; scalar_t__ wValue; int bRequest; } ;
struct TYPE_4__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct wdm_device*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usb_interface*) ;
 void* FUNC_8 (int,int ) ;
 struct wdm_device* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_7 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 void* FUNC_16 (int ,int ) ;
 int FUNC_17 (struct usb_endpoint_descriptor*) ;
 int FUNC_18 (struct usb_endpoint_descriptor*) ;
 int FUNC_19 (void*,int ,int ,unsigned char*,void*,int,int ,struct wdm_device*) ;
 int FUNC_20 (void*,int ,int ,void*,int,int ,struct wdm_device*,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (struct usb_interface*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_24(struct usb_interface *VAR_14, struct usb_endpoint_descriptor *VAR_15,
  u16 VAR_16, int (*VAR_17)(struct usb_interface *, int))
{
 int VAR_18 = -VAR_1;
 struct wdm_device *VAR_19;

 VAR_19 = FUNC_9(sizeof(struct wdm_device), VAR_2);
 if (!VAR_19)
  goto out;
 FUNC_0(&VAR_19->device_list);
 FUNC_12(&VAR_19->rlock);
 FUNC_12(&VAR_19->wlock);
 FUNC_14(&VAR_19->iuspin);
 FUNC_6(&VAR_19->wait);
 VAR_19->wMaxCommand = VAR_16;

 VAR_19->inum = FUNC_3((u16)VAR_14->cur_altsetting->desc.bInterfaceNumber);
 VAR_19->intf = VAR_14;
 FUNC_1(&VAR_19->rxwork, VAR_13);
 FUNC_1(&VAR_19->service_outs_intr, VAR_7);

 VAR_18 = -VAR_0;
 if (!FUNC_17(VAR_15))
  goto err;

 VAR_19->wMaxPacketSize = FUNC_18(VAR_15);

 VAR_19->orq = FUNC_8(sizeof(struct usb_ctrlrequest), VAR_2);
 if (!VAR_19->orq)
  goto err;
 VAR_19->irq = FUNC_8(sizeof(struct usb_ctrlrequest), VAR_2);
 if (!VAR_19->irq)
  goto err;

 VAR_19->validity = FUNC_16(0, VAR_2);
 if (!VAR_19->validity)
  goto err;

 VAR_19->response = FUNC_16(0, VAR_2);
 if (!VAR_19->response)
  goto err;

 VAR_19->command = FUNC_16(0, VAR_2);
 if (!VAR_19->command)
  goto err;

 VAR_19->ubuf = FUNC_8(VAR_19->wMaxCommand, VAR_2);
 if (!VAR_19->ubuf)
  goto err;

 VAR_19->sbuf = FUNC_8(VAR_19->wMaxPacketSize, VAR_2);
 if (!VAR_19->sbuf)
  goto err;

 VAR_19->inbuf = FUNC_8(VAR_19->wMaxCommand, VAR_2);
 if (!VAR_19->inbuf)
  goto err;

 FUNC_20(
  VAR_19->validity,
  FUNC_7(VAR_14),
  FUNC_22(FUNC_7(VAR_14), VAR_15->bEndpointAddress),
  VAR_19->sbuf,
  VAR_19->wMaxPacketSize,
  VAR_12,
  VAR_19,
  VAR_15->bInterval
 );

 VAR_19->irq->bRequestType = (VAR_4 | VAR_6 | VAR_5);
 VAR_19->irq->bRequest = VAR_3;
 VAR_19->irq->wValue = 0;
 VAR_19->irq->wIndex = VAR_19->inum;
 VAR_19->irq->wLength = FUNC_3(VAR_19->wMaxCommand);

 FUNC_19(
  VAR_19->response,
  FUNC_7(VAR_14),

  FUNC_21(FUNC_7(VAR_19->intf), 0),
  (unsigned char *)VAR_19->irq,
  VAR_19->inbuf,
  VAR_19->wMaxCommand,
  VAR_11,
  VAR_19
 );

 VAR_19->manage_power = VAR_17;

 FUNC_13(&VAR_10);
 FUNC_10(&VAR_19->device_list, &VAR_9);
 FUNC_15(&VAR_10);

 VAR_18 = FUNC_23(VAR_14, &VAR_8);
 if (VAR_18 < 0)
  goto err;
 else
  FUNC_4(&VAR_14->dev, "%s: USB WDM device\n", FUNC_5(VAR_14->usb_dev));
out:
 return VAR_18;
err:
 FUNC_13(&VAR_10);
 FUNC_11(&VAR_19->device_list);
 FUNC_15(&VAR_10);
 FUNC_2(VAR_19);
 return VAR_18;
}
