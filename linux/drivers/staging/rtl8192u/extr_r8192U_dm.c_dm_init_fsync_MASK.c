
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {int framesyncMonitor; int fsync_timer; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int fsync_time_interval; int fsync_rate_bitmap; int fsync_rssi_threshold; int bfsync_enable; int fsync_multiple_timeinterval; int fsync_firstdiff_ratethreshold; int fsync_seconddiff_ratethreshold; int fsync_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0(VAR_2);

 VAR_3->ieee80211->fsync_time_interval = 500;
 VAR_3->ieee80211->fsync_rate_bitmap = 0x0f000800;
 VAR_3->ieee80211->fsync_rssi_threshold = 30;
 VAR_3->ieee80211->bfsync_enable = 0;
 VAR_3->ieee80211->fsync_multiple_timeinterval = 3;
 VAR_3->ieee80211->fsync_firstdiff_ratethreshold = 100;
 VAR_3->ieee80211->fsync_seconddiff_ratethreshold = 200;
 VAR_3->ieee80211->fsync_state = VAR_0;
 VAR_3->framesyncMonitor = 1;
 FUNC_1(&VAR_3->fsync_timer, VAR_1, 0);
}
