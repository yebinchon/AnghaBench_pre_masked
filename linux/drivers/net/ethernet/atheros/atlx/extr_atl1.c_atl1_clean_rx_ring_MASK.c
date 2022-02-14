
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct atl1_rrd_ring {int next_to_clean; scalar_t__ next_to_use; } ;
struct atl1_rfd_ring {unsigned int count; unsigned long size; int next_to_use; scalar_t__ next_to_clean; struct atl1_buffer* desc; struct atl1_buffer* buffer_info; } ;
struct atl1_buffer {int * skb; scalar_t__ dma; int length; } ;
struct atl1_adapter {struct pci_dev* pdev; struct atl1_rrd_ring rrd_ring; struct atl1_rfd_ring rfd_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct atl1_buffer*,int ,unsigned long) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct atl1_adapter *VAR_1)
{
 struct atl1_rfd_ring *VAR_2 = &VAR_1->rfd_ring;
 struct atl1_rrd_ring *VAR_3 = &VAR_1->rrd_ring;
 struct atl1_buffer *VAR_4;
 struct pci_dev *VAR_5 = VAR_1->pdev;
 unsigned long VAR_6;
 unsigned int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_2->count; VAR_7++) {
  VAR_4 = &VAR_2->buffer_info[VAR_7];
  if (VAR_4->dma) {
   FUNC_3(VAR_5, VAR_4->dma,
    VAR_4->length, VAR_0);
   VAR_4->dma = 0;
  }
  if (VAR_4->skb) {
   FUNC_1(VAR_4->skb);
   VAR_4->skb = ((void*)0);
  }
 }

 VAR_6 = sizeof(struct atl1_buffer) * VAR_2->count;
 FUNC_2(VAR_2->buffer_info, 0, VAR_6);


 FUNC_2(VAR_2->desc, 0, VAR_2->size);

 VAR_2->next_to_clean = 0;
 FUNC_0(&VAR_2->next_to_use, 0);

 VAR_3->next_to_use = 0;
 FUNC_0(&VAR_3->next_to_clean, 0);
}
