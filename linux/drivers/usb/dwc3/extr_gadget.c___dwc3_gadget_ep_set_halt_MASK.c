
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc3_trb {unsigned int ctrl; } ;
struct dwc3_gadget_ep_cmd_params {int dummy; } ;
struct TYPE_2__ {int desc; } ;
struct dwc3_ep {int number; size_t trb_enqueue; int flags; int name; scalar_t__ direction; int started_list; TYPE_1__ endpoint; struct dwc3* dwc; } ;
struct dwc3 {int dev; struct dwc3_trb* ep0_trb; } ;
typedef int params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 struct dwc3_trb* FUNC_1 (struct dwc3_ep*,size_t) ;
 int FUNC_2 (struct dwc3_ep*) ;
 int FUNC_3 (struct dwc3_ep*,int ,struct dwc3_gadget_ep_cmd_params*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dwc3_gadget_ep_cmd_params*,int,int) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct dwc3_ep *VAR_6, int VAR_7, int VAR_8)
{
 struct dwc3_gadget_ep_cmd_params VAR_9;
 struct dwc3 *VAR_10 = VAR_6->dwc;
 int VAR_11;

 if (FUNC_6(VAR_6->endpoint.desc)) {
  FUNC_0(VAR_10->dev, "%s is of Isochronous type\n", VAR_6->name);
  return -VAR_5;
 }

 FUNC_5(&VAR_9, 0x00, sizeof(VAR_9));

 if (VAR_7) {
  struct dwc3_trb *VAR_12;

  unsigned VAR_13;
  unsigned VAR_14;

  if (VAR_6->number > 1)
   VAR_12 = FUNC_1(VAR_6, VAR_6->trb_enqueue);
  else
   VAR_12 = &VAR_10->ep0_trb[VAR_6->trb_enqueue];

  VAR_13 = VAR_12->ctrl & VAR_3;
  VAR_14 = !FUNC_4(&VAR_6->started_list);

  if (!VAR_8 && ((VAR_6->direction && VAR_13) ||
    (!VAR_6->direction && VAR_14))) {
   return -VAR_4;
  }

  VAR_11 = FUNC_3(VAR_6, VAR_0,
    &VAR_9);
  if (VAR_11)
   FUNC_0(VAR_10->dev, "failed to set STALL on %s\n",
     VAR_6->name);
  else
   VAR_6->flags |= VAR_1;
 } else {

  VAR_11 = FUNC_2(VAR_6);
  if (VAR_11)
   FUNC_0(VAR_10->dev, "failed to clear STALL on %s\n",
     VAR_6->name);
  else
   VAR_6->flags &= ~(VAR_1 | VAR_2);
 }

 return VAR_11;
}
