
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; scalar_t__ actual; } ;
struct dwc3_request {int list; int epnum; TYPE_1__ request; } ;
struct dwc3_ep {int flags; int pending_list; int number; struct dwc3* dwc; } ;
struct dwc3 {scalar_t__ ep0state; int delayed_status; unsigned int ep0_expect_in; int * eps; scalar_t__ three_stage_setup; int gadget; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dwc3*,int ,struct dwc3_request*) ;
 int FUNC_1 (struct dwc3*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct dwc3_ep *VAR_6,
  struct dwc3_request *VAR_7)
{
 struct dwc3 *VAR_8 = VAR_6->dwc;

 VAR_7->request.actual = 0;
 VAR_7->request.status = -VAR_2;
 VAR_7->epnum = VAR_6->number;

 FUNC_3(&VAR_7->list, &VAR_6->pending_list);
 if (VAR_6->flags & VAR_1) {
  unsigned VAR_9;

  VAR_9 = !!(VAR_6->flags & VAR_0);

  if (VAR_8->ep0state != VAR_3) {
   FUNC_2(VAR_8->dev, "Unexpected pending request\n");
   return 0;
  }

  FUNC_0(VAR_8, VAR_8->eps[VAR_9], VAR_7);

  VAR_6->flags &= ~(VAR_1 |
    VAR_0);

  return 0;
 }





 if (VAR_8->delayed_status) {
  unsigned VAR_10;

  VAR_10 = !VAR_8->ep0_expect_in;
  VAR_8->delayed_status = 0;
  FUNC_4(&VAR_8->gadget, VAR_5);

  if (VAR_8->ep0state == VAR_4)
   FUNC_1(VAR_8, VAR_8->eps[VAR_10]);

  return 0;
 }
 if (VAR_8->three_stage_setup) {
  unsigned VAR_11;

  VAR_11 = VAR_8->ep0_expect_in;
  VAR_8->ep0state = VAR_3;

  FUNC_0(VAR_8, VAR_8->eps[VAR_11], VAR_7);

  VAR_6->flags &= ~VAR_0;
 }

 return 0;
}
