
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct mt76x2_tx_power_info {int target_power; TYPE_1__* chain; } ;
struct mt76x02_dev {int dummy; } ;
struct ieee80211_channel {int hw_value; } ;
typedef enum mt76x2_cal_channel_group { ____Placeholder_mt76x2_cal_channel_group } mt76x2_cal_channel_group ;
typedef int data ;
struct TYPE_2__ {int delta; void* target_power; void* tssi_offset; void* tssi_slope; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76x02_dev*,int,void**,int) ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct mt76x02_dev *VAR_2,
    struct mt76x2_tx_power_info *VAR_3,
    struct ieee80211_channel *VAR_4,
    int VAR_5, int VAR_6)
{
 int VAR_7 = VAR_4->hw_value;
 enum mt76x2_cal_channel_group VAR_8;
 int VAR_9;
 u16 VAR_10;
 u8 VAR_11[5];

 VAR_8 = FUNC_3(VAR_7);
 VAR_6 += VAR_8 * VAR_1;

 if (VAR_7 >= 192)
  VAR_9 = 4;
 else if (VAR_7 >= 184)
  VAR_9 = 3;
 else if (VAR_7 < 44)
  VAR_9 = 3;
 else if (VAR_7 < 52)
  VAR_9 = 4;
 else if (VAR_7 < 58)
  VAR_9 = 3;
 else if (VAR_7 < 98)
  VAR_9 = 4;
 else if (VAR_7 < 106)
  VAR_9 = 3;
 else if (VAR_7 < 116)
  VAR_9 = 4;
 else if (VAR_7 < 130)
  VAR_9 = 3;
 else if (VAR_7 < 149)
  VAR_9 = 4;
 else if (VAR_7 < 157)
  VAR_9 = 3;
 else
  VAR_9 = 4;

 FUNC_0(VAR_2, VAR_6, VAR_11, sizeof(VAR_11));

 VAR_3->chain[VAR_5].tssi_slope = VAR_11[0];
 VAR_3->chain[VAR_5].tssi_offset = VAR_11[1];
 VAR_3->chain[VAR_5].target_power = VAR_11[2];
 VAR_3->chain[VAR_5].delta =
  FUNC_2(VAR_11[VAR_9], 7);

 VAR_10 = FUNC_1(VAR_2, VAR_0);
 VAR_3->target_power = VAR_10 & 0xff;
}
