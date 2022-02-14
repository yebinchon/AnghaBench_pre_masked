
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; } ;
struct rtl_priv {scalar_t__ use_new_trx_flow; TYPE_2__* cfg; } ;
struct rtl_pci {int pdev; struct rtl8192_tx_ring* tx_ring; } ;
struct rtl8192_tx_ring {size_t idx; int entries; int * buffer_desc; int buffer_desc_dma; int * desc; int dma; int queue; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_desc ) (struct ieee80211_hw*,int *,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct rtl_pci* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct ieee80211_hw*,int *,int,int ) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_2,
      unsigned int VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_6(VAR_2);
 struct rtl_pci *VAR_5 = FUNC_4(FUNC_5(VAR_2));
 struct rtl8192_tx_ring *VAR_6 = &VAR_5->tx_ring[VAR_3];


 while (FUNC_7(&VAR_6->queue)) {
  u8 *VAR_7;
  struct sk_buff *VAR_8 = FUNC_0(&VAR_6->queue);

  if (VAR_4->use_new_trx_flow)
   VAR_7 = (u8 *)(&VAR_6->buffer_desc[VAR_6->idx]);
  else
   VAR_7 = (u8 *)(&VAR_6->desc[VAR_6->idx]);

  FUNC_3(VAR_5->pdev,
     VAR_4->cfg->ops->get_desc(VAR_2, (u8 *)VAR_7,
         1,
         VAR_0),
     VAR_8->len, VAR_1);
  FUNC_1(VAR_8);
  VAR_6->idx = (VAR_6->idx + 1) % VAR_6->entries;
 }


 FUNC_2(VAR_5->pdev,
       sizeof(*VAR_6->desc) * VAR_6->entries,
       VAR_6->desc, VAR_6->dma);
 VAR_6->desc = ((void*)0);
 if (VAR_4->use_new_trx_flow) {
  FUNC_2(VAR_5->pdev,
        sizeof(*VAR_6->buffer_desc) * VAR_6->entries,
        VAR_6->buffer_desc, VAR_6->buffer_desc_dma);
  VAR_6->buffer_desc = ((void*)0);
 }
}
