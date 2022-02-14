
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mt76x2_temp_comp {int temp_25_ref; int high_slope; int low_slope; int upper_bound; scalar_t__ lower_bound; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct mt76x02_dev {TYPE_3__ mt76; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_4__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mt76x2_temp_comp*,int ,int) ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;
 int FUNC_2 (struct mt76x02_dev*,int) ;
 int FUNC_3 (struct mt76x02_dev*) ;

int FUNC_4(struct mt76x02_dev *VAR_6, struct mt76x2_temp_comp *VAR_7)
{
 enum nl80211_band VAR_8 = VAR_6->mt76.chandef.chan->band;
 u16 VAR_9, VAR_10;
 u8 VAR_11;

 FUNC_0(VAR_7, 0, sizeof(*VAR_7));

 if (!FUNC_3(VAR_6))
  return -VAR_0;

 if (!FUNC_2(VAR_6, VAR_8))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_6, VAR_4) >> 8;
 VAR_7->temp_25_ref = VAR_9 & 0x7f;
 if (VAR_8 == VAR_5) {
  VAR_10 = FUNC_1(VAR_6, VAR_2);
  VAR_11 = FUNC_1(VAR_6, VAR_4);
 } else {
  VAR_10 = FUNC_1(VAR_6, VAR_1);
  VAR_11 = FUNC_1(VAR_6,
         VAR_3) >> 8;
 }

 VAR_7->high_slope = VAR_10 & 0xff;
 VAR_7->low_slope = VAR_10 >> 8;
 VAR_7->lower_bound = 0 - (VAR_11 & 0xf);
 VAR_7->upper_bound = (VAR_11 >> 4) & 0xf;

 return 0;
}
