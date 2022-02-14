
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dwc3_trb {int ctrl; } ;
struct dwc3_ep {scalar_t__ trb_enqueue; scalar_t__ trb_dequeue; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dwc3_trb* FUNC_0 (struct dwc3_ep*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct dwc3_ep *VAR_2)
{
 struct dwc3_trb *VAR_3;
 u8 VAR_4;
 if (VAR_2->trb_enqueue == VAR_2->trb_dequeue) {
  VAR_3 = FUNC_0(VAR_2, VAR_2->trb_enqueue);
  if (VAR_3->ctrl & VAR_0)
   return 0;

  return VAR_1 - 1;
 }

 VAR_4 = VAR_2->trb_dequeue - VAR_2->trb_enqueue;
 VAR_4 &= (VAR_1 - 1);

 if (VAR_2->trb_dequeue < VAR_2->trb_enqueue)
  VAR_4--;

 return VAR_4;
}
