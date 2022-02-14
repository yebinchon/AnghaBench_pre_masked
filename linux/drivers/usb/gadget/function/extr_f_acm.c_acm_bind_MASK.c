
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_20__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_19__ ;
typedef struct TYPE_26__ TYPE_18__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct usb_string {int id; } ;
struct usb_function {int name; } ;
struct usb_ep {int name; } ;
struct usb_configuration {struct usb_composite_dev* cdev; } ;
struct usb_composite_dev {TYPE_2__* gadget; } ;
struct usb_cdc_notification {int dummy; } ;
struct TYPE_28__ {struct usb_ep* out; struct usb_ep* in; } ;
struct f_acm {int ctrl_id; int data_id; TYPE_4__* notify_req; struct usb_ep* notify; TYPE_1__ port; int port_num; } ;
struct TYPE_34__ {int bEndpointAddress; } ;
struct TYPE_33__ {int bMasterInterface0; int bSlaveInterface0; } ;
struct TYPE_32__ {struct f_acm* context; int complete; } ;
struct TYPE_31__ {int bEndpointAddress; } ;
struct TYPE_30__ {int dev; } ;
struct TYPE_29__ {int bDataInterface; } ;
struct TYPE_27__ {int bInterfaceNumber; int iInterface; } ;
struct TYPE_26__ {int bInterfaceNumber; int iInterface; } ;
struct TYPE_25__ {int bEndpointAddress; } ;
struct TYPE_24__ {int bEndpointAddress; } ;
struct TYPE_23__ {int bEndpointAddress; } ;
struct TYPE_22__ {int bFirstInterface; int iFunction; } ;
struct TYPE_21__ {int bEndpointAddress; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct usb_composite_dev*,char*,int ,struct usb_function*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct usb_string*) ;
 int FUNC_3 (struct usb_string*) ;
 TYPE_20__ VAR_5 ;
 int VAR_6 ;
 TYPE_19__ VAR_7 ;
 TYPE_18__ VAR_8 ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 TYPE_3__ VAR_12 ;
 int VAR_13 ;
 TYPE_14__ VAR_14 ;
 TYPE_13__ VAR_15 ;
 TYPE_12__ VAR_16 ;
 TYPE_11__ VAR_17 ;
 int VAR_18 ;
 TYPE_10__ VAR_19 ;
 TYPE_9__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_8__ VAR_23 ;
 int FUNC_4 (int *,char*,int ,char*,int ,int ,int ) ;
 struct f_acm* FUNC_5 (struct usb_function*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 TYPE_4__* FUNC_8 (struct usb_ep*,int,int ) ;
 int FUNC_9 (struct usb_ep*,TYPE_4__*) ;
 int FUNC_10 (struct usb_function*,int ,int ,int ,int *) ;
 struct usb_ep* FUNC_11 (TYPE_2__*,TYPE_3__*) ;
 struct usb_string* FUNC_12 (struct usb_composite_dev*,int ,int ) ;
 int FUNC_13 (struct usb_configuration*,struct usb_function*) ;

__attribute__((used)) static int
FUNC_14(struct usb_configuration *VAR_24, struct usb_function *VAR_25)
{
 struct usb_composite_dev *VAR_26 = VAR_24->cdev;
 struct f_acm *VAR_27 = FUNC_5(VAR_25);
 struct usb_string *VAR_28;
 int VAR_29;
 struct usb_ep *VAR_30;






 VAR_28 = FUNC_12(VAR_26, VAR_22,
   FUNC_0(VAR_21));
 if (FUNC_2(VAR_28))
  return FUNC_3(VAR_28);
 VAR_7.iInterface = VAR_28[VAR_0].id;
 VAR_8.iInterface = VAR_28[VAR_1].id;
 VAR_17.iFunction = VAR_28[VAR_2].id;


 VAR_29 = FUNC_13(VAR_24, VAR_25);
 if (VAR_29 < 0)
  goto fail;
 VAR_27->ctrl_id = VAR_29;
 VAR_17.bFirstInterface = VAR_29;

 VAR_7.bInterfaceNumber = VAR_29;
 VAR_23 .bMasterInterface0 = VAR_29;

 VAR_29 = FUNC_13(VAR_24, VAR_25);
 if (VAR_29 < 0)
  goto fail;
 VAR_27->data_id = VAR_29;

 VAR_8.bInterfaceNumber = VAR_29;
 VAR_23.bSlaveInterface0 = VAR_29;
 VAR_5.bDataInterface = VAR_29;

 VAR_29 = -VAR_3;


 VAR_30 = FUNC_11(VAR_26->gadget, &VAR_10);
 if (!VAR_30)
  goto fail;
 VAR_27->port.in = VAR_30;

 VAR_30 = FUNC_11(VAR_26->gadget, &VAR_12);
 if (!VAR_30)
  goto fail;
 VAR_27->port.out = VAR_30;

 VAR_30 = FUNC_11(VAR_26->gadget, &VAR_11);
 if (!VAR_30)
  goto fail;
 VAR_27->notify = VAR_30;


 VAR_27->notify_req = FUNC_8(VAR_30,
   sizeof(struct usb_cdc_notification) + 2,
   VAR_4);
 if (!VAR_27->notify_req)
  goto fail;

 VAR_27->notify_req->complete = VAR_6;
 VAR_27->notify_req->context = VAR_27;





 VAR_14.bEndpointAddress = VAR_10.bEndpointAddress;
 VAR_16.bEndpointAddress = VAR_12.bEndpointAddress;
 VAR_15.bEndpointAddress =
  VAR_11.bEndpointAddress;

 VAR_19.bEndpointAddress = VAR_10.bEndpointAddress;
 VAR_20.bEndpointAddress = VAR_12.bEndpointAddress;

 VAR_29 = FUNC_10(VAR_25, VAR_9, VAR_13,
   VAR_18, ((void*)0));
 if (VAR_29)
  goto fail;

 FUNC_4(&VAR_26->gadget->dev,
  "acm ttyGS%d: %s speed IN/%s OUT/%s NOTIFY/%s\n",
  VAR_27->port_num,
  FUNC_7(VAR_24->cdev->gadget) ? "super" :
  FUNC_6(VAR_24->cdev->gadget) ? "dual" : "full",
  VAR_27->port.in->name, VAR_27->port.out->name,
  VAR_27->notify->name);
 return 0;

fail:
 if (VAR_27->notify_req)
  FUNC_9(VAR_27->notify, VAR_27->notify_req);

 FUNC_1(VAR_26, "%s/%p: can't bind, err %d\n", VAR_25->name, VAR_25, VAR_29);

 return VAR_29;
}
