
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
struct rtl_rx_desc {int dummy; } ;
struct rtl_rx_buffer_desc {int dummy; } ;
struct rtl_priv {TYPE_3__* cfg; scalar_t__ use_new_trx_flow; } ;
struct rtl_pci {int rxringcount; TYPE_1__* rx_ring; int pdev; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_desc ) (struct ieee80211_hw*,int*,int,int ,int*) ;} ;
struct TYPE_4__ {struct rtl_rx_desc* desc; scalar_t__ idx; int dma; struct rtl_rx_buffer_desc* buffer_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,int *,int*,int,int) ;
 void* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (char*) ;
 struct rtl_pci* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int*,int,int ,int*) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_2, int VAR_3)
{
 struct rtl_pci *VAR_4 = FUNC_3(FUNC_4(VAR_2));
 struct rtl_priv *VAR_5 = FUNC_5(VAR_2);
 int VAR_6;

 if (VAR_5->use_new_trx_flow) {
  struct rtl_rx_buffer_desc *VAR_7 = ((void*)0);

  VAR_4->rx_ring[VAR_3].buffer_desc =
      FUNC_1(VAR_4->pdev,
       sizeof(*VAR_4->rx_ring[VAR_3].
       buffer_desc) *
       VAR_4->rxringcount,
       &VAR_4->rx_ring[VAR_3].dma);
  if (!VAR_4->rx_ring[VAR_3].buffer_desc ||
      (ulong)VAR_4->rx_ring[VAR_3].buffer_desc & 0xFF) {
   FUNC_2("Cannot allocate RX ring\n");
   return -VAR_0;
  }


  VAR_4->rx_ring[VAR_3].idx = 0;
  for (VAR_6 = 0; VAR_6 < VAR_4->rxringcount; VAR_6++) {
   VAR_7 = &VAR_4->rx_ring[VAR_3].buffer_desc[VAR_6];
   if (!FUNC_0(VAR_2, ((void*)0), (u8 *)VAR_7,
            VAR_3, VAR_6))
    return -VAR_0;
  }
 } else {
  struct rtl_rx_desc *VAR_8 = ((void*)0);
  u8 VAR_9 = 1;

  VAR_4->rx_ring[VAR_3].desc =
      FUNC_1(VAR_4->pdev,
       sizeof(*VAR_4->rx_ring[VAR_3].
       desc) * VAR_4->rxringcount,
       &VAR_4->rx_ring[VAR_3].dma);
  if (!VAR_4->rx_ring[VAR_3].desc ||
      (unsigned long)VAR_4->rx_ring[VAR_3].desc & 0xFF) {
   FUNC_2("Cannot allocate RX ring\n");
   return -VAR_0;
  }


  VAR_4->rx_ring[VAR_3].idx = 0;

  for (VAR_6 = 0; VAR_6 < VAR_4->rxringcount; VAR_6++) {
   VAR_8 = &VAR_4->rx_ring[VAR_3].desc[VAR_6];
   if (!FUNC_0(VAR_2, ((void*)0), (u8 *)VAR_8,
            VAR_3, VAR_6))
    return -VAR_0;
  }

  VAR_5->cfg->ops->set_desc(VAR_2, (u8 *)VAR_8, 0,
         VAR_1, &VAR_9);
 }
 return 0;
}
