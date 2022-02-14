
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct usb_function {int name; } ;
struct usb_ep {int name; } ;
struct usb_configuration {struct usb_composite_dev* cdev; } ;
struct usb_composite_dev {TYPE_2__* gadget; } ;
struct TYPE_14__ {struct usb_ep* out; struct usb_ep* in; } ;
struct f_gser {int data_id; TYPE_1__ port; int port_num; } ;
struct TYPE_22__ {int bEndpointAddress; } ;
struct TYPE_21__ {int bEndpointAddress; } ;
struct TYPE_20__ {int bInterfaceNumber; } ;
struct TYPE_19__ {int bEndpointAddress; } ;
struct TYPE_18__ {int bEndpointAddress; } ;
struct TYPE_17__ {int id; } ;
struct TYPE_16__ {int bEndpointAddress; } ;
struct TYPE_15__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_composite_dev*,char*,int ,int) ;
 int FUNC_1 (int *,char*,int ,char*,int ,int ) ;
 struct f_gser* FUNC_2 (struct usb_function*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 TYPE_9__ VAR_5 ;
 TYPE_8__ VAR_6 ;
 TYPE_7__ VAR_7 ;
 int VAR_8 ;
 TYPE_6__ VAR_9 ;
 TYPE_5__ VAR_10 ;
 TYPE_4__* VAR_11 ;
 int FUNC_5 (struct usb_function*,int ,int ,int ,int *) ;
 struct usb_ep* FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (struct usb_configuration*,struct usb_function*) ;
 int FUNC_8 (struct usb_composite_dev*) ;

__attribute__((used)) static int FUNC_9(struct usb_configuration *VAR_12, struct usb_function *VAR_13)
{
 struct usb_composite_dev *VAR_14 = VAR_12->cdev;
 struct f_gser *VAR_15 = FUNC_2(VAR_13);
 int VAR_16;
 struct usb_ep *VAR_17;






 if (VAR_11[0].id == 0) {
  VAR_16 = FUNC_8(VAR_12->cdev);
  if (VAR_16 < 0)
   return VAR_16;
  VAR_11[0].id = VAR_16;
 }


 VAR_16 = FUNC_7(VAR_12, VAR_13);
 if (VAR_16 < 0)
  goto fail;
 VAR_15->data_id = VAR_16;
 VAR_7.bInterfaceNumber = VAR_16;

 VAR_16 = -VAR_0;


 VAR_17 = FUNC_6(VAR_14->gadget, &VAR_2);
 if (!VAR_17)
  goto fail;
 VAR_15->port.in = VAR_17;

 VAR_17 = FUNC_6(VAR_14->gadget, &VAR_3);
 if (!VAR_17)
  goto fail;
 VAR_15->port.out = VAR_17;





 VAR_5.bEndpointAddress = VAR_2.bEndpointAddress;
 VAR_6.bEndpointAddress = VAR_3.bEndpointAddress;

 VAR_9.bEndpointAddress = VAR_2.bEndpointAddress;
 VAR_10.bEndpointAddress = VAR_3.bEndpointAddress;

 VAR_16 = FUNC_5(VAR_13, VAR_1, VAR_4,
   VAR_8, ((void*)0));
 if (VAR_16)
  goto fail;
 FUNC_1(&VAR_14->gadget->dev, "generic ttyGS%d: %s speed IN/%s OUT/%s\n",
  VAR_15->port_num,
  FUNC_4(VAR_12->cdev->gadget) ? "super" :
  FUNC_3(VAR_12->cdev->gadget) ? "dual" : "full",
  VAR_15->port.in->name, VAR_15->port.out->name);
 return 0;

fail:
 FUNC_0(VAR_14, "%s: can't bind, err %d\n", VAR_13->name, VAR_16);

 return VAR_16;
}
