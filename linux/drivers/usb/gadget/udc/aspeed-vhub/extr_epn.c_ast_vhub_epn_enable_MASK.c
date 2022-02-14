
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usb_ep {int dummy; } ;
struct usb_endpoint_descriptor {int bDescriptorType; } ;
struct TYPE_6__ {int enabled; int is_iso; int stalled; int wedged; int desc_mode; int chunk_max; int descs_dma; int dma_conf; int g_idx; scalar_t__ regs; scalar_t__ is_in; scalar_t__ descs; scalar_t__ d_last; scalar_t__ d_next; } ;
struct TYPE_5__ {int maxpacket; } ;
struct ast_vhub_ep {scalar_t__ d_idx; TYPE_3__ epn; TYPE_2__ ep; struct ast_vhub* vhub; struct ast_vhub_dev* dev; } ;
struct TYPE_4__ {int speed; } ;
struct ast_vhub_dev {scalar_t__ index; TYPE_1__ gadget; int driver; } ;
struct ast_vhub {int lock; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ast_vhub_ep*,char*,...) ;
 int FUNC_1 (struct ast_vhub_ep*,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;




 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 struct ast_vhub_ep* FUNC_12 (struct usb_ep*) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor const*) ;
 int FUNC_14 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_15 (struct usb_endpoint_descriptor const*) ;
 int FUNC_16 (struct usb_endpoint_descriptor const*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct usb_ep* VAR_21,
          const struct usb_endpoint_descriptor *VAR_22)
{
 struct ast_vhub_ep *VAR_23 = FUNC_12(VAR_21);
 struct ast_vhub_dev *VAR_24;
 struct ast_vhub *VAR_25;
 u16 VAR_26, VAR_27;
 unsigned long VAR_28;
 u32 VAR_29, VAR_30, VAR_31;


 if (!VAR_21 || !VAR_22)
  return -VAR_9;

 VAR_26 = FUNC_14(VAR_22);
 if (!VAR_23->d_idx || !VAR_23->dev ||
     VAR_22->bDescriptorType != VAR_14 ||
     VAR_26 == 0 || VAR_26 > VAR_23->ep.maxpacket) {
  FUNC_0(VAR_23, "Invalid EP enable,d_idx=%d,dev=%p,type=%d,mp=%d/%d\n",
        VAR_23->d_idx, VAR_23->dev, VAR_22->bDescriptorType,
        VAR_26, VAR_23->ep.maxpacket);
  return -VAR_9;
 }
 if (VAR_23->d_idx != FUNC_15(VAR_22)) {
  FUNC_0(VAR_23, "EP number mismatch !\n");
  return -VAR_9;
 }

 if (VAR_23->epn.enabled) {
  FUNC_0(VAR_23, "Already enabled\n");
  return -VAR_8;
 }
 VAR_24 = VAR_23->dev;
 VAR_25 = VAR_23->vhub;


 if (!VAR_24->driver) {
  FUNC_0(VAR_23, "Bogus device state: driver=%p speed=%d\n",
         VAR_24->driver, VAR_24->gadget.speed);
  return -VAR_13;
 }


 VAR_23->epn.is_in = FUNC_13(VAR_22);
 VAR_23->ep.maxpacket = VAR_26;
 VAR_27 = FUNC_16(VAR_22);
 VAR_23->epn.d_next = VAR_23->epn.d_last = 0;
 VAR_23->epn.is_iso = 0;
 VAR_23->epn.stalled = 0;
 VAR_23->epn.wedged = 0;

 FUNC_0(VAR_23, "Enabling [%s] %s num %d maxpacket=%d\n",
       VAR_23->epn.is_in ? "in" : "out", FUNC_17(VAR_27),
       FUNC_15(VAR_22), VAR_26);


 VAR_23->epn.desc_mode = VAR_23->epn.descs && VAR_23->epn.is_in;
 if (VAR_23->epn.desc_mode)
  FUNC_8(VAR_23->epn.descs, 0, 8 * VAR_0);





 VAR_23->epn.chunk_max = VAR_23->ep.maxpacket;
 if (VAR_23->epn.is_in) {
  VAR_23->epn.chunk_max <<= 3;
  while (VAR_23->epn.chunk_max > 4095)
   VAR_23->epn.chunk_max -= VAR_23->ep.maxpacket;
 }

 switch(VAR_27) {
 case 130:
  FUNC_0(VAR_23, "Only one control endpoint\n");
  return -VAR_9;
 case 129:
  VAR_29 = FUNC_5(VAR_11);
  break;
 case 131:
  VAR_29 = FUNC_5(VAR_10);
  break;
 case 128:
  VAR_29 = FUNC_5(VAR_12);
  VAR_23->epn.is_iso = 1;
  break;
 default:
  return -VAR_9;
 }


 if (VAR_26 < 1024)
  VAR_29 |= FUNC_4(VAR_26);
 if (!VAR_23->epn.is_in)
  VAR_29 |= VAR_15;
 VAR_29 |= FUNC_3(FUNC_15(VAR_22));
 VAR_29 |= VAR_16;
 VAR_29 |= FUNC_2(VAR_24->index + 1);
 FUNC_1(VAR_23, "config=%08x\n", VAR_29);

 FUNC_10(&VAR_25->lock, VAR_28);


 FUNC_18(0, VAR_23->epn.regs + VAR_3);
 FUNC_18(VAR_17,
        VAR_23->epn.regs + VAR_6);


 FUNC_18(VAR_29, VAR_23->epn.regs + VAR_3);

 if (VAR_23->epn.desc_mode) {

  FUNC_18(0, VAR_23->epn.regs + VAR_5);


  FUNC_18(VAR_23->epn.descs_dma,
         VAR_23->epn.regs + VAR_4);


  VAR_23->epn.dma_conf = VAR_18;
  if (VAR_23->epn.is_in)
   VAR_23->epn.dma_conf |= VAR_19;


  FUNC_18(VAR_23->epn.dma_conf | VAR_17,
         VAR_23->epn.regs + VAR_6);


  FUNC_18(VAR_23->epn.dma_conf,
         VAR_23->epn.regs + VAR_6);
 } else {

  VAR_23->epn.dma_conf = VAR_20;


  FUNC_18(VAR_23->epn.dma_conf | VAR_17,
         VAR_23->epn.regs + VAR_6);
  FUNC_18(VAR_23->epn.dma_conf,
         VAR_23->epn.regs + VAR_6);
  FUNC_18(0, VAR_23->epn.regs + VAR_5);
 }


 FUNC_18(FUNC_7(VAR_23->epn.g_idx),
        VAR_25->regs + VAR_7);


 VAR_31 = FUNC_6(VAR_23->epn.g_idx);
 FUNC_18(VAR_31, VAR_25->regs + VAR_2);
 VAR_30 = FUNC_9(VAR_25->regs + VAR_1);
 VAR_30 |= VAR_31;
 FUNC_18(VAR_30, VAR_25->regs + VAR_1);


 VAR_23->epn.enabled = 1;

 FUNC_11(&VAR_25->lock, VAR_28);

 return 0;
}
