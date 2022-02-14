
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int length; int dma; scalar_t__ zero; } ;
struct dwc3_request {int direction; int * trb; TYPE_2__ request; } ;
struct TYPE_3__ {int maxpacket; } ;
struct dwc3_ep {scalar_t__ number; int trb_enqueue; TYPE_1__ endpoint; } ;
struct dwc3 {int ep0_bounced; int * ep0_trb; int sysdev; int bounce_addr; int ep0_trb_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dwc3_ep*,int ,int,int ,int) ;
 int FUNC_3 (struct dwc3_ep*) ;
 int FUNC_4 (int ,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct dwc3 *VAR_1,
  struct dwc3_ep *VAR_2, struct dwc3_request *VAR_3)
{
 int VAR_4;

 VAR_3->direction = !!VAR_2->number;

 if (VAR_3->request.length == 0) {
  FUNC_2(VAR_2, VAR_1->ep0_trb_addr, 0,
    VAR_0, 0);
  VAR_4 = FUNC_3(VAR_2);
 } else if (!FUNC_0(VAR_3->request.length, VAR_2->endpoint.maxpacket)
   && (VAR_2->number == 0)) {
  u32 VAR_5;
  u32 VAR_6;

  VAR_4 = FUNC_4(VAR_1->sysdev,
    &VAR_3->request, VAR_2->number);
  if (VAR_4)
   return;

  VAR_5 = VAR_2->endpoint.maxpacket;
  VAR_6 = VAR_3->request.length % VAR_5;
  VAR_1->ep0_bounced = 1;


  FUNC_2(VAR_2, VAR_3->request.dma,
      VAR_3->request.length,
      VAR_0,
      1);

  VAR_3->trb = &VAR_1->ep0_trb[VAR_2->trb_enqueue - 1];


  FUNC_2(VAR_2, VAR_1->bounce_addr,
      VAR_5 - VAR_6,
      VAR_0,
      0);
  VAR_4 = FUNC_3(VAR_2);
 } else if (FUNC_0(VAR_3->request.length, VAR_2->endpoint.maxpacket) &&
     VAR_3->request.length && VAR_3->request.zero) {

  VAR_4 = FUNC_4(VAR_1->sysdev,
    &VAR_3->request, VAR_2->number);
  if (VAR_4)
   return;


  FUNC_2(VAR_2, VAR_3->request.dma,
      VAR_3->request.length,
      VAR_0,
      1);

  VAR_3->trb = &VAR_1->ep0_trb[VAR_2->trb_enqueue - 1];


  FUNC_2(VAR_2, VAR_1->bounce_addr,
      0, VAR_0,
      0);
  VAR_4 = FUNC_3(VAR_2);
 } else {
  VAR_4 = FUNC_4(VAR_1->sysdev,
    &VAR_3->request, VAR_2->number);
  if (VAR_4)
   return;

  FUNC_2(VAR_2, VAR_3->request.dma,
    VAR_3->request.length, VAR_0,
    0);

  VAR_3->trb = &VAR_1->ep0_trb[VAR_2->trb_enqueue];

  VAR_4 = FUNC_3(VAR_2);
 }

 FUNC_1(VAR_4 < 0);
}
