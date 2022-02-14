
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtl_tx_desc {int dummy; } ;
struct rtl_tx_buffer_desc {int dummy; } ;
struct rtl_priv {TYPE_3__* cfg; scalar_t__ use_new_trx_flow; } ;
struct rtl_pci {TYPE_1__* tx_ring; int pdev; } ;
struct ieee80211_hw {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_desc ) (struct ieee80211_hw*,int *,int,int ,int *) ;} ;
struct TYPE_4__ {unsigned int entries; int queue; scalar_t__ idx; void* dma; struct rtl_tx_desc* desc; scalar_t__ cur_tx_wp; scalar_t__ cur_tx_rp; void* buffer_desc_dma; struct rtl_tx_buffer_desc* buffer_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,unsigned int,struct rtl_tx_desc*) ;
 void* FUNC_1 (int ,int,void**) ;
 int FUNC_2 (char*,unsigned int) ;
 struct rtl_pci* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ieee80211_hw*,int *,int,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_4,
     unsigned int VAR_5, unsigned int VAR_6)
{
 struct rtl_pci *VAR_7 = FUNC_3(FUNC_4(VAR_4));
 struct rtl_priv *VAR_8 = FUNC_5(VAR_4);
 struct rtl_tx_buffer_desc *VAR_9;
 struct rtl_tx_desc *VAR_10;
 dma_addr_t VAR_11, VAR_12;
 u32 VAR_13;
 int VAR_14;


 if (VAR_8->use_new_trx_flow) {
  VAR_9 =
     FUNC_1(VAR_7->pdev,
      sizeof(*VAR_9) * VAR_6,
      &VAR_11);

  if (!VAR_9 || (unsigned long)VAR_9 & 0xFF) {
   FUNC_2("Cannot allocate TX ring (prio = %d)\n",
          VAR_5);
   return -VAR_2;
  }

  VAR_7->tx_ring[VAR_5].buffer_desc = VAR_9;
  VAR_7->tx_ring[VAR_5].buffer_desc_dma = VAR_11;

  VAR_7->tx_ring[VAR_5].cur_tx_rp = 0;
  VAR_7->tx_ring[VAR_5].cur_tx_wp = 0;
 }


 VAR_10 = FUNC_1(VAR_7->pdev,
         sizeof(*VAR_10) * VAR_6, &VAR_12);

 if (!VAR_10 || (unsigned long)VAR_10 & 0xFF) {
  FUNC_2("Cannot allocate TX ring (prio = %d)\n", VAR_5);
  return -VAR_2;
 }

 VAR_7->tx_ring[VAR_5].desc = VAR_10;
 VAR_7->tx_ring[VAR_5].dma = VAR_12;

 VAR_7->tx_ring[VAR_5].idx = 0;
 VAR_7->tx_ring[VAR_5].entries = VAR_6;
 FUNC_6(&VAR_7->tx_ring[VAR_5].queue);

 FUNC_0(VAR_8, VAR_0, VAR_1, "queue:%d, ring_addr:%p\n",
   VAR_5, VAR_10);


 if (!VAR_8->use_new_trx_flow) {
  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
   VAR_13 = (u32)VAR_12 +
       ((VAR_14 + 1) % VAR_6) *
       sizeof(*VAR_10);

   VAR_8->cfg->ops->set_desc(VAR_4, (u8 *)&VAR_10[VAR_14],
          1,
          VAR_3,
          (u8 *)&VAR_13);
  }
 }
 return 0;
}
