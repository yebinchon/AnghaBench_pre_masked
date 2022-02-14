
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usba_udc {int lock; } ;
struct TYPE_2__ {unsigned long name; unsigned long maxpacket; struct usb_endpoint_descriptor const* desc; } ;
struct usba_ep {int index; unsigned long fifo_size; int is_isoc; int is_in; int ept_cfg; scalar_t__ can_dma; TYPE_1__ ep; struct usba_udc* udc; int can_isoc; } ;
struct usb_ep {int dummy; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; scalar_t__ bDescriptorType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;




 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct usba_ep* FUNC_4 (struct usb_ep*) ;
 scalar_t__ FUNC_5 (struct usb_endpoint_descriptor const*) ;
 unsigned long FUNC_6 (struct usb_endpoint_descriptor const*) ;
 unsigned int FUNC_7 (struct usb_endpoint_descriptor const*) ;
 int FUNC_8 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_9 (struct usba_ep*,int ) ;
 int FUNC_10 (struct usba_ep*,int ,int) ;
 scalar_t__ FUNC_11 (struct usba_udc*) ;
 int FUNC_12 (struct usba_udc*,int) ;

__attribute__((used)) static int
FUNC_13(struct usb_ep *VAR_20, const struct usb_endpoint_descriptor *VAR_21)
{
 struct usba_ep *VAR_22 = FUNC_4(VAR_20);
 struct usba_udc *VAR_23 = VAR_22->udc;
 unsigned long VAR_24, VAR_25;
 unsigned int VAR_26;

 FUNC_0(VAR_3, "%s: ep_enable: desc=%p\n", VAR_22->ep.name, VAR_21);

 VAR_25 = FUNC_6(VAR_21);

 if (((VAR_21->bEndpointAddress & VAR_19) != VAR_22->index)
   || VAR_22->index == 0
   || VAR_21->bDescriptorType != VAR_18
   || VAR_25 == 0
   || VAR_25 > VAR_22->fifo_size) {
  FUNC_0(VAR_2, "ep_enable: Invalid argument");
  return -VAR_6;
 }

 VAR_22->is_isoc = 0;
 VAR_22->is_in = 0;

 FUNC_0(VAR_2, "%s: EPT_CFG = 0x%lx (maxpacket = %lu)\n",
   VAR_22->ep.name, VAR_22->ept_cfg, VAR_25);

 if (FUNC_5(VAR_21)) {
  VAR_22->is_in = 1;
  VAR_22->ept_cfg |= VAR_11;
 }

 switch (FUNC_8(VAR_21)) {
 case 130:
  VAR_22->ept_cfg |= FUNC_1(VAR_8, VAR_14);
  break;
 case 128:
  if (!VAR_22->can_isoc) {
   FUNC_0(VAR_2, "ep_enable: %s is not isoc capable\n",
     VAR_22->ep.name);
   return -VAR_6;
  }





  VAR_26 = FUNC_7(VAR_21);
  if (VAR_26 > 3)
   return -VAR_6;

  VAR_22->is_isoc = 1;
  VAR_22->ept_cfg |= FUNC_1(VAR_8, VAR_16);
  VAR_22->ept_cfg |= FUNC_1(VAR_9, VAR_26);

  break;
 case 131:
  VAR_22->ept_cfg |= FUNC_1(VAR_8, VAR_13);
  break;
 case 129:
  VAR_22->ept_cfg |= FUNC_1(VAR_8, VAR_15);
  break;
 }

 FUNC_2(&VAR_22->udc->lock, VAR_24);

 VAR_22->ep.desc = VAR_21;
 VAR_22->ep.maxpacket = VAR_25;

 FUNC_10(VAR_22, VAR_0, VAR_22->ept_cfg);
 FUNC_10(VAR_22, VAR_1, VAR_12);

 if (VAR_22->can_dma) {
  u32 VAR_27;

  FUNC_12(VAR_23, FUNC_1(VAR_7, 1 << VAR_22->index) |
          FUNC_1(VAR_5, 1 << VAR_22->index));
  VAR_27 = VAR_10 | VAR_17;
  FUNC_10(VAR_22, VAR_1, VAR_27);
 } else {
  FUNC_12(VAR_23, FUNC_1(VAR_7, 1 << VAR_22->index));
 }

 FUNC_3(&VAR_23->lock, VAR_24);

 FUNC_0(VAR_4, "EPT_CFG%d after init: %#08lx\n", VAR_22->index,
   (unsigned long)FUNC_9(VAR_22, VAR_0));
 FUNC_0(VAR_4, "INT_ENB after init: %#08lx\n",
   (unsigned long)FUNC_11(VAR_23));

 return 0;
}
