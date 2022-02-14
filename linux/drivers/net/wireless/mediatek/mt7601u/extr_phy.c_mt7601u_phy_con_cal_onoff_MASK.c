
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int adjusting; int work; scalar_t__ enabled; int freq; } ;
struct mt7601u_dev {TYPE_2__ freq_cal; int hw; TYPE_1__* ee; int con_mon_lock; int bcn_freq_off; int avg_rssi; int ap_bssid; } ;
struct ieee80211_bss_conf {scalar_t__ assoc; int bssid; } ;
struct TYPE_3__ {int rf_freq_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mt7601u_dev *VAR_2,
          struct ieee80211_bss_conf *VAR_3)
{
 if (!VAR_3->assoc)
  FUNC_0(&VAR_2->freq_cal.work);


 FUNC_4(&VAR_2->con_mon_lock);
 FUNC_1(VAR_2->ap_bssid, VAR_3->bssid);
 FUNC_2(&VAR_2->avg_rssi);
 VAR_2->bcn_freq_off = VAR_1;
 FUNC_5(&VAR_2->con_mon_lock);

 VAR_2->freq_cal.freq = VAR_2->ee->rf_freq_off;
 VAR_2->freq_cal.enabled = VAR_3->assoc;
 VAR_2->freq_cal.adjusting = 0;

 if (VAR_3->assoc)
  FUNC_3(VAR_2->hw, &VAR_2->freq_cal.work,
          VAR_0);
}
