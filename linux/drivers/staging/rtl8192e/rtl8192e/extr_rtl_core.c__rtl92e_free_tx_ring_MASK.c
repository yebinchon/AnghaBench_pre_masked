
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {int TxBuffAddr; } ;
struct sk_buff {int len; } ;
struct rtl8192_tx_ring {size_t idx; int entries; struct tx_desc* desc; int dma; int queue; } ;
struct r8192_priv {int pdev; struct rtl8192_tx_ring* tx_ring; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int,struct tx_desc*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct r8192_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1, unsigned int VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_4(VAR_1);
 struct rtl8192_tx_ring *VAR_4 = &VAR_3->tx_ring[VAR_2];

 while (FUNC_5(&VAR_4->queue)) {
  struct tx_desc *VAR_5 = &VAR_4->desc[VAR_4->idx];
  struct sk_buff *VAR_6 = FUNC_0(&VAR_4->queue);

  FUNC_3(VAR_3->pdev, VAR_5->TxBuffAddr,
   VAR_6->len, VAR_0);
  FUNC_1(VAR_6);
  VAR_4->idx = (VAR_4->idx + 1) % VAR_4->entries;
 }

 FUNC_2(VAR_3->pdev, sizeof(*VAR_4->desc) * VAR_4->entries,
 VAR_4->desc, VAR_4->dma);
 VAR_4->desc = ((void*)0);
}
