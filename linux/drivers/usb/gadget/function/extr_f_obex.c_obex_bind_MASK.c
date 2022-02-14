
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct usb_string {int id; } ;
struct usb_function {int name; } ;
struct usb_ep {int name; } ;
struct usb_configuration {struct usb_composite_dev* cdev; } ;
struct usb_composite_dev {TYPE_2__* gadget; } ;
struct TYPE_15__ {struct usb_ep* out; struct usb_ep* in; } ;
struct f_obex {int ctrl_id; int data_id; TYPE_1__ port; int port_num; } ;
struct TYPE_21__ {int bInterfaceNumber; int iInterface; } ;
struct TYPE_20__ {int bInterfaceNumber; int iInterface; } ;
struct TYPE_19__ {int bEndpointAddress; } ;
struct TYPE_18__ {int bEndpointAddress; } ;
struct TYPE_17__ {int bEndpointAddress; } ;
struct TYPE_16__ {int dev; } ;
struct TYPE_14__ {int bMasterInterface0; int bSlaveInterface0; } ;
struct TYPE_13__ {int bInterfaceNumber; int iInterface; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct usb_composite_dev*,char*,int ,struct usb_function*,int) ;
 scalar_t__ FUNC_2 (struct usb_string*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (struct usb_string*) ;
 int FUNC_4 (struct usb_configuration*) ;
 int FUNC_5 (int *,char*,int ,char*,int ,int ) ;
 int VAR_4 ;
 struct f_obex* FUNC_6 (struct usb_function*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int VAR_5 ;
 TYPE_11__ VAR_6 ;
 TYPE_10__ VAR_7 ;
 TYPE_9__ VAR_8 ;
 TYPE_8__ VAR_9 ;
 TYPE_3__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 TYPE_5__ VAR_12 ;
 TYPE_4__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (struct usb_function*,int ,int ,int *,int *) ;
 struct usb_ep* FUNC_9 (TYPE_2__*,TYPE_3__*) ;
 struct usb_string* FUNC_10 (struct usb_composite_dev*,int ,int ) ;
 int FUNC_11 (struct usb_configuration*,struct usb_function*) ;

__attribute__((used)) static int FUNC_12(struct usb_configuration *VAR_16, struct usb_function *VAR_17)
{
 struct usb_composite_dev *VAR_18 = VAR_16->cdev;
 struct f_obex *VAR_19 = FUNC_6(VAR_17);
 struct usb_string *VAR_20;
 int VAR_21;
 struct usb_ep *VAR_22;

 if (!FUNC_4(VAR_16))
  return -VAR_0;

 VAR_20 = FUNC_10(VAR_18, VAR_15,
     FUNC_0(VAR_14));
 if (FUNC_2(VAR_20))
  return FUNC_3(VAR_20);
 VAR_7.iInterface = VAR_20[VAR_2].id;
 VAR_9.iInterface = VAR_20[VAR_3].id;
 VAR_8.iInterface = VAR_20[VAR_3].id;



 VAR_21 = FUNC_11(VAR_16, VAR_17);
 if (VAR_21 < 0)
  goto fail;
 VAR_19->ctrl_id = VAR_21;

 VAR_7.bInterfaceNumber = VAR_21;
 VAR_6.bMasterInterface0 = VAR_21;

 VAR_21 = FUNC_11(VAR_16, VAR_17);
 if (VAR_21 < 0)
  goto fail;
 VAR_19->data_id = VAR_21;

 VAR_9.bInterfaceNumber = VAR_21;
 VAR_8.bInterfaceNumber = VAR_21;
 VAR_6.bSlaveInterface0 = VAR_21;



 VAR_21 = -VAR_1;
 VAR_22 = FUNC_9(VAR_18->gadget, &VAR_10);
 if (!VAR_22)
  goto fail;
 VAR_19->port.in = VAR_22;

 VAR_22 = FUNC_9(VAR_18->gadget, &VAR_11);
 if (!VAR_22)
  goto fail;
 VAR_19->port.out = VAR_22;






 VAR_12.bEndpointAddress =
  VAR_10.bEndpointAddress;
 VAR_13.bEndpointAddress =
  VAR_11.bEndpointAddress;

 VAR_21 = FUNC_8(VAR_17, VAR_4, VAR_5, ((void*)0),
     ((void*)0));
 if (VAR_21)
  goto fail;

 FUNC_5(&VAR_18->gadget->dev, "obex ttyGS%d: %s speed IN/%s OUT/%s\n",
  VAR_19->port_num,
  FUNC_7(VAR_16->cdev->gadget) ? "dual" : "full",
  VAR_19->port.in->name, VAR_19->port.out->name);

 return 0;

fail:
 FUNC_1(VAR_18, "%s/%p: can't bind, err %d\n", VAR_17->name, VAR_17, VAR_21);

 return VAR_21;
}
