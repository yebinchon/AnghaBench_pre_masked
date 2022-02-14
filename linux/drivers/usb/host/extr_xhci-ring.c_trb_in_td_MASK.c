
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_segment {scalar_t__ dma; union xhci_trb* trbs; struct xhci_segment* next; } ;
struct xhci_hcd {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xhci_segment*,union xhci_trb*) ;
 int FUNC_1 (struct xhci_hcd*,char*,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;

struct xhci_segment *FUNC_2(struct xhci_hcd *VAR_1,
  struct xhci_segment *VAR_2,
  union xhci_trb *VAR_3,
  union xhci_trb *VAR_4,
  dma_addr_t VAR_5,
  bool VAR_6)
{
 dma_addr_t VAR_7;
 dma_addr_t VAR_8;
 dma_addr_t VAR_9;
 struct xhci_segment *VAR_10;

 VAR_7 = FUNC_0(VAR_2, VAR_3);
 VAR_10 = VAR_2;

 do {
  if (VAR_7 == 0)
   return ((void*)0);

  VAR_8 = FUNC_0(VAR_10,
    &VAR_10->trbs[VAR_0 - 1]);

  VAR_9 = FUNC_0(VAR_10, VAR_4);

  if (VAR_6)
   FUNC_1(VAR_1,
    "Looking for event-dma %016llx trb-start %016llx trb-end %016llx seg-start %016llx seg-end %016llx\n",
    (unsigned long long)VAR_5,
    (unsigned long long)VAR_7,
    (unsigned long long)VAR_9,
    (unsigned long long)VAR_10->dma,
    (unsigned long long)VAR_8);

  if (VAR_9 > 0) {

   if (VAR_7 <= VAR_9) {
    if (VAR_5 >= VAR_7 && VAR_5 <= VAR_9)
     return VAR_10;
   } else {



    if ((VAR_5 >= VAR_7 &&
       VAR_5 <= VAR_8) ||
      (VAR_5 >= VAR_10->dma &&
       VAR_5 <= VAR_9))
     return VAR_10;
   }
   return ((void*)0);
  } else {

   if (VAR_5 >= VAR_7 && VAR_5 <= VAR_8)
    return VAR_10;
  }
  VAR_10 = VAR_10->next;
  VAR_7 = FUNC_0(VAR_10, &VAR_10->trbs[0]);
 } while (VAR_10 != VAR_2);

 return ((void*)0);
}
