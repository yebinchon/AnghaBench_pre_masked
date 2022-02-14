
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_ring {int dequeue; int deq_seg; } ;
struct seq_file {scalar_t__ private; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct seq_file*,char*,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 dma_addr_t VAR_2;
 struct xhci_ring *VAR_3 = *(struct xhci_ring **)VAR_0->private;

 VAR_2 = FUNC_1(VAR_3->deq_seg, VAR_3->dequeue);
 FUNC_0(VAR_0, "%pad\n", &VAR_2);

 return 0;
}
