
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct usb_function {int name; } ;
struct usb_configuration {struct usb_composite_dev* cdev; } ;
struct usb_composite_dev {TYPE_3__* gadget; } ;
struct f_loopback {TYPE_2__* out_ep; TYPE_1__* in_ep; } ;
struct TYPE_24__ {int bEndpointAddress; } ;
struct TYPE_23__ {int bInterfaceNumber; int iInterface; } ;
struct TYPE_22__ {int bEndpointAddress; } ;
struct TYPE_21__ {int bEndpointAddress; } ;
struct TYPE_20__ {int id; } ;
struct TYPE_19__ {int bEndpointAddress; } ;
struct TYPE_18__ {int name; } ;
struct TYPE_17__ {int name; } ;
struct TYPE_16__ {int name; } ;
struct TYPE_15__ {int bEndpointAddress; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_composite_dev*,char*,int ,int ) ;
 TYPE_4__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 struct f_loopback* FUNC_2 (struct usb_function*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 TYPE_10__ VAR_4 ;
 TYPE_9__ VAR_5 ;
 int VAR_6 ;
 TYPE_8__ VAR_7 ;
 TYPE_7__ VAR_8 ;
 TYPE_6__ VAR_9 ;
 int VAR_10 ;
 TYPE_5__* VAR_11 ;
 int FUNC_5 (struct usb_function*,int ,int ,int ,int *) ;
 void* FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (struct usb_configuration*,struct usb_function*) ;
 int FUNC_8 (struct usb_composite_dev*) ;

__attribute__((used)) static int FUNC_9(struct usb_configuration *VAR_12, struct usb_function *VAR_13)
{
 struct usb_composite_dev *VAR_14 = VAR_12->cdev;
 struct f_loopback *VAR_15 = FUNC_2(VAR_13);
 int VAR_16;
 int VAR_17;


 VAR_16 = FUNC_7(VAR_12, VAR_13);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_7.bInterfaceNumber = VAR_16;

 VAR_16 = FUNC_8(VAR_14);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_11[0].id = VAR_16;
 VAR_7.iInterface = VAR_16;



 VAR_15->in_ep = FUNC_6(VAR_14->gadget, &VAR_2);
 if (!VAR_15->in_ep) {
autoconf_fail:
  FUNC_1(VAR_14, "%s: can't autoconfigure on %s\n",
   VAR_13->name, VAR_14->gadget->name);
  return -VAR_0;
 }

 VAR_15->out_ep = FUNC_6(VAR_14->gadget, &VAR_1);
 if (!VAR_15->out_ep)
  goto autoconf_fail;


 VAR_5.bEndpointAddress =
  VAR_2.bEndpointAddress;
 VAR_4.bEndpointAddress = VAR_1.bEndpointAddress;


 VAR_9.bEndpointAddress =
  VAR_2.bEndpointAddress;
 VAR_8.bEndpointAddress = VAR_1.bEndpointAddress;

 VAR_17 = FUNC_5(VAR_13, VAR_3, VAR_6,
   VAR_10, ((void*)0));
 if (VAR_17)
  return VAR_17;

 FUNC_0(VAR_14, "%s speed %s: IN/%s, OUT/%s\n",
     (FUNC_4(VAR_12->cdev->gadget) ? "super" :
      (FUNC_3(VAR_12->cdev->gadget) ? "dual" : "full")),
   VAR_13->name, VAR_15->in_ep->name, VAR_15->out_ep->name);
 return 0;
}
