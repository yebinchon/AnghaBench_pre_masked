
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct xusb_udc {int (* read_fn ) (scalar_t__) ;scalar_t__ addr; int (* write_fn ) (scalar_t__,scalar_t__,int) ;int dev; } ;
struct TYPE_2__ {int maxpacket; struct usb_endpoint_descriptor const* desc; } ;
struct xusb_ep {int is_in; int epnumber; int is_iso; int buffer0ready; int buffer1ready; int rambase; scalar_t__ offset; scalar_t__ curbufnum; TYPE_1__ ep_usb; struct usb_endpoint_descriptor const* desc; struct xusb_udc* udc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; int bmAttributes; int wMaxPacketSize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int* VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (struct xusb_ep*,struct xusb_udc*) ;

__attribute__((used)) static int FUNC_10(struct xusb_ep *VAR_9,
       const struct usb_endpoint_descriptor *VAR_10)
{
 struct xusb_udc *VAR_11 = VAR_9->udc;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u16 VAR_15;

 VAR_9->is_in = ((VAR_10->bEndpointAddress & VAR_1) != 0);

 VAR_9->epnumber = (VAR_10->bEndpointAddress & 0x0f);
 VAR_9->desc = VAR_10;
 VAR_9->ep_usb.desc = VAR_10;
 VAR_12 = VAR_10->bmAttributes & VAR_2;
 VAR_9->ep_usb.maxpacket = VAR_15 = FUNC_2(VAR_10->wMaxPacketSize);

 switch (VAR_12) {
 case 130:
  FUNC_0(VAR_11->dev, "only one control endpoint\n");

  VAR_9->is_iso = 0;
  return -VAR_0;
 case 129:

  VAR_9->is_iso = 0;
  if (VAR_15 > 64) {
   FUNC_0(VAR_11->dev, "bogus maxpacket %d\n", VAR_15);
   return -VAR_0;
  }
  break;
 case 131:

  VAR_9->is_iso = 0;
  if (!(FUNC_1(VAR_15) && VAR_15 >= 8 &&
    VAR_15 <= 512)) {
   FUNC_0(VAR_11->dev, "bogus maxpacket %d\n", VAR_15);
   return -VAR_0;
  }
  break;
 case 128:

  VAR_9->is_iso = 1;
  break;
 }

 VAR_9->buffer0ready = 0;
 VAR_9->buffer1ready = 0;
 VAR_9->curbufnum = 0;
 VAR_9->rambase = VAR_8[VAR_9->epnumber];
 FUNC_9(VAR_9, VAR_11);

 FUNC_0(VAR_11->dev, "Enable Endpoint %d max pkt is %d\n",
  VAR_9->epnumber, VAR_15);


 VAR_13 = VAR_11->read_fn(VAR_11->addr + VAR_9->offset);
 VAR_13 |= VAR_4;
 VAR_11->write_fn(VAR_11->addr, VAR_9->offset, VAR_13);
 if (VAR_9->epnumber)
  VAR_9->rambase <<= 2;


 VAR_14 = VAR_11->read_fn(VAR_11->addr + VAR_5);
 VAR_14 |= (VAR_7 << VAR_9->epnumber);
 VAR_11->write_fn(VAR_11->addr, VAR_5, VAR_14);


 if (VAR_9->epnumber && !VAR_9->is_in) {
  VAR_11->write_fn(VAR_11->addr, VAR_3,
         1 << VAR_9->epnumber);
  VAR_9->buffer0ready = 1;
  VAR_11->write_fn(VAR_11->addr, VAR_3,
        (1 << (VAR_9->epnumber +
         VAR_6)));
  VAR_9->buffer1ready = 1;
 }

 return 0;
}
