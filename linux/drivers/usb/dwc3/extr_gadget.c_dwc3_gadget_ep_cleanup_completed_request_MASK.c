
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; scalar_t__ actual; } ;
struct dwc3_request {int needs_extra_trb; scalar_t__ num_pending_sgs; scalar_t__ remaining; TYPE_1__ request; } ;
struct dwc3_event_depevt {int dummy; } ;
struct dwc3_ep {int dummy; } ;


 int FUNC_0 (struct dwc3_ep*) ;
 int FUNC_1 (struct dwc3_ep*,struct dwc3_request*,struct dwc3_event_depevt const*,int) ;
 int FUNC_2 (struct dwc3_ep*,struct dwc3_request*,struct dwc3_event_depevt const*,int) ;
 int FUNC_3 (struct dwc3_request*) ;
 int FUNC_4 (struct dwc3_ep*,struct dwc3_request*,int) ;

__attribute__((used)) static int FUNC_5(struct dwc3_ep *VAR_0,
  const struct dwc3_event_depevt *VAR_1,
  struct dwc3_request *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2->num_pending_sgs)
  VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_1,
    VAR_3);
 else
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_1,
    VAR_3);

 if (VAR_2->needs_extra_trb) {
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_1,
    VAR_3);
  VAR_2->needs_extra_trb = 0;
 }

 VAR_2->request.actual = VAR_2->request.length - VAR_2->remaining;

 if (!FUNC_3(VAR_2) &&
   VAR_2->num_pending_sgs) {
  FUNC_0(VAR_0);
  goto out;
 }

 FUNC_4(VAR_0, VAR_2, VAR_3);

out:
 return VAR_4;
}
