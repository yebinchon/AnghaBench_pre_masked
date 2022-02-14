
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dev {int dummy; } ;
struct mt76_wcid {int tx_info; } ;
struct ieee80211_tx_rate {int dummy; } ;
typedef int s8 ;
typedef int __le16 ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mt76x02_dev*,struct ieee80211_tx_rate const*,int *) ;
 int FUNC_2 (struct mt76x02_dev*,struct ieee80211_tx_rate const*) ;

void FUNC_3(struct mt76x02_dev *VAR_4, struct mt76_wcid *VAR_5,
          const struct ieee80211_tx_rate *VAR_6)
{
 s8 VAR_7 = FUNC_2(VAR_4, VAR_6);
 __le16 VAR_8;
 u32 VAR_9;
 s8 VAR_10;

 VAR_8 = FUNC_1(VAR_4, VAR_6, &VAR_10);
 VAR_9 = FUNC_0(VAR_1, VAR_8) |
    FUNC_0(VAR_0, VAR_10) |
    FUNC_0(VAR_3, VAR_7) |
    VAR_2;
 VAR_5->tx_info = VAR_9;
}
