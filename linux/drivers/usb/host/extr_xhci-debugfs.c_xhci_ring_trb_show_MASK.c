
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_segment {struct xhci_segment* next; } ;
struct xhci_ring {int num_segs; struct xhci_segment* first_seg; } ;
struct seq_file {scalar_t__ private; } ;


 int FUNC_0 (struct seq_file*,struct xhci_segment*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct xhci_ring *VAR_3 = *(struct xhci_ring **)VAR_0->private;
 struct xhci_segment *VAR_4 = VAR_3->first_seg;

 for (VAR_2 = 0; VAR_2 < VAR_3->num_segs; VAR_2++) {
  FUNC_0(VAR_0, VAR_4);
  VAR_4 = VAR_4->next;
 }

 return 0;
}
