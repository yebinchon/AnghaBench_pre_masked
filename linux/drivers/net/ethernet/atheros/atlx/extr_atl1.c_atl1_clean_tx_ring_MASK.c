
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct atl1_tpd_ring {unsigned int count; unsigned long size; int next_to_clean; int next_to_use; struct atl1_buffer* desc; struct atl1_buffer* buffer_info; } ;
struct atl1_buffer {int * skb; scalar_t__ dma; int length; } ;
struct atl1_adapter {struct pci_dev* pdev; struct atl1_tpd_ring tpd_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct atl1_buffer*,int ,unsigned long) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct atl1_adapter *VAR_1)
{
 struct atl1_tpd_ring *VAR_2 = &VAR_1->tpd_ring;
 struct atl1_buffer *VAR_3;
 struct pci_dev *VAR_4 = VAR_1->pdev;
 unsigned long VAR_5;
 unsigned int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2->count; VAR_6++) {
  VAR_3 = &VAR_2->buffer_info[VAR_6];
  if (VAR_3->dma) {
   FUNC_3(VAR_4, VAR_3->dma,
    VAR_3->length, VAR_0);
   VAR_3->dma = 0;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->count; VAR_6++) {
  VAR_3 = &VAR_2->buffer_info[VAR_6];
  if (VAR_3->skb) {
   FUNC_1(VAR_3->skb);
   VAR_3->skb = ((void*)0);
  }
 }

 VAR_5 = sizeof(struct atl1_buffer) * VAR_2->count;
 FUNC_2(VAR_2->buffer_info, 0, VAR_5);


 FUNC_2(VAR_2->desc, 0, VAR_2->size);

 FUNC_0(&VAR_2->next_to_use, 0);
 FUNC_0(&VAR_2->next_to_clean, 0);
}
