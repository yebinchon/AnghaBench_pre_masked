
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_ss_ep_comp_descriptor {scalar_t__ bDescriptorType; int bMaxBurst; int bmAttributes; int wBytesPerInterval; scalar_t__ bLength; } ;
struct TYPE_7__ {int bEndpointAddress; int wMaxPacketSize; } ;
struct TYPE_8__ {int bLength; int bMaxBurst; int bmAttributes; int wBytesPerInterval; scalar_t__ bDescriptorType; } ;
struct usb_host_endpoint {TYPE_1__ desc; TYPE_6__ ss_ep_comp; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*,struct usb_ss_ep_comp_descriptor*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct device*,int,int,int,struct usb_host_endpoint*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_12(struct device *VAR_2, int VAR_3,
  int VAR_4, int VAR_5, struct usb_host_endpoint *VAR_6,
  unsigned char *VAR_7, int VAR_8)
{
 struct usb_ss_ep_comp_descriptor *VAR_9;
 int VAR_10;




 VAR_9 = (struct usb_ss_ep_comp_descriptor *) VAR_7;

 if (VAR_9->bDescriptorType != VAR_0 ||
   VAR_8 < VAR_1) {
  FUNC_3(VAR_2, "No SuperSpeed endpoint companion for config %d "
    " interface %d altsetting %d ep %d: "
    "using minimum values\n",
    VAR_3, VAR_4, VAR_5, VAR_6->desc.bEndpointAddress);
  VAR_6->ss_ep_comp.bLength = VAR_1;
  VAR_6->ss_ep_comp.bDescriptorType = VAR_0;
  if (FUNC_10(&VAR_6->desc) ||
    FUNC_9(&VAR_6->desc))
   VAR_6->ss_ep_comp.wBytesPerInterval =
     VAR_6->desc.wMaxPacketSize;
  return;
 }
 VAR_7 += VAR_9->bLength;
 VAR_8 -= VAR_9->bLength;
 FUNC_5(&VAR_6->ss_ep_comp, VAR_9, VAR_1);


 if (FUNC_8(&VAR_6->desc) && VAR_9->bMaxBurst != 0) {
  FUNC_3(VAR_2, "Control endpoint with bMaxBurst = %d in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to zero\n", VAR_9->bMaxBurst,
    VAR_3, VAR_4, VAR_5, VAR_6->desc.bEndpointAddress);
  VAR_6->ss_ep_comp.bMaxBurst = 0;
 } else if (VAR_9->bMaxBurst > 15) {
  FUNC_3(VAR_2, "Endpoint with bMaxBurst = %d in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to 15\n", VAR_9->bMaxBurst,
    VAR_3, VAR_4, VAR_5, VAR_6->desc.bEndpointAddress);
  VAR_6->ss_ep_comp.bMaxBurst = 15;
 }

 if ((FUNC_8(&VAR_6->desc) ||
   FUNC_9(&VAR_6->desc)) &&
    VAR_9->bmAttributes != 0) {
  FUNC_3(VAR_2, "%s endpoint with bmAttributes = %d in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to zero\n",
    FUNC_8(&VAR_6->desc) ? "Control" : "Bulk",
    VAR_9->bmAttributes,
    VAR_3, VAR_4, VAR_5, VAR_6->desc.bEndpointAddress);
  VAR_6->ss_ep_comp.bmAttributes = 0;
 } else if (FUNC_7(&VAR_6->desc) &&
   VAR_9->bmAttributes > 16) {
  FUNC_3(VAR_2, "Bulk endpoint with more than 65536 streams in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to max\n",
    VAR_3, VAR_4, VAR_5, VAR_6->desc.bEndpointAddress);
  VAR_6->ss_ep_comp.bmAttributes = 16;
 } else if (FUNC_10(&VAR_6->desc) &&
     !FUNC_1(VAR_9->bmAttributes) &&
     FUNC_0(VAR_9->bmAttributes) > 3) {
  FUNC_3(VAR_2, "Isoc endpoint has Mult of %d in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to 3\n",
    FUNC_0(VAR_9->bmAttributes),
    VAR_3, VAR_4, VAR_5, VAR_6->desc.bEndpointAddress);
  VAR_6->ss_ep_comp.bmAttributes = 2;
 }

 if (FUNC_10(&VAR_6->desc))
  VAR_10 = (VAR_9->bMaxBurst + 1) *
   (FUNC_0(VAR_9->bmAttributes)) *
   FUNC_6(&VAR_6->desc);
 else if (FUNC_9(&VAR_6->desc))
  VAR_10 = FUNC_6(&VAR_6->desc) *
   (VAR_9->bMaxBurst + 1);
 else
  VAR_10 = 999999;
 if (FUNC_4(VAR_9->wBytesPerInterval) > VAR_10) {
  FUNC_3(VAR_2, "%s endpoint with wBytesPerInterval of %d in "
    "config %d interface %d altsetting %d ep %d: "
    "setting to %d\n",
    FUNC_10(&VAR_6->desc) ? "Isoc" : "Int",
    FUNC_4(VAR_9->wBytesPerInterval),
    VAR_3, VAR_4, VAR_5, VAR_6->desc.bEndpointAddress,
    VAR_10);
  VAR_6->ss_ep_comp.wBytesPerInterval = FUNC_2(VAR_10);
 }

 if (FUNC_10(&VAR_6->desc) &&
     FUNC_1(VAR_9->bmAttributes))
  FUNC_11(VAR_2, VAR_3, VAR_4, VAR_5,
       VAR_6, VAR_7, VAR_8);
}
