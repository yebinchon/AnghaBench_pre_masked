
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; } ;
struct rtl_rx_desc {int dummy; } ;
struct TYPE_8__ {int irq_th_lock; } ;
struct rtl_priv {TYPE_4__ locks; scalar_t__ use_new_trx_flow; TYPE_3__* cfg; } ;
struct rtl_pci {int rxringcount; int* txringcount; struct rtl8192_tx_ring* tx_ring; int pdev; TYPE_1__* rx_ring; int rxbuffersize; } ;
struct rtl8192_tx_ring {size_t idx; int entries; scalar_t__ cur_tx_wp; scalar_t__ cur_tx_rp; int * desc; int * buffer_desc; int queue; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_7__ {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* get_desc ) (struct ieee80211_hw*,int*,int,int ) ;int (* set_desc ) (struct ieee80211_hw*,int*,int,int ,int*) ;} ;
struct TYPE_5__ {scalar_t__ idx; struct rtl_rx_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct rtl_pci* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct ieee80211_hw*,int*,int,int ) ;
 int FUNC_11 (struct ieee80211_hw*,int*,int,int ,int*) ;
 int FUNC_12 (struct ieee80211_hw*,int*,int,int ,int*) ;
 int FUNC_13 (struct ieee80211_hw*,int*,int,int ,int*) ;
 int FUNC_14 (struct ieee80211_hw*,int*,int,int ,int*) ;
 int FUNC_15 (struct ieee80211_hw*,int*,int,int ,int*) ;
 int FUNC_16 (struct ieee80211_hw*,int*,int,int ) ;

int FUNC_17(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_6(VAR_9);
 struct rtl_pci *VAR_11 = FUNC_4(FUNC_5(VAR_9));
 int VAR_12, VAR_13;
 unsigned long VAR_14;
 u8 VAR_15 = 1;
 u32 VAR_16;


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {




  if (!VAR_10->use_new_trx_flow &&
      VAR_11->rx_ring[VAR_13].desc) {
   struct rtl_rx_desc *VAR_17 = ((void*)0);

   VAR_11->rx_ring[VAR_13].idx = 0;
   for (VAR_12 = 0; VAR_12 < VAR_11->rxringcount; VAR_12++) {
    VAR_17 = &VAR_11->rx_ring[VAR_13].desc[VAR_12];
    VAR_16 =
      VAR_10->cfg->ops->get_desc(VAR_9, (u8 *)VAR_17,
      0, VAR_0);
    FUNC_2((u8 *)VAR_17, 0,
           sizeof(*VAR_11->rx_ring
           [VAR_13].desc));
    if (VAR_10->use_new_trx_flow) {
     VAR_10->cfg->ops->set_desc(VAR_9,
         (u8 *)VAR_17, 0,
         VAR_4,
         (u8 *)&VAR_16);
    } else {
     VAR_10->cfg->ops->set_desc(VAR_9,
         (u8 *)VAR_17, 0,
         VAR_0,
         (u8 *)&VAR_16);
     VAR_10->cfg->ops->set_desc(VAR_9,
         (u8 *)VAR_17, 0,
         VAR_3,
         (u8 *)&VAR_11->rxbuffersize);
     VAR_10->cfg->ops->set_desc(VAR_9,
         (u8 *)VAR_17, 0,
         VAR_2,
         (u8 *)&VAR_15);
    }
   }
   VAR_10->cfg->ops->set_desc(VAR_9, (u8 *)VAR_17, 0,
         VAR_1, (u8 *)&VAR_15);
  }
  VAR_11->rx_ring[VAR_13].idx = 0;
 }




 FUNC_8(&VAR_10->locks.irq_th_lock, VAR_14);
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  if (VAR_11->tx_ring[VAR_12].desc ||
      VAR_11->tx_ring[VAR_12].buffer_desc) {
   struct rtl8192_tx_ring *VAR_18 = &VAR_11->tx_ring[VAR_12];

   while (FUNC_7(&VAR_18->queue)) {
    u8 *VAR_19;
    struct sk_buff *VAR_20 =
     FUNC_0(&VAR_18->queue);
    if (VAR_10->use_new_trx_flow)
     VAR_19 = (u8 *)(&VAR_18->buffer_desc
        [VAR_18->idx]);
    else
     VAR_19 = (u8 *)(&VAR_18->desc[VAR_18->idx]);

    FUNC_3(VAR_11->pdev,
       VAR_10->cfg->ops->
        get_desc(VAR_9, (u8 *)
        VAR_19,
        1,
        VAR_5),
       VAR_20->len, VAR_6);
    FUNC_1(VAR_20);
    VAR_18->idx = (VAR_18->idx + 1) % VAR_18->entries;
   }

   if (VAR_10->use_new_trx_flow) {
    VAR_11->tx_ring[VAR_12].cur_tx_rp = 0;
    VAR_11->tx_ring[VAR_12].cur_tx_wp = 0;
   }

   VAR_18->idx = 0;
   VAR_18->entries = VAR_11->txringcount[VAR_12];
  }
 }
 FUNC_9(&VAR_10->locks.irq_th_lock, VAR_14);

 return 0;
}
