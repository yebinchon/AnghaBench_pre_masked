
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_endpoint_descriptor {int dummy; } ;
struct dwc3_trb {void* param1; void* param0; int ctrl; void* bph; void* bpl; } ;
struct dwc3_gadget_ep_cmd_params {void* param1; void* param0; int ctrl; void* bph; void* bpl; } ;
struct TYPE_2__ {struct usb_endpoint_descriptor* desc; } ;
struct dwc3_ep {int flags; struct dwc3_trb* trb_pool; int stream_capable; scalar_t__ trb_enqueue; scalar_t__ trb_dequeue; int number; int type; struct dwc3* dwc; TYPE_1__ endpoint; } ;
struct dwc3 {int regs; } ;
typedef int params ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dwc3_ep*,unsigned int) ;
 int FUNC_2 (struct dwc3_ep*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct dwc3_ep*,int ,struct dwc3_trb*) ;
 int FUNC_5 (struct dwc3_ep*,struct dwc3_trb*) ;
 int FUNC_6 (int ,int ,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct dwc3_trb*,int ,int) ;
 int FUNC_9 (struct dwc3_ep*) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_12 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_14 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static int FUNC_15(struct dwc3_ep *VAR_6, unsigned int VAR_7)
{
 const struct usb_endpoint_descriptor *VAR_8 = VAR_6->endpoint.desc;
 struct dwc3 *VAR_9 = VAR_6->dwc;

 u32 VAR_10;
 int VAR_11;

 if (!(VAR_6->flags & VAR_2)) {
  VAR_11 = FUNC_2(VAR_6);
  if (VAR_11)
   return VAR_11;
 }

 VAR_11 = FUNC_1(VAR_6, VAR_7);
 if (VAR_11)
  return VAR_11;

 if (!(VAR_6->flags & VAR_2)) {
  struct dwc3_trb *VAR_12;
  struct dwc3_trb *VAR_13;

  VAR_6->type = FUNC_11(VAR_8);
  VAR_6->flags |= VAR_2;

  VAR_10 = FUNC_3(VAR_9->regs, VAR_0);
  VAR_10 |= FUNC_0(VAR_6->number);
  FUNC_6(VAR_9->regs, VAR_0, VAR_10);

  if (FUNC_13(VAR_8))
   goto out;


  VAR_6->trb_dequeue = 0;
  VAR_6->trb_enqueue = 0;
  FUNC_8(VAR_6->trb_pool, 0,
         sizeof(struct dwc3_trb) * VAR_5);


  VAR_12 = &VAR_6->trb_pool[0];

  VAR_13 = &VAR_6->trb_pool[VAR_5 - 1];
  VAR_13->bpl = FUNC_7(FUNC_5(VAR_6, VAR_12));
  VAR_13->bph = FUNC_10(FUNC_5(VAR_6, VAR_12));
  VAR_13->ctrl |= VAR_3;
  VAR_13->ctrl |= VAR_4;
 }





 if ((FUNC_12(VAR_8) && !VAR_6->stream_capable) ||
   FUNC_14(VAR_8)) {
  struct dwc3_gadget_ep_cmd_params VAR_14;
  struct dwc3_trb *VAR_15;
  dma_addr_t VAR_16;
  u32 VAR_17;

  FUNC_8(&VAR_14, 0, sizeof(VAR_14));
  VAR_15 = &VAR_6->trb_pool[0];
  VAR_16 = FUNC_5(VAR_6, VAR_15);

  VAR_14.param0 = FUNC_10(VAR_16);
  VAR_14.param1 = FUNC_7(VAR_16);

  VAR_17 = VAR_1;

  VAR_11 = FUNC_4(VAR_6, VAR_17, &VAR_14);
  if (VAR_11 < 0)
   return VAR_11;
 }

out:
 FUNC_9(VAR_6);

 return 0;
}
