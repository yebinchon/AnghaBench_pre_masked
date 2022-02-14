
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
typedef int data ;
struct TYPE_2__ {int delta; void* target_power; void* tssi_offset; void* tssi_slope; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt76x02_dev*,int,void**,int) ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;
 int FUNC_2 (void*,int) ;

__attribute__((used)) static void
FUNC_3(struct mt76x02_dev *VAR_1,
    struct mt76x2_tx_power_info *VAR_2,
    struct ieee80211_channel *VAR_3,
    int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_3->hw_value;
 int VAR_7;
 u8 VAR_8[6];
 u16 VAR_9;

 if (VAR_6 < 6)
  VAR_7 = 3;
 else if (VAR_6 < 11)
  VAR_7 = 4;
 else
  VAR_7 = 5;

 FUNC_0(VAR_1, VAR_5, VAR_8, sizeof(VAR_8));

 VAR_2->chain[VAR_4].tssi_slope = VAR_8[0];
 VAR_2->chain[VAR_4].tssi_offset = VAR_8[1];
 VAR_2->chain[VAR_4].target_power = VAR_8[2];
 VAR_2->chain[VAR_4].delta =
  FUNC_2(VAR_8[VAR_7], 7);

 VAR_9 = FUNC_1(VAR_1, VAR_0);
 VAR_2->target_power = VAR_9 >> 8;
}
