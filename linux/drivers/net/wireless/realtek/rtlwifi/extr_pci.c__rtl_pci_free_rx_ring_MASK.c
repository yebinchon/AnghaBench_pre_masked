
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct rtl_priv {scalar_t__ use_new_trx_flow; } ;
struct rtl_pci {int rxringcount; TYPE_1__* rx_ring; int pdev; int rxbuffersize; } ;
struct ieee80211_hw {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int * desc; int dma; int * buffer_desc; struct sk_buff** rx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct rtl_pci* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_1, int VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_5(VAR_1);
 struct rtl_pci *VAR_4 = FUNC_3(FUNC_4(VAR_1));
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4->rxringcount; VAR_5++) {
  struct sk_buff *VAR_6 = VAR_4->rx_ring[VAR_2].rx_buf[VAR_5];

  if (!VAR_6)
   continue;
  FUNC_2(VAR_4->pdev, *((dma_addr_t *)VAR_6->cb),
     VAR_4->rxbuffersize, VAR_0);
  FUNC_0(VAR_6);
 }


 if (VAR_3->use_new_trx_flow) {
  FUNC_1(VAR_4->pdev,
        sizeof(*VAR_4->rx_ring[VAR_2].
        buffer_desc) * VAR_4->rxringcount,
        VAR_4->rx_ring[VAR_2].buffer_desc,
        VAR_4->rx_ring[VAR_2].dma);
  VAR_4->rx_ring[VAR_2].buffer_desc = ((void*)0);
 } else {
  FUNC_1(VAR_4->pdev,
        sizeof(*VAR_4->rx_ring[VAR_2].desc) *
        VAR_4->rxringcount,
        VAR_4->rx_ring[VAR_2].desc,
        VAR_4->rx_ring[VAR_2].dma);
  VAR_4->rx_ring[VAR_2].desc = ((void*)0);
 }
}
