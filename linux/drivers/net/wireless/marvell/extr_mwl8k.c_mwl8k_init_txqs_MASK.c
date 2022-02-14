
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl8k_priv {scalar_t__* txq_offset; scalar_t__ sram; TYPE_1__* txq; scalar_t__ ap_fw; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
struct TYPE_2__ {int txd_dma; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct mwl8k_priv*) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct mwl8k_priv *VAR_1 = VAR_0->priv;
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1); VAR_3++) {
  VAR_2 = FUNC_2(VAR_0, VAR_3);
  if (VAR_2)
   break;
  if (VAR_1->ap_fw)
   FUNC_0(VAR_1->txq[VAR_3].txd_dma,
      VAR_1->sram + VAR_1->txq_offset[VAR_3]);
 }
 return VAR_2;
}
