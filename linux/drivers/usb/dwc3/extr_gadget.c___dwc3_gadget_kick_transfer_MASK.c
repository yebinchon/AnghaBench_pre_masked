
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dwc3_trb {int dummy; } ;
struct TYPE_3__ {int stream_id; } ;
struct dwc3_request {struct dwc3_gadget_ep_cmd_params* trb; TYPE_1__ request; int trb_dma; } ;
struct dwc3_gadget_ep_cmd_params {int param1; int param0; } ;
struct TYPE_4__ {int desc; } ;
struct dwc3_ep {int flags; int resource_index; int frame_number; TYPE_2__ endpoint; scalar_t__ stream_capable; int started_list; } ;
typedef int params ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dwc3_ep*) ;
 int FUNC_2 (struct dwc3_ep*,struct dwc3_request*,int) ;
 int FUNC_3 (struct dwc3_ep*) ;
 int FUNC_4 (struct dwc3_ep*,int,struct dwc3_gadget_ep_cmd_params*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dwc3_gadget_ep_cmd_params*,int ,int) ;
 struct dwc3_request* FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct dwc3_ep *VAR_4)
{
 struct dwc3_gadget_ep_cmd_params VAR_5;
 struct dwc3_request *VAR_6;
 int VAR_7;
 int VAR_8;
 u32 VAR_9;

 if (!FUNC_1(VAR_4))
  return 0;

 VAR_7 = !(VAR_4->flags & VAR_3);

 FUNC_3(VAR_4);
 VAR_6 = FUNC_7(&VAR_4->started_list);
 if (!VAR_6) {
  VAR_4->flags |= VAR_2;
  return 0;
 }

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));

 if (VAR_7) {
  VAR_5.param0 = FUNC_8(VAR_6->trb_dma);
  VAR_5.param1 = FUNC_5(VAR_6->trb_dma);
  VAR_9 = VAR_0;

  if (VAR_4->stream_capable)
   VAR_9 |= FUNC_0(VAR_6->request.stream_id);

  if (FUNC_9(VAR_4->endpoint.desc))
   VAR_9 |= FUNC_0(VAR_4->frame_number);
 } else {
  VAR_9 = VAR_1 |
   FUNC_0(VAR_4->resource_index);
 }

 VAR_8 = FUNC_4(VAR_4, VAR_9, &VAR_5);
 if (VAR_8 < 0) {





  if (VAR_6->trb)
   FUNC_6(VAR_6->trb, 0, sizeof(struct dwc3_trb));
  FUNC_2(VAR_4, VAR_6, VAR_8);
  return VAR_8;
 }

 return 0;
}
