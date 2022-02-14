
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mt76x2_tx_power_info {TYPE_3__* chain; } ;
struct mt76x2_tssi_comp {int cal_mode; int pa_mode; int offset1; int slope1; int offset0; int slope0; } ;
struct TYPE_8__ {int tssi_comp_pending; int dpd_cal_done; int tssi_cal_done; } ;
struct TYPE_5__ {struct ieee80211_channel* chan; } ;
struct TYPE_6__ {TYPE_1__ chandef; } ;
struct mt76x02_dev {TYPE_4__ cal; scalar_t__ ed_tx_blocked; TYPE_2__ mt76; } ;
struct ieee80211_channel {int hw_value; int band; } ;
struct TYPE_7__ {int tssi_offset; int tssi_slope; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mt76x02_dev*,int ) ;
 scalar_t__ FUNC_3 (struct mt76x02_dev*,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_5 (struct mt76x02_dev*,struct mt76x2_tx_power_info*,struct ieee80211_channel*) ;
 int FUNC_6 (struct mt76x02_dev*,struct mt76x2_tssi_comp*) ;
 int FUNC_7 (int,int) ;

void FUNC_8(struct mt76x02_dev *VAR_2)
{
 struct ieee80211_channel *VAR_3 = VAR_2->mt76.chandef.chan;
 struct mt76x2_tx_power_info VAR_4;
 struct mt76x2_tssi_comp VAR_5 = {};

 if (!VAR_2->cal.tssi_cal_done)
  return;

 if (!VAR_2->cal.tssi_comp_pending) {

  VAR_5.cal_mode = FUNC_0(0);
  FUNC_6(VAR_2, &VAR_5);
  VAR_2->cal.tssi_comp_pending = 1;
 } else {
  if (FUNC_2(VAR_2, FUNC_1(VAR_0, 34)) & FUNC_0(4))
   return;

  VAR_2->cal.tssi_comp_pending = 0;
  FUNC_5(VAR_2, &VAR_4, VAR_3);

  if (FUNC_3(VAR_2, VAR_3->band))
   VAR_5.pa_mode = 1;

  VAR_5.cal_mode = FUNC_0(1);
  VAR_5.slope0 = VAR_4.chain[0].tssi_slope;
  VAR_5.offset0 = VAR_4.chain[0].tssi_offset;
  VAR_5.slope1 = VAR_4.chain[1].tssi_slope;
  VAR_5.offset1 = VAR_4.chain[1].tssi_offset;
  FUNC_6(VAR_2, &VAR_5);

  if (VAR_5.pa_mode || VAR_2->cal.dpd_cal_done || VAR_2->ed_tx_blocked)
   return;

  FUNC_7(10000, 20000);
  FUNC_4(VAR_2, VAR_1, VAR_3->hw_value);
  VAR_2->cal.dpd_cal_done = 1;
 }
}
