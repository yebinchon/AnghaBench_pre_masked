
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtw_hal {int current_band_width; int current_channel; scalar_t__ current_band_type; int * cch_by_bw; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_hal hal; struct ieee80211_hw* hw; } ;
struct rtw_chip_info {TYPE_2__* ops; } ;
struct rtw_channel_params {scalar_t__ center_chan; int bandwidth; int primary_chan_idx; int * cch_by_bw; } ;
struct TYPE_3__ {int chandef; } ;
struct ieee80211_hw {TYPE_1__ conf; } ;
struct TYPE_4__ {int (* set_channel ) (struct rtw_dev*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 scalar_t__ FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (int *,struct rtw_channel_params*) ;
 int FUNC_4 (struct rtw_dev*,int) ;
 int FUNC_5 (struct rtw_dev*,int,int,int) ;

void FUNC_6(struct rtw_dev *VAR_8)
{
 struct ieee80211_hw *VAR_9 = VAR_8->hw;
 struct rtw_hal *VAR_10 = &VAR_8->hal;
 struct rtw_chip_info *VAR_11 = VAR_8->chip;
 struct rtw_channel_params VAR_12;
 u8 VAR_13, VAR_14, VAR_15;
 u8 VAR_16;

 FUNC_3(&VAR_9->conf.chandef, &VAR_12);
 if (FUNC_0(VAR_12.center_chan == 0, "Invalid channel\n"))
  return;

 VAR_13 = VAR_12.center_chan;
 VAR_14 = VAR_12.bandwidth;
 VAR_15 = VAR_12.primary_chan_idx;

 VAR_10->current_band_width = VAR_14;
 VAR_10->current_channel = VAR_13;
 VAR_10->current_band_type = VAR_13 > 14 ? VAR_4 : VAR_3;

 for (VAR_16 = VAR_5; VAR_16 <= VAR_7; VAR_16++)
  VAR_10->cch_by_bw[VAR_16] = VAR_12.cch_by_bw[VAR_16];

 VAR_11->ops->set_channel(VAR_8, VAR_13, VAR_14, VAR_15);

 if (VAR_10->current_band_type == VAR_4) {
  FUNC_1(VAR_8, VAR_2);
 } else {
  if (FUNC_2(VAR_8, VAR_6))
   FUNC_1(VAR_8, VAR_0);
  else
   FUNC_1(VAR_8, VAR_1);
 }

 FUNC_4(VAR_8, VAR_13);
}
