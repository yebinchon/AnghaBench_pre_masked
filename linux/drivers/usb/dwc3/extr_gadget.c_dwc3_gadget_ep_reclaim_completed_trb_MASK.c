
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dwc3_trb {int ctrl; unsigned int size; } ;
struct TYPE_4__ {unsigned int frame_number; } ;
struct dwc3_request {unsigned int remaining; scalar_t__ needs_extra_trb; TYPE_2__ request; int num_trbs; } ;
struct dwc3_event_depevt {int status; } ;
struct TYPE_3__ {int desc; } ;
struct dwc3_ep {int interval; TYPE_1__ endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dwc3_ep*) ;
 int FUNC_2 (struct dwc3_ep*,struct dwc3_trb*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dwc3_ep *VAR_7,
  struct dwc3_request *VAR_8, struct dwc3_trb *VAR_9,
  const struct dwc3_event_depevt *VAR_10, int VAR_11, int VAR_12)
{
 unsigned int VAR_13;

 FUNC_1(VAR_7);

 FUNC_2(VAR_7, VAR_9);
 VAR_8->num_trbs--;
 if (VAR_12 && (VAR_9->ctrl & VAR_4))
  VAR_9->ctrl &= ~VAR_4;





 if (FUNC_3(VAR_7->endpoint.desc) &&
     (VAR_9->ctrl & VAR_2)) {
  unsigned int VAR_14;

  VAR_14 = FUNC_0(VAR_9->ctrl);
  VAR_14 &= ~(VAR_7->interval - 1);
  VAR_8->request.frame_number = VAR_14;
 }







 if (VAR_8->needs_extra_trb && !(VAR_9->ctrl & VAR_3)) {
  VAR_9->ctrl &= ~VAR_4;
  return 1;
 }

 VAR_13 = VAR_9->size & VAR_5;
 VAR_8->remaining += VAR_13;

 if ((VAR_9->ctrl & VAR_4) && VAR_11 != -VAR_6)
  return 1;

 if (VAR_10->status & VAR_1 && !VAR_12)
  return 1;

 if (VAR_10->status & VAR_0)
  return 1;

 return 0;
}
