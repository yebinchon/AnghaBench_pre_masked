
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_ep {scalar_t__ name; } ;
struct usb_endpoint_descriptor {scalar_t__ bDescriptorType; scalar_t__ bEndpointAddress; scalar_t__ bmAttributes; int wMaxPacketSize; } ;
struct TYPE_4__ {scalar_t__ maxpacket; struct usb_endpoint_descriptor const* desc; } ;
struct s3c_hsudc_ep {scalar_t__ bEndpointAddress; TYPE_2__ ep; scalar_t__ wedge; scalar_t__ stopped; struct s3c_hsudc* dev; } ;
struct TYPE_3__ {scalar_t__ speed; } ;
struct s3c_hsudc {int lock; scalar_t__ regs; TYPE_1__ gadget; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct s3c_hsudc_ep*) ;
 scalar_t__ FUNC_2 (struct s3c_hsudc_ep*) ;
 struct s3c_hsudc_ep* FUNC_3 (struct usb_ep*) ;
 int FUNC_4 (struct usb_ep*,int ) ;
 int FUNC_5 (struct s3c_hsudc*,scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_9 (struct usb_endpoint_descriptor const*) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct usb_ep *VAR_11,
    const struct usb_endpoint_descriptor *VAR_12)
{
 struct s3c_hsudc_ep *VAR_13;
 struct s3c_hsudc *VAR_14;
 unsigned long VAR_15;
 u32 VAR_16 = 0;

 VAR_13 = FUNC_3(VAR_11);
 if (!VAR_11 || !VAR_12 || VAR_11->name == VAR_10
  || VAR_12->bDescriptorType != VAR_7
  || VAR_13->bEndpointAddress != VAR_12->bEndpointAddress
  || FUNC_2(VAR_13) < FUNC_8(VAR_12))
  return -VAR_0;

 if ((VAR_12->bmAttributes == VAR_8
  && FUNC_8(VAR_12) != FUNC_2(VAR_13))
  || !VAR_12->wMaxPacketSize)
  return -VAR_1;

 VAR_14 = VAR_13->dev;
 if (!VAR_14->driver || VAR_14->gadget.speed == VAR_9)
  return -VAR_2;

 FUNC_6(&VAR_14->lock, VAR_15);

 FUNC_5(VAR_14, VAR_13->bEndpointAddress);
 VAR_16 |= ((FUNC_9(VAR_12)) ? VAR_5 : VAR_4);
 FUNC_10(VAR_16, VAR_14->regs + VAR_3);

 VAR_13->stopped = VAR_13->wedge = 0;
 VAR_13->ep.desc = VAR_12;
 VAR_13->ep.maxpacket = FUNC_8(VAR_12);

 FUNC_4(VAR_11, 0);
 FUNC_0(FUNC_1(VAR_13), VAR_14->regs + VAR_6);

 FUNC_7(&VAR_14->lock, VAR_15);
 return 0;
}
