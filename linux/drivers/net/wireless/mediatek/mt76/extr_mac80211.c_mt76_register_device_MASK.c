
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int flags; int available_antennas_rx; int available_antennas_tx; int features; } ;
struct mt76_txq {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_5ghz; scalar_t__ has_2ghz; } ;
struct mt76_dev {struct ieee80211_hw* hw; TYPE_1__ cap; int antenna_mask; int macaddr; int dev; int txwi_cache; } ;
struct ieee80211_rate {int dummy; } ;
struct ieee80211_hw {int txq_data_size; int max_tx_fragments; struct wiphy* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int ,struct mt76_dev*) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct mt76_dev*,int ) ;
 int FUNC_8 (struct mt76_dev*,struct ieee80211_rate*,int) ;
 int FUNC_9 (struct mt76_dev*,struct ieee80211_rate*,int,int) ;
 int FUNC_10 (struct mt76_dev*) ;
 int FUNC_11 (struct wiphy*,int ) ;
 int FUNC_12 (struct wiphy*) ;

int FUNC_13(struct mt76_dev *VAR_20, bool VAR_21,
    struct ieee80211_rate *VAR_22, int VAR_23)
{
 struct ieee80211_hw *VAR_24 = VAR_20->hw;
 struct wiphy *VAR_25 = VAR_24->wiphy;
 int VAR_26;

 FUNC_4(VAR_20->dev, VAR_20);

 FUNC_0(&VAR_20->txwi_cache);

 FUNC_2(VAR_24, VAR_20->dev);
 FUNC_3(VAR_24, VAR_20->macaddr);

 VAR_25->features |= VAR_9;

 FUNC_11(VAR_25, VAR_8);

 VAR_25->available_antennas_tx = VAR_20->antenna_mask;
 VAR_25->available_antennas_rx = VAR_20->antenna_mask;

 VAR_24->txq_data_size = sizeof(struct mt76_txq);
 VAR_24->max_tx_fragments = 16;

 FUNC_5(VAR_24, VAR_12);
 FUNC_5(VAR_24, VAR_10);
 FUNC_5(VAR_24, VAR_3);
 FUNC_5(VAR_24, VAR_0);
 FUNC_5(VAR_24, VAR_15);
 FUNC_5(VAR_24, VAR_16);
 FUNC_5(VAR_24, VAR_14);
 FUNC_5(VAR_24, VAR_13);
 FUNC_5(VAR_24, VAR_17);
 FUNC_5(VAR_24, VAR_18);
 FUNC_5(VAR_24, VAR_4);
 FUNC_5(VAR_24, VAR_1);
 FUNC_5(VAR_24, VAR_11);
 FUNC_5(VAR_24, VAR_5);

 VAR_25->flags |= VAR_19;

 if (VAR_20->cap.has_2ghz) {
  VAR_26 = FUNC_8(VAR_20, VAR_22, VAR_23);
  if (VAR_26)
   return VAR_26;
 }

 if (VAR_20->cap.has_5ghz) {
  VAR_26 = FUNC_9(VAR_20, VAR_22 + 4, VAR_23 - 4, VAR_21);
  if (VAR_26)
   return VAR_26;
 }

 FUNC_12(VAR_20->hw->wiphy);
 FUNC_7(VAR_20, VAR_6);
 FUNC_7(VAR_20, VAR_7);

 if (FUNC_1(VAR_2)) {
  VAR_26 = FUNC_10(VAR_20);
  if (VAR_26)
   return VAR_26;
 }

 return FUNC_6(VAR_24);
}
