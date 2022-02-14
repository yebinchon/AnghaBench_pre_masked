
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_td {struct xhci_segment* start_seg; } ;
struct xhci_segment {struct xhci_segment* next; } ;
struct xhci_ring {struct xhci_segment* first_seg; } ;



__attribute__((used)) static bool FUNC_0(struct xhci_td *VAR_0, struct xhci_ring *VAR_1)
{
 struct xhci_segment *VAR_2 = VAR_1->first_seg;

 if (!VAR_0 || !VAR_0->start_seg)
  return 0;
 do {
  if (VAR_2 == VAR_0->start_seg)
   return 1;
  VAR_2 = VAR_2->next;
 } while (VAR_2 && VAR_2 != VAR_1->first_seg);

 return 0;
}
