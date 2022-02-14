
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct mt76x02_rx_freq_cal {int* rssi_offset; int lna_gain; } ;
struct TYPE_4__ {struct mt76x02_rx_freq_cal rx; } ;
struct TYPE_5__ {struct ieee80211_channel* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct mt76x02_dev {TYPE_1__ cal; TYPE_3__ mt76; } ;
struct ieee80211_channel {int band; } ;
typedef int s8 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct mt76x02_dev*,int*,int*,struct ieee80211_channel*) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int*,int*,int*) ;

void FUNC_3(struct mt76x02_dev *VAR_0)
{
 struct ieee80211_channel *VAR_1 = VAR_0->mt76.chandef.chan;
 struct mt76x02_rx_freq_cal *VAR_2 = &VAR_0->cal.rx;
 s8 VAR_3, VAR_4[3], VAR_5;
 u16 VAR_6;
 int VAR_7;

 FUNC_2(VAR_0, VAR_1->band, &VAR_6, &VAR_5, VAR_4);
 VAR_2->lna_gain = FUNC_1(VAR_0, &VAR_5, VAR_4, VAR_1);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2->rssi_offset); VAR_7++) {
  VAR_3 = VAR_6 >> (8 * VAR_7);
  if (VAR_3 < -10 || VAR_3 > 10)
   VAR_3 = 0;

  VAR_2->rssi_offset[VAR_7] = VAR_3;
 }
}
