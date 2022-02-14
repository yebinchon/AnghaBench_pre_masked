
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct TYPE_5__ {scalar_t__ current_band_width; scalar_t__ current_channel; } ;
struct rtw_coex_dm {scalar_t__* wl_ch_info; } ;
struct TYPE_4__ {struct rtw_coex_dm dm; } ;
struct rtw_dev {TYPE_2__ hal; struct rtw_efuse efuse; TYPE_1__ coex; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {scalar_t__ bt_afh_span_bw40; scalar_t__ bt_afh_span_bw20; int afh_5g_num; TYPE_3__* afh_5g; } ;
struct TYPE_6__ {scalar_t__ wl_5g_ch; scalar_t__ bt_skip_ch; scalar_t__ bt_skip_span; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rtw_dev*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_2, u8 VAR_3)
{
 struct rtw_chip_info *VAR_4 = VAR_2->chip;
 struct rtw_coex_dm *VAR_5 = &VAR_2->coex.dm;
 struct rtw_efuse *VAR_6 = &VAR_2->efuse;
 u8 VAR_7 = 0;
 u8 VAR_8 = 0;
 u8 VAR_9;
 int VAR_10;

 VAR_9 = VAR_2->hal.current_band_width;

 if (VAR_3 != VAR_0)
  VAR_8 = VAR_2->hal.current_channel;

 if (VAR_8 == 0 || (VAR_6->share_ant && VAR_8 <= 14)) {
  VAR_7 = 0;
 } else if (VAR_8 <= 14) {
  VAR_7 = 0x1;

  if (VAR_9 == VAR_1)
   VAR_9 = VAR_4->bt_afh_span_bw40;
  else
   VAR_9 = VAR_4->bt_afh_span_bw20;
 } else if (VAR_4->afh_5g_num > 1) {
  for (VAR_10 = 0; VAR_10 < VAR_4->afh_5g_num; VAR_10++) {
   if (VAR_8 == VAR_4->afh_5g[VAR_10].wl_5g_ch) {
    VAR_7 = 0x3;
    VAR_8 = VAR_4->afh_5g[VAR_10].bt_skip_ch;
    VAR_9 = VAR_4->afh_5g[VAR_10].bt_skip_span;
    break;
   }
  }
 }

 VAR_5->wl_ch_info[0] = VAR_7;
 VAR_5->wl_ch_info[1] = VAR_8;
 VAR_5->wl_ch_info[2] = VAR_9;

 FUNC_0(VAR_2, VAR_7, VAR_8, VAR_9);
}
