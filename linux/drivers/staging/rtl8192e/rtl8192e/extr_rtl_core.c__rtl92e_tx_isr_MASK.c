
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {int TxBuffAddr; scalar_t__ OWN; } ;
struct sk_buff {int len; } ;
struct rtl8192_tx_ring {size_t idx; int entries; int queue; struct tx_desc* desc; } ;
struct r8192_priv {int irq_tx_tasklet; int pdev; struct rtl8192_tx_ring* tx_ring; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2, int VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_3(VAR_2);

 struct rtl8192_tx_ring *VAR_5 = &VAR_4->tx_ring[VAR_3];

 while (FUNC_4(&VAR_5->queue)) {
  struct tx_desc *VAR_6 = &VAR_5->desc[VAR_5->idx];
  struct sk_buff *VAR_7;

  if (VAR_3 != VAR_0) {
   if (VAR_6->OWN)
    return;
   VAR_5->idx = (VAR_5->idx + 1) % VAR_5->entries;
  }

  VAR_7 = FUNC_0(&VAR_5->queue);
  FUNC_2(VAR_4->pdev, VAR_6->TxBuffAddr,
  VAR_7->len, VAR_1);

  FUNC_1(VAR_7);
 }
 if (VAR_3 != VAR_0)
  FUNC_5(&VAR_4->irq_tx_tasklet);
}
