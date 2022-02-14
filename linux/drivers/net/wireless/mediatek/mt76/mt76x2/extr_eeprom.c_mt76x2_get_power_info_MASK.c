
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mt76x2_tx_power_info {void* delta_bw80; void* delta_bw40; TYPE_1__* chain; int target_power; } ;
struct mt76x02_dev {int dummy; } ;
struct ieee80211_channel {scalar_t__ band; } ;
struct TYPE_2__ {int target_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct mt76x2_tx_power_info*,int ,int) ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct mt76x02_dev*,struct mt76x2_tx_power_info*,struct ieee80211_channel*,int,int ) ;
 int FUNC_5 (struct mt76x02_dev*,struct mt76x2_tx_power_info*,struct ieee80211_channel*,int,int ) ;
 scalar_t__ FUNC_6 (struct mt76x02_dev*) ;

void FUNC_7(struct mt76x02_dev *VAR_7,
      struct mt76x2_tx_power_info *VAR_8,
      struct ieee80211_channel *VAR_9)
{
 u16 VAR_10, VAR_11;

 FUNC_0(VAR_8, 0, sizeof(*VAR_8));

 VAR_10 = FUNC_1(VAR_7, VAR_4);
 VAR_11 = FUNC_1(VAR_7, VAR_5);

 if (VAR_9->band == VAR_6) {
  VAR_10 >>= 8;
  FUNC_5(VAR_7, VAR_8, VAR_9, 0,
      VAR_1);
  FUNC_5(VAR_7, VAR_8, VAR_9, 1,
      VAR_3);
 } else {
  FUNC_4(VAR_7, VAR_8, VAR_9, 0,
      VAR_0);
  FUNC_4(VAR_7, VAR_8, VAR_9, 1,
      VAR_2);
 }

 if (FUNC_6(VAR_7) ||
     !FUNC_2(VAR_8->target_power))
  VAR_8->target_power = VAR_8->chain[0].target_power;

 VAR_8->delta_bw40 = FUNC_3(VAR_10);
 VAR_8->delta_bw80 = FUNC_3(VAR_11);
}
