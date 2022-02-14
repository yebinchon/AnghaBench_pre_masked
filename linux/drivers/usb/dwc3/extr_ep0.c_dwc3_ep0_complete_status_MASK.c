
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dwc3_trb {int size; } ;
struct dwc3_request {int dummy; } ;
struct dwc3_event_depevt {int dummy; } ;
struct dwc3_ep {int pending_list; } ;
struct dwc3 {int setup_packet_pending; int ep0state; int test_mode_nr; int dev; scalar_t__ test_mode; struct dwc3_trb* ep0_trb; struct dwc3_ep** eps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct dwc3*) ;
 int FUNC_3 (struct dwc3*) ;
 int FUNC_4 (struct dwc3_ep*,struct dwc3_request*,int ) ;
 int FUNC_5 (struct dwc3*,int ) ;
 int FUNC_6 (int *) ;
 struct dwc3_request* FUNC_7 (int *) ;
 int FUNC_8 (struct dwc3_ep*,struct dwc3_trb*) ;

__attribute__((used)) static void FUNC_9(struct dwc3 *VAR_2,
  const struct dwc3_event_depevt *VAR_3)
{
 struct dwc3_request *VAR_4;
 struct dwc3_ep *VAR_5;
 struct dwc3_trb *VAR_6;
 u32 VAR_7;

 VAR_5 = VAR_2->eps[0];
 VAR_6 = VAR_2->ep0_trb;

 FUNC_8(VAR_5, VAR_6);

 if (!FUNC_6(&VAR_5->pending_list)) {
  VAR_4 = FUNC_7(&VAR_5->pending_list);

  FUNC_4(VAR_5, VAR_4, 0);
 }

 if (VAR_2->test_mode) {
  int VAR_8;

  VAR_8 = FUNC_5(VAR_2, VAR_2->test_mode_nr);
  if (VAR_8 < 0) {
   FUNC_1(VAR_2->dev, "invalid test #%d\n",
     VAR_2->test_mode_nr);
   FUNC_3(VAR_2);
   return;
  }
 }

 VAR_7 = FUNC_0(VAR_6->size);
 if (VAR_7 == VAR_0)
  VAR_2->setup_packet_pending = 1;

 VAR_2->ep0state = VAR_1;
 FUNC_2(VAR_2);
}
