
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc3_trb {int dummy; } ;
struct TYPE_2__ {unsigned int stream_id; unsigned int short_not_ok; unsigned int no_interrupt; scalar_t__ num_sgs; unsigned int length; int dma; } ;
struct dwc3_request {int num_trbs; int trb_dma; struct dwc3_trb* trb; TYPE_1__ request; int start_sg; } ;
struct dwc3_ep {size_t trb_enqueue; struct dwc3_trb* trb_pool; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct dwc3_ep*,struct dwc3_trb*,int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct dwc3_request*) ;
 int FUNC_2 (struct dwc3_ep*,struct dwc3_trb*) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct dwc3_ep *VAR_0,
  struct dwc3_request *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct dwc3_trb *VAR_4;
 unsigned int VAR_5;
 dma_addr_t VAR_6;
 unsigned VAR_7 = VAR_1->request.stream_id;
 unsigned VAR_8 = VAR_1->request.short_not_ok;
 unsigned VAR_9 = VAR_1->request.no_interrupt;

 if (VAR_1->request.num_sgs > 0) {
  VAR_5 = FUNC_4(VAR_1->start_sg);
  VAR_6 = FUNC_3(VAR_1->start_sg);
 } else {
  VAR_5 = VAR_1->request.length;
  VAR_6 = VAR_1->request.dma;
 }

 VAR_4 = &VAR_0->trb_pool[VAR_0->trb_enqueue];

 if (!VAR_1->trb) {
  FUNC_1(VAR_1);
  VAR_1->trb = VAR_4;
  VAR_1->trb_dma = FUNC_2(VAR_0, VAR_4);
 }

 VAR_1->num_trbs++;

 FUNC_0(VAR_0, VAR_4, VAR_6, VAR_5, VAR_2, VAR_3,
   VAR_7, VAR_8, VAR_9);
}
