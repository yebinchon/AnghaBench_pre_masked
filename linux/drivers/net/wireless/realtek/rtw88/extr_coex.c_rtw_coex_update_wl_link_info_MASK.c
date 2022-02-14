
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtw_traffic_stats {scalar_t__ tx_throughput; scalar_t__ rx_throughput; } ;
struct TYPE_4__ {int current_band_type; } ;
struct TYPE_3__ {int min_rssi; } ;
struct rtw_coex_dm {int* wl_rssi_state; } ;
struct rtw_coex_stat {int wl_connected; int wl_linkscan_proc; int wl_tput_dir; void* wl_gl_busy; } ;
struct rtw_coex {int under_5g; struct rtw_coex_dm dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {TYPE_2__ hal; TYPE_1__ dm_info; int sta_cnt; struct rtw_traffic_stats stats; struct rtw_chip_info* chip; struct rtw_coex coex; } ;
struct rtw_chip_info {int* wl_rssi_step; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtw_dev*,int,int,int) ;
 int FUNC_1 (struct rtw_dev*) ;
 void* FUNC_2 (struct rtw_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_5, u8 VAR_6)
{
 struct rtw_coex *VAR_7 = &VAR_5->coex;
 struct rtw_coex_stat *VAR_8 = &VAR_7->stat;
 struct rtw_coex_dm *VAR_9 = &VAR_7->dm;
 struct rtw_chip_info *VAR_10 = VAR_5->chip;
 struct rtw_traffic_stats *VAR_11 = &VAR_5->stats;
 bool VAR_12 = 0;
 bool VAR_13 = 0, VAR_14 = 0;
 int VAR_15;
 u8 VAR_16;
 u8 VAR_17;
 u8 VAR_18;

 VAR_13 = FUNC_2(VAR_5, VAR_4);
 VAR_8->wl_connected = !!VAR_5->sta_cnt;
 VAR_8->wl_gl_busy = FUNC_2(VAR_5, VAR_3);

 if (VAR_11->tx_throughput > VAR_11->rx_throughput)
  VAR_8->wl_tput_dir = VAR_1;
 else
  VAR_8->wl_tput_dir = VAR_0;

 if (VAR_13 || VAR_14 || VAR_6 == 133 ||
     VAR_6 == 132 || VAR_6 == 131)
  VAR_8->wl_linkscan_proc = 1;
 else
  VAR_8->wl_linkscan_proc = 0;

 FUNC_1(VAR_5);

 for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
  VAR_16 = VAR_9->wl_rssi_state[VAR_15];
  VAR_17 = VAR_10->wl_rssi_step[VAR_15];
  VAR_18 = VAR_5->dm_info.min_rssi;
  VAR_16 = FUNC_0(VAR_5, VAR_16,
            VAR_18, VAR_17);
  VAR_9->wl_rssi_state[VAR_15] = VAR_16;
 }

 switch (VAR_6) {
 case 129:
 case 128:
 case 130:

  VAR_12 = 1;
  break;
 case 132:
 case 131:
 case 133:

  VAR_12 = 0;
  break;
 default:
  if (VAR_5->hal.current_band_type == VAR_2)
   VAR_12 = 1;
  else
   VAR_12 = 0;
  break;
 }

 VAR_7->under_5g = VAR_12;
}
