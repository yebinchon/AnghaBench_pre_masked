
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int bssid; int fcs; scalar_t__ promiscuous; } ;
struct cw1200_common {int disable_beacon_filter; int listening; TYPE_2__ scan; int conf_mutex; TYPE_1__ rx_filter; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (struct cw1200_common*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cw1200_common*) ;
 int FUNC_7 (struct cw1200_common*) ;

void FUNC_8(struct ieee80211_hw *VAR_4,
        unsigned int VAR_5,
        unsigned int *VAR_6,
        u64 VAR_7)
{
 struct cw1200_common *VAR_8 = VAR_4->priv;
 bool VAR_9 = !!(*VAR_6 &
       (VAR_2 |
        VAR_0 |
        VAR_3));

 *VAR_6 &= VAR_2 |
   VAR_1 |
   VAR_0 |
   VAR_3;

 FUNC_2(&VAR_8->scan.lock);
 FUNC_3(&VAR_8->conf_mutex);

 VAR_8->rx_filter.promiscuous = 0;
 VAR_8->rx_filter.bssid = (*VAR_6 & (VAR_2 |
   VAR_3)) ? 1 : 0;
 VAR_8->rx_filter.fcs = (*VAR_6 & VAR_1) ? 1 : 0;
 VAR_8->disable_beacon_filter = !(*VAR_6 &
     (VAR_0 |
      VAR_3));
 if (VAR_8->listening != VAR_9) {
  VAR_8->listening = VAR_9;
  FUNC_6(VAR_8);
  FUNC_1(VAR_8, VAR_9);
  FUNC_7(VAR_8);
 }
 FUNC_0(VAR_8);
 FUNC_4(&VAR_8->conf_mutex);
 FUNC_5(&VAR_8->scan.lock);
}
