
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct dwc3_trb {int ctrl; void* size; int bph; int bpl; } ;
struct dwc3_ep {size_t trb_enqueue; struct dwc3* dwc; } ;
struct dwc3 {struct dwc3_trb* ep0_trb; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dwc3_ep*,struct dwc3_trb*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dwc3_ep *VAR_5,
  dma_addr_t VAR_6, u32 VAR_7, u32 VAR_8, bool VAR_9)
{
 struct dwc3_trb *VAR_10;
 struct dwc3 *VAR_11;

 VAR_11 = VAR_5->dwc;
 VAR_10 = &VAR_11->ep0_trb[VAR_5->trb_enqueue];

 if (VAR_9)
  VAR_5->trb_enqueue++;

 VAR_10->bpl = FUNC_0(VAR_6);
 VAR_10->bph = FUNC_2(VAR_6);
 VAR_10->size = VAR_7;
 VAR_10->ctrl = VAR_8;

 VAR_10->ctrl |= (VAR_1
   | VAR_3);

 if (VAR_9)
  VAR_10->ctrl |= VAR_0;
 else
  VAR_10->ctrl |= (VAR_2
    | VAR_4);

 FUNC_1(VAR_5, VAR_10);
}
