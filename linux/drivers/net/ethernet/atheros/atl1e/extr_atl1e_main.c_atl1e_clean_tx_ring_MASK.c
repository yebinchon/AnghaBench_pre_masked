
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct pci_dev {int dummy; } ;
struct atl1e_tx_ring {size_t count; struct atl1e_tx_buffer* tx_buffer; struct atl1e_tx_buffer* desc; } ;
struct atl1e_tx_buffer {int flags; int * skb; scalar_t__ dma; int length; } ;
struct atl1e_tpd_desc {int dummy; } ;
struct atl1e_adapter {struct pci_dev* pdev; struct atl1e_tx_ring tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct atl1e_tx_buffer*,int ,int) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct atl1e_adapter *VAR_3)
{
 struct atl1e_tx_ring *VAR_4 = &VAR_3->tx_ring;
 struct atl1e_tx_buffer *VAR_5 = ((void*)0);
 struct pci_dev *VAR_6 = VAR_3->pdev;
 u16 VAR_7, VAR_8;

 if (VAR_4->desc == ((void*)0) || VAR_4->tx_buffer == ((void*)0))
  return;

 VAR_8 = VAR_4->count;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_5 = &VAR_4->tx_buffer[VAR_7];
  if (VAR_5->dma) {
   if (VAR_5->flags & VAR_1)
    FUNC_3(VAR_6, VAR_5->dma,
     VAR_5->length, VAR_2);
   else if (VAR_5->flags & VAR_0)
    FUNC_2(VAR_6, VAR_5->dma,
     VAR_5->length, VAR_2);
   VAR_5->dma = 0;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_5 = &VAR_4->tx_buffer[VAR_7];
  if (VAR_5->skb) {
   FUNC_0(VAR_5->skb);
   VAR_5->skb = ((void*)0);
  }
 }

 FUNC_1(VAR_4->desc, 0, sizeof(struct atl1e_tpd_desc) *
    VAR_8);
 FUNC_1(VAR_4->tx_buffer, 0, sizeof(struct atl1e_tx_buffer) *
    VAR_8);
}
