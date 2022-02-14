
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct atl1e_tx_ring {size_t count; int next_to_clean; struct atl1e_tx_buffer* tx_buffer; } ;
struct atl1e_tx_buffer {int flags; int * skb; scalar_t__ dma; int length; } ;
struct atl1e_adapter {int netdev; int pdev; int hw; struct atl1e_tx_ring tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,int ,int ) ;
 int FUNC_8 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static bool FUNC_9(struct atl1e_adapter *VAR_4)
{
 struct atl1e_tx_ring *VAR_5 = &VAR_4->tx_ring;
 struct atl1e_tx_buffer *VAR_6 = ((void*)0);
 u16 VAR_7 = FUNC_0(&VAR_4->hw, VAR_3);
 u16 VAR_8 = FUNC_1(&VAR_5->next_to_clean);

 while (VAR_8 != VAR_7) {
  VAR_6 = &VAR_5->tx_buffer[VAR_8];
  if (VAR_6->dma) {
   if (VAR_6->flags & VAR_1)
    FUNC_8(VAR_4->pdev, VAR_6->dma,
     VAR_6->length, VAR_2);
   else if (VAR_6->flags & VAR_0)
    FUNC_7(VAR_4->pdev, VAR_6->dma,
     VAR_6->length, VAR_2);
   VAR_6->dma = 0;
  }

  if (VAR_6->skb) {
   FUNC_3(VAR_6->skb);
   VAR_6->skb = ((void*)0);
  }

  if (++VAR_8 == VAR_5->count)
   VAR_8 = 0;
 }

 FUNC_2(&VAR_5->next_to_clean, VAR_8);

 if (FUNC_5(VAR_4->netdev) &&
   FUNC_4(VAR_4->netdev)) {
  FUNC_6(VAR_4->netdev);
 }

 return 1;
}
