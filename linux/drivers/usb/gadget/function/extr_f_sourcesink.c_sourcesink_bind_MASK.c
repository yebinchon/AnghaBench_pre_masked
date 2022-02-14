
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_18__ ;
typedef struct TYPE_32__ TYPE_17__ ;
typedef struct TYPE_31__ TYPE_16__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct usb_function {int name; } ;
struct usb_configuration {struct usb_composite_dev* cdev; } ;
struct usb_composite_dev {TYPE_5__* gadget; } ;
struct f_sourcesink {int isoc_interval; int isoc_mult; int isoc_maxburst; int isoc_maxpacket; TYPE_3__* iso_out_ep; TYPE_4__* iso_in_ep; TYPE_2__* out_ep; TYPE_1__* in_ep; } ;
struct TYPE_42__ {int wMaxPacketSize; int bInterval; int bEndpointAddress; } ;
struct TYPE_41__ {int bEndpointAddress; } ;
struct TYPE_40__ {int bEndpointAddress; } ;
struct TYPE_39__ {int wMaxPacketSize; int bInterval; int bEndpointAddress; } ;
struct TYPE_38__ {int name; } ;
struct TYPE_37__ {char* name; } ;
struct TYPE_36__ {char* name; } ;
struct TYPE_35__ {int name; } ;
struct TYPE_34__ {int name; } ;
struct TYPE_33__ {int wMaxPacketSize; int bInterval; int bEndpointAddress; } ;
struct TYPE_32__ {int wMaxPacketSize; int bInterval; int bEndpointAddress; } ;
struct TYPE_31__ {int bEndpointAddress; } ;
struct TYPE_30__ {int bEndpointAddress; } ;
struct TYPE_29__ {int bInterfaceNumber; } ;
struct TYPE_28__ {int bInterfaceNumber; } ;
struct TYPE_27__ {int bmAttributes; int bMaxBurst; int wBytesPerInterval; } ;
struct TYPE_26__ {int wMaxPacketSize; int bInterval; int bEndpointAddress; } ;
struct TYPE_25__ {int bmAttributes; int bMaxBurst; int wBytesPerInterval; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,char*,int ,int ,int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_composite_dev*,char*,int ,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 TYPE_6__ VAR_6 ;
 TYPE_6__ VAR_7 ;
 int ** VAR_8 ;
 struct f_sourcesink* FUNC_2 (struct usb_function*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 TYPE_18__ VAR_9 ;
 TYPE_17__ VAR_10 ;
 TYPE_16__ VAR_11 ;
 TYPE_15__ VAR_12 ;
 int ** VAR_13 ;
 TYPE_14__ VAR_14 ;
 TYPE_13__ VAR_15 ;
 TYPE_12__ VAR_16 ;
 TYPE_11__ VAR_17 ;
 TYPE_10__ VAR_18 ;
 TYPE_9__ VAR_19 ;
 TYPE_8__ VAR_20 ;
 TYPE_7__ VAR_21 ;
 int ** VAR_22 ;
 int FUNC_5 (struct usb_function*,int **,int **,int **,int *) ;
 void* FUNC_6 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct usb_configuration*,struct usb_function*) ;

__attribute__((used)) static int
FUNC_9(struct usb_configuration *VAR_23, struct usb_function *VAR_24)
{
 struct usb_composite_dev *VAR_25 = VAR_23->cdev;
 struct f_sourcesink *VAR_26 = FUNC_2(VAR_24);
 int VAR_27;
 int VAR_28;


 VAR_27 = FUNC_8(VAR_23, VAR_24);
 if (VAR_27 < 0)
  return VAR_27;
 VAR_14 = VAR_27;
 VAR_15 = VAR_27;


 VAR_26->in_ep = FUNC_6(VAR_25->gadget, &VAR_7);
 if (!VAR_26->in_ep) {
autoconf_fail:
  FUNC_1(VAR_25, "%s: can't autoconfigure on %s\n",
   VAR_24->name, VAR_25->gadget->name);
  return -VAR_0;
 }

 VAR_26->out_ep = FUNC_6(VAR_25->gadget, &VAR_6);
 if (!VAR_26->out_ep)
  goto autoconf_fail;


 if (VAR_26->isoc_interval < 1)
  VAR_26->isoc_interval = 1;
 if (VAR_26->isoc_interval > 16)
  VAR_26->isoc_interval = 16;
 if (VAR_26->isoc_mult > 2)
  VAR_26->isoc_mult = 2;
 if (VAR_26->isoc_maxburst > 15)
  VAR_26->isoc_maxburst = 15;


 VAR_5.wMaxPacketSize = VAR_26->isoc_maxpacket > 1023 ?
      1023 : VAR_26->isoc_maxpacket;
 VAR_5.bInterval = VAR_26->isoc_interval;
 VAR_4.wMaxPacketSize = VAR_26->isoc_maxpacket > 1023 ?
      1023 : VAR_26->isoc_maxpacket;
 VAR_4.bInterval = VAR_26->isoc_interval;


 VAR_26->iso_in_ep = FUNC_6(VAR_25->gadget, &VAR_5);
 if (!VAR_26->iso_in_ep)
  goto no_iso;

 VAR_26->iso_out_ep = FUNC_6(VAR_25->gadget, &VAR_4);
 if (!VAR_26->iso_out_ep) {
  FUNC_7(VAR_26->iso_in_ep);
  VAR_26->iso_in_ep = ((void*)0);
no_iso:





  VAR_8[VAR_1] = ((void*)0);
  VAR_13[VAR_2] = ((void*)0);
  VAR_22[VAR_3] = ((void*)0);
 }

 if (VAR_26->isoc_maxpacket > 1024)
  VAR_26->isoc_maxpacket = 1024;


 VAR_12.bEndpointAddress = VAR_7.bEndpointAddress;
 VAR_11.bEndpointAddress = VAR_6.bEndpointAddress;






 VAR_10.wMaxPacketSize = VAR_26->isoc_maxpacket;
 VAR_10.wMaxPacketSize |= VAR_26->isoc_mult << 11;
 VAR_10.bInterval = VAR_26->isoc_interval;
 VAR_10.bEndpointAddress =
  VAR_5.bEndpointAddress;

 VAR_9.wMaxPacketSize = VAR_26->isoc_maxpacket;
 VAR_9.wMaxPacketSize |= VAR_26->isoc_mult << 11;
 VAR_9.bInterval = VAR_26->isoc_interval;
 VAR_9.bEndpointAddress = VAR_4.bEndpointAddress;


 VAR_21.bEndpointAddress =
  VAR_7.bEndpointAddress;
 VAR_20.bEndpointAddress =
  VAR_6.bEndpointAddress;






 VAR_19.wMaxPacketSize = VAR_26->isoc_maxpacket;
 VAR_19.bInterval = VAR_26->isoc_interval;
 VAR_18.bmAttributes = VAR_26->isoc_mult;
 VAR_18.bMaxBurst = VAR_26->isoc_maxburst;
 VAR_18.wBytesPerInterval = VAR_26->isoc_maxpacket *
  (VAR_26->isoc_mult + 1) * (VAR_26->isoc_maxburst + 1);
 VAR_19.bEndpointAddress =
  VAR_5.bEndpointAddress;

 VAR_17.wMaxPacketSize = VAR_26->isoc_maxpacket;
 VAR_17.bInterval = VAR_26->isoc_interval;
 VAR_16.bmAttributes = VAR_26->isoc_mult;
 VAR_16.bMaxBurst = VAR_26->isoc_maxburst;
 VAR_16.wBytesPerInterval = VAR_26->isoc_maxpacket *
  (VAR_26->isoc_mult + 1) * (VAR_26->isoc_maxburst + 1);
 VAR_17.bEndpointAddress = VAR_4.bEndpointAddress;

 VAR_28 = FUNC_5(VAR_24, VAR_8,
   VAR_13, VAR_22, ((void*)0));
 if (VAR_28)
  return VAR_28;

 FUNC_0(VAR_25, "%s speed %s: IN/%s, OUT/%s, ISO-IN/%s, ISO-OUT/%s\n",
     (FUNC_4(VAR_23->cdev->gadget) ? "super" :
      (FUNC_3(VAR_23->cdev->gadget) ? "dual" : "full")),
   VAR_24->name, VAR_26->in_ep->name, VAR_26->out_ep->name,
   VAR_26->iso_in_ep ? VAR_26->iso_in_ep->name : "<none>",
   VAR_26->iso_out_ep ? VAR_26->iso_out_ep->name : "<none>");
 return 0;
}
