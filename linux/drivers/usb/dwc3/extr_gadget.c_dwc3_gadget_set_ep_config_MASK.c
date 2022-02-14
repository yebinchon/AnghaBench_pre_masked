
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct usb_ss_ep_comp_descriptor {int dummy; } ;
struct usb_endpoint_descriptor {int bInterval; } ;
struct dwc3_gadget_ep_cmd_params {int param0; int param1; int param2; } ;
struct TYPE_4__ {scalar_t__ maxburst; struct usb_endpoint_descriptor* desc; struct usb_ss_ep_comp_descriptor* comp_desc; } ;
struct dwc3_ep {int number; int stream_capable; int interval; scalar_t__ direction; int saved_state; TYPE_2__ endpoint; struct dwc3* dwc; } ;
struct TYPE_3__ {scalar_t__ speed; } ;
struct dwc3 {TYPE_1__ gadget; } ;
typedef int params ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct dwc3_ep*,int ,struct dwc3_gadget_ep_cmd_params*) ;
 int FUNC_7 (struct dwc3_gadget_ep_cmd_params*,int,int) ;
 int FUNC_8 (struct usb_endpoint_descriptor const*) ;
 int FUNC_9 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_10 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_11 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_12 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_13 (struct usb_ss_ep_comp_descriptor const*) ;

__attribute__((used)) static int FUNC_14(struct dwc3_ep *VAR_8, unsigned int VAR_9)
{
 const struct usb_ss_ep_comp_descriptor *VAR_10;
 const struct usb_endpoint_descriptor *VAR_11;
 struct dwc3_gadget_ep_cmd_params VAR_12;
 struct dwc3 *VAR_13 = VAR_8->dwc;

 VAR_10 = VAR_8->endpoint.comp_desc;
 VAR_11 = VAR_8->endpoint.desc;

 FUNC_7(&VAR_12, 0x00, sizeof(VAR_12));

 VAR_12.param0 = FUNC_3(FUNC_9(VAR_11))
  | FUNC_5(FUNC_8(VAR_11));


 if (VAR_13->gadget.speed >= VAR_7) {
  u32 VAR_14 = VAR_8->endpoint.maxburst;
  VAR_12.param0 |= FUNC_1(VAR_14 - 1);
 }

 VAR_12.param0 |= VAR_9;
 if (VAR_9 == VAR_0)
  VAR_12.param2 |= VAR_8->saved_state;

 if (FUNC_11(VAR_11))
  VAR_12.param1 = VAR_3;

 if (VAR_8->number <= 1 || FUNC_12(VAR_11))
  VAR_12.param1 |= VAR_5;

 if (FUNC_13(VAR_10) && FUNC_10(VAR_11)) {
  VAR_12.param1 |= VAR_1
   | VAR_2;
  VAR_8->stream_capable = 1;
 }

 if (!FUNC_11(VAR_11))
  VAR_12.param1 |= VAR_4;







 VAR_12.param1 |= FUNC_2(VAR_8->number);





 if (VAR_8->direction)
  VAR_12.param0 |= FUNC_4(VAR_8->number >> 1);

 if (VAR_11->bInterval) {
  VAR_12.param1 |= FUNC_0(VAR_11->bInterval - 1);
  VAR_8->interval = 1 << (VAR_11->bInterval - 1);
 }

 return FUNC_6(VAR_8, VAR_6, &VAR_12);
}
