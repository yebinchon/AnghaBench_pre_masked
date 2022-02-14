
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_ep {scalar_t__ name; int maxpacket; } ;
struct usb_endpoint_descriptor {scalar_t__ bDescriptorType; int bEndpointAddress; } ;
struct TYPE_3__ {scalar_t__ speed; } ;
struct s3c2410_udc {TYPE_1__ gadget; int driver; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor const* desc; } ;
struct s3c2410_ep {int bEndpointAddress; int num; scalar_t__ halted; TYPE_2__ ep; struct s3c2410_udc* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int ,char*,scalar_t__,int,int,char*,int) ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct usb_ep*,int ) ;
 struct s3c2410_ep* FUNC_4 (struct usb_ep*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static int FUNC_8(struct usb_ep *VAR_21,
     const struct usb_endpoint_descriptor *VAR_22)
{
 struct s3c2410_udc *VAR_23;
 struct s3c2410_ep *VAR_24;
 u32 VAR_25, VAR_26;
 unsigned long VAR_27;
 u32 VAR_28, VAR_29;
 u32 VAR_30;

 VAR_24 = FUNC_4(VAR_21);

 if (!VAR_21 || !VAR_22
   || VAR_21->name == VAR_20
   || VAR_22->bDescriptorType != VAR_18)
  return -VAR_1;

 VAR_23 = VAR_24->dev;
 if (!VAR_23->driver || VAR_23->gadget.speed == VAR_19)
  return -VAR_2;

 VAR_25 = FUNC_7(VAR_22);

 FUNC_2(VAR_27);
 VAR_21->maxpacket = VAR_25;
 VAR_24->ep.desc = VAR_22;
 VAR_24->halted = 0;
 VAR_24->bEndpointAddress = VAR_22->bEndpointAddress;


 FUNC_6(VAR_24->num, VAR_8);
 FUNC_6(VAR_25 >> 3, VAR_11);


 if (VAR_22->bEndpointAddress & VAR_17) {
  VAR_28 = VAR_5|VAR_4;
  VAR_29 = VAR_7|VAR_6;

  FUNC_6(VAR_24->num, VAR_8);
  FUNC_6(VAR_28, VAR_9);
  FUNC_6(VAR_24->num, VAR_8);
  FUNC_6(VAR_29, VAR_10);
 } else {

  VAR_28 = VAR_4;
  VAR_29 = VAR_6;

  FUNC_6(VAR_24->num, VAR_8);
  FUNC_6(VAR_28, VAR_9);
  FUNC_6(VAR_24->num, VAR_8);
  FUNC_6(VAR_29, VAR_10);

  VAR_28 = VAR_13 | VAR_12;
  VAR_29 = VAR_14;

  FUNC_6(VAR_24->num, VAR_8);
  FUNC_6(VAR_28, VAR_15);
  FUNC_6(VAR_24->num, VAR_8);
  FUNC_6(VAR_29, VAR_16);
 }


 VAR_30 = FUNC_5(VAR_3);
 FUNC_6(VAR_30 | (1 << VAR_24->num), VAR_3);


 VAR_26 = VAR_22->bEndpointAddress;
 FUNC_0(VAR_0, "enable %s(%d) ep%x%s-blk max %02x\n",
   VAR_21->name, VAR_24->num, VAR_26,
   VAR_22->bEndpointAddress & VAR_17 ? "in" : "out", VAR_25);

 FUNC_1(VAR_27);
 FUNC_3(VAR_21, 0);

 return 0;
}
