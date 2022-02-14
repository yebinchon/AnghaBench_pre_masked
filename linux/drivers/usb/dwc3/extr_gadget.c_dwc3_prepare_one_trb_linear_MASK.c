
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dwc3_trb {int dummy; } ;
struct TYPE_4__ {unsigned int length; int no_interrupt; int short_not_ok; int stream_id; scalar_t__ zero; } ;
struct dwc3_request {int needs_extra_trb; TYPE_2__ request; int num_trbs; } ;
struct TYPE_3__ {int desc; } ;
struct dwc3_ep {size_t trb_enqueue; struct dwc3_trb* trb_pool; struct dwc3* dwc; TYPE_1__ endpoint; } ;
struct dwc3 {int bounce_addr; } ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct dwc3_ep*,struct dwc3_trb*,int ,unsigned int,int,int,int ,int ,int ) ;
 int FUNC_2 (struct dwc3_ep*,struct dwc3_request*,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct dwc3_ep *VAR_0,
  struct dwc3_request *VAR_1)
{
 unsigned int VAR_2 = VAR_1->request.length;
 unsigned int VAR_3 = FUNC_4(VAR_0->endpoint.desc);
 unsigned int VAR_4 = VAR_2 % VAR_3;

 if ((!VAR_2 || VAR_4) && FUNC_3(VAR_0->endpoint.desc)) {
  struct dwc3 *VAR_5 = VAR_0->dwc;
  struct dwc3_trb *VAR_6;

  VAR_1->needs_extra_trb = 1;


  FUNC_2(VAR_0, VAR_1, 1, 0);


  VAR_6 = &VAR_0->trb_pool[VAR_0->trb_enqueue];
  VAR_1->num_trbs++;
  FUNC_1(VAR_0, VAR_6, VAR_5->bounce_addr, VAR_3 - VAR_4,
    0, 1, VAR_1->request.stream_id,
    VAR_1->request.short_not_ok,
    VAR_1->request.no_interrupt);
 } else if (VAR_1->request.zero && VAR_1->request.length &&
     (FUNC_0(VAR_1->request.length, VAR_3))) {
  struct dwc3 *VAR_7 = VAR_0->dwc;
  struct dwc3_trb *VAR_8;

  VAR_1->needs_extra_trb = 1;


  FUNC_2(VAR_0, VAR_1, 1, 0);


  VAR_8 = &VAR_0->trb_pool[VAR_0->trb_enqueue];
  VAR_1->num_trbs++;
  FUNC_1(VAR_0, VAR_8, VAR_7->bounce_addr, 0,
    0, 1, VAR_1->request.stream_id,
    VAR_1->request.short_not_ok,
    VAR_1->request.no_interrupt);
 } else {
  FUNC_2(VAR_0, VAR_1, 0, 0);
 }
}
