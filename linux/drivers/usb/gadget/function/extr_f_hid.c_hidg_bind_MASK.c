
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct usb_string {int id; } ;
struct usb_function {TYPE_2__* config; } ;
struct usb_ep {int dummy; } ;
struct usb_configuration {TYPE_3__* cdev; } ;
struct f_hidg {int write_pending; int * req; struct usb_ep* in_ep; int cdev; int minor; int completed_out_req; int read_queue; int write_queue; int read_spinlock; int write_spinlock; int report_desc_length; int report_length; int protocol; int bInterfaceProtocol; int bInterfaceSubClass; struct usb_ep* out_ep; } ;
struct device {int id; } ;
typedef int dev_t ;
struct TYPE_26__ {int bInterfaceNumber; int bInterfaceProtocol; int bInterfaceSubClass; int iInterface; } ;
struct TYPE_25__ {void* wBytesPerInterval; } ;
struct TYPE_24__ {int bEndpointAddress; void* wMaxPacketSize; } ;
struct TYPE_23__ {void* wBytesPerInterval; } ;
struct TYPE_22__ {int bEndpointAddress; void* wMaxPacketSize; } ;
struct TYPE_21__ {int bEndpointAddress; void* wMaxPacketSize; } ;
struct TYPE_20__ {int gadget; } ;
struct TYPE_19__ {int cdev; } ;
struct TYPE_18__ {void* wDescriptorLength; int bDescriptorType; } ;
struct TYPE_17__ {TYPE_1__* desc; } ;
struct TYPE_16__ {int bEndpointAddress; void* wMaxPacketSize; } ;
struct TYPE_15__ {int bEndpointAddress; void* wMaxPacketSize; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct usb_string*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct usb_string*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 void* FUNC_9 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct usb_string* FUNC_10 (int ,int *,int ,int *,char*,char*,int ) ;
 int VAR_6 ;
 int FUNC_11 (struct usb_ep*,int *) ;
 struct f_hidg* FUNC_12 (struct usb_function*) ;
 int VAR_7 ;
 TYPE_14__ VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 TYPE_4__ VAR_11 ;
 int VAR_12 ;
 TYPE_11__ VAR_13 ;
 TYPE_10__ VAR_14 ;
 TYPE_9__ VAR_15 ;
 int VAR_16 ;
 TYPE_8__ VAR_17 ;
 TYPE_7__ VAR_18 ;
 TYPE_6__ VAR_19 ;
 TYPE_5__ VAR_20 ;
 int FUNC_13 (int *) ;
 int VAR_21 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct usb_function*,int ,int ,int ,int *) ;
 struct usb_ep* FUNC_16 (int ,TYPE_4__*) ;
 int FUNC_17 (struct usb_function*) ;
 struct usb_string* FUNC_18 (TYPE_3__*,int ,int ) ;
 int FUNC_19 (struct usb_configuration*,struct usb_function*) ;

__attribute__((used)) static int FUNC_20(struct usb_configuration *VAR_22, struct usb_function *VAR_23)
{
 struct usb_ep *VAR_24;
 struct f_hidg *VAR_25 = FUNC_12(VAR_23);
 struct usb_string *VAR_26;
 struct device *VAR_27;
 int VAR_28;
 dev_t VAR_29;


 VAR_26 = FUNC_18(VAR_22->cdev, VAR_5,
     FUNC_0(VAR_4));
 if (FUNC_3(VAR_26))
  return FUNC_5(VAR_26);
 VAR_15.iInterface = VAR_26[VAR_0].id;


 VAR_28 = FUNC_19(VAR_22, VAR_23);
 if (VAR_28 < 0)
  goto fail;
 VAR_15.bInterfaceNumber = VAR_28;


 VAR_28 = -VAR_1;
 VAR_24 = FUNC_16(VAR_22->cdev->gadget, &VAR_10);
 if (!VAR_24)
  goto fail;
 VAR_25->in_ep = VAR_24;

 VAR_24 = FUNC_16(VAR_22->cdev->gadget, &VAR_11);
 if (!VAR_24)
  goto fail;
 VAR_25->out_ep = VAR_24;


 VAR_15.bInterfaceSubClass = VAR_25->bInterfaceSubClass;
 VAR_15.bInterfaceProtocol = VAR_25->bInterfaceProtocol;
 VAR_25->protocol = VAR_3;
 VAR_18.wMaxPacketSize = FUNC_9(VAR_25->report_length);
 VAR_17.wBytesPerInterval =
    FUNC_9(VAR_25->report_length);
 VAR_13.wMaxPacketSize = FUNC_9(VAR_25->report_length);
 VAR_10.wMaxPacketSize = FUNC_9(VAR_25->report_length);
 VAR_20.wMaxPacketSize = FUNC_9(VAR_25->report_length);
 VAR_19.wBytesPerInterval =
    FUNC_9(VAR_25->report_length);
 VAR_14.wMaxPacketSize = FUNC_9(VAR_25->report_length);
 VAR_11.wMaxPacketSize = FUNC_9(VAR_25->report_length);




 VAR_8.desc[0].bDescriptorType = VAR_2;
 VAR_8.desc[0].wDescriptorLength =
  FUNC_9(VAR_25->report_desc_length);

 VAR_13.bEndpointAddress =
  VAR_10.bEndpointAddress;
 VAR_14.bEndpointAddress =
  VAR_11.bEndpointAddress;

 VAR_18.bEndpointAddress =
  VAR_10.bEndpointAddress;
 VAR_20.bEndpointAddress =
  VAR_11.bEndpointAddress;

 VAR_28 = FUNC_15(VAR_23, VAR_9,
   VAR_12, VAR_16, ((void*)0));
 if (VAR_28)
  goto fail;

 FUNC_14(&VAR_25->write_spinlock);
 VAR_25->write_pending = 1;
 VAR_25->req = ((void*)0);
 FUNC_14(&VAR_25->read_spinlock);
 FUNC_13(&VAR_25->write_queue);
 FUNC_13(&VAR_25->read_queue);
 FUNC_2(&VAR_25->completed_out_req);


 FUNC_8(&VAR_25->cdev, &VAR_6);
 VAR_29 = FUNC_4(VAR_21, VAR_25->minor);
 VAR_28 = FUNC_6(&VAR_25->cdev, VAR_29, 1);
 if (VAR_28)
  goto fail_free_descs;

 VAR_27 = FUNC_10(VAR_7, ((void*)0), VAR_29, ((void*)0),
          "%s%d", "hidg", VAR_25->minor);
 if (FUNC_3(VAR_27)) {
  VAR_28 = FUNC_5(VAR_27);
  goto del;
 }

 return 0;
del:
 FUNC_7(&VAR_25->cdev);
fail_free_descs:
 FUNC_17(VAR_23);
fail:
 FUNC_1(VAR_23->config->cdev, "hidg_bind FAILED\n");
 if (VAR_25->req != ((void*)0))
  FUNC_11(VAR_25->in_ep, VAR_25->req);

 return VAR_28;
}
