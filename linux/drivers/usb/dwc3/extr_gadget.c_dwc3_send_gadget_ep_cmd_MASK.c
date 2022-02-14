
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_endpoint_descriptor {int dummy; } ;
struct dwc3_gadget_ep_cmd_params {int param0; int param1; int param2; } ;
struct TYPE_3__ {struct usb_endpoint_descriptor* desc; } ;
struct dwc3_ep {int flags; int regs; struct dwc3* dwc; TYPE_1__ endpoint; } ;
struct TYPE_4__ {scalar_t__ speed; } ;
struct dwc3 {scalar_t__ link_state; int regs; int dev; TYPE_2__ gadget; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (struct dwc3*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int,char*,int) ;
 int FUNC_6 (struct dwc3_ep*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct dwc3_ep*,unsigned int,struct dwc3_gadget_ep_cmd_params*,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct usb_endpoint_descriptor const*) ;

int FUNC_12(struct dwc3_ep *VAR_18, unsigned VAR_19,
  struct dwc3_gadget_ep_cmd_params *VAR_20)
{
 const struct usb_endpoint_descriptor *VAR_21 = VAR_18->endpoint.desc;
 struct dwc3 *VAR_22 = VAR_18->dwc;
 u32 VAR_23 = 1000;
 u32 VAR_24 = 0;
 u32 VAR_25;

 int VAR_26 = 0;
 int VAR_27 = -VAR_15;
 if (VAR_22->gadget.speed <= VAR_17) {
  VAR_25 = FUNC_7(VAR_22->regs, FUNC_2(0));
  if (FUNC_10(VAR_25 & VAR_10)) {
   VAR_24 |= VAR_10;
   VAR_25 &= ~VAR_10;
  }

  if (VAR_25 & VAR_9) {
   VAR_24 |= VAR_9;
   VAR_25 &= ~VAR_9;
  }

  if (VAR_24)
   FUNC_8(VAR_22->regs, FUNC_2(0), VAR_25);
 }

 if (FUNC_0(VAR_19) == VAR_6) {
  int VAR_28;

  VAR_28 = (VAR_22->link_state == VAR_11 ||
    VAR_22->link_state == VAR_12 ||
    VAR_22->link_state == VAR_13);

  if (FUNC_10(VAR_28)) {
   VAR_27 = FUNC_3(VAR_22);
   FUNC_5(VAR_22->dev, VAR_27, "wakeup failed --> %d\n",
     VAR_27);
  }
 }

 FUNC_8(VAR_18->regs, VAR_1, VAR_20->param0);
 FUNC_8(VAR_18->regs, VAR_2, VAR_20->param1);
 FUNC_8(VAR_18->regs, VAR_3, VAR_20->param2);
 if (FUNC_0(VAR_19) == VAR_7 &&
   !FUNC_11(VAR_21))
  VAR_19 &= ~(VAR_5 | VAR_4);
 else
  VAR_19 |= VAR_4;

 FUNC_8(VAR_18->regs, VAR_0, VAR_19);
 do {
  VAR_25 = FUNC_7(VAR_18->regs, VAR_0);
  if (!(VAR_25 & VAR_4)) {
   VAR_26 = FUNC_1(VAR_25);

   switch (VAR_26) {
   case 0:
    VAR_27 = 0;
    break;
   case 128:
    VAR_27 = -VAR_15;
    break;
   case 129:
    VAR_27 = -VAR_14;
    break;
   default:
    FUNC_4(VAR_22->dev, "UNKNOWN cmd status\n");
   }

   break;
  }
 } while (--VAR_23);

 if (VAR_23 == 0) {
  VAR_27 = -VAR_16;
  VAR_26 = -VAR_16;
 }

 FUNC_9(VAR_18, VAR_19, VAR_20, VAR_26);

 if (VAR_27 == 0 && FUNC_0(VAR_19) == VAR_6) {
  VAR_18->flags |= VAR_8;
  FUNC_6(VAR_18);
 }

 if (VAR_24) {
  VAR_25 = FUNC_7(VAR_22->regs, FUNC_2(0));
  VAR_25 |= VAR_24;
  FUNC_8(VAR_22->regs, FUNC_2(0), VAR_25);
 }

 return VAR_27;
}
