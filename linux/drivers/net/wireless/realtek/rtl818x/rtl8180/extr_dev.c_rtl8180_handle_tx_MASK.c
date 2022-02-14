
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; } ;
struct rtl8180_tx_ring {size_t idx; int entries; int queue; struct rtl8180_tx_desc* desc; } ;
struct rtl8180_tx_desc {int tx_buf; int flags; } ;
struct rtl8180_priv {int pdev; struct rtl8180_tx_ring* tx_ring; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ status; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_3__ {int count; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_tx_info*) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_4 (struct ieee80211_hw*,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_5, unsigned int VAR_6)
{
 struct rtl8180_priv *VAR_7 = VAR_5->priv;
 struct rtl8180_tx_ring *VAR_8 = &VAR_7->tx_ring[VAR_6];

 while (FUNC_7(&VAR_8->queue)) {
  struct rtl8180_tx_desc *VAR_9 = &VAR_8->desc[VAR_8->idx];
  struct sk_buff *VAR_10;
  struct ieee80211_tx_info *VAR_11;
  u32 VAR_12 = FUNC_5(VAR_9->flags);

  if (VAR_12 & VAR_3)
   return;

  VAR_8->idx = (VAR_8->idx + 1) % VAR_8->entries;
  VAR_10 = FUNC_1(&VAR_8->queue);
  FUNC_6(VAR_7->pdev, FUNC_5(VAR_9->tx_buf),
     VAR_10->len, VAR_2);

  VAR_11 = FUNC_0(VAR_10);
  FUNC_2(VAR_11);

  if (!(VAR_11->flags & VAR_0) &&
      (VAR_12 & VAR_4))
   VAR_11->flags |= VAR_1;

  VAR_11->status.rates[0].count = (VAR_12 & 0xFF) + 1;

  FUNC_3(VAR_5, VAR_10);
  if (VAR_8->entries - FUNC_7(&VAR_8->queue) == 2)
   FUNC_4(VAR_5, VAR_6);
 }
}
