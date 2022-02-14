
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {size_t last_rx_rssi; } ;
struct TYPE_10__ {int flags; } ;
struct il_priv {int band; TYPE_5__ _3945; TYPE_4__ active; TYPE_3__* stations; int vif; } ;
struct il3945_rs_sta {int tgg; size_t start_rate; int lock; int expected_tpt; } ;
struct il3945_sta_priv {struct il3945_rs_sta rs_sta; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
typedef size_t s32 ;
struct TYPE_12__ {int plcp; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_1__ sta; } ;
struct TYPE_9__ {TYPE_2__ sta; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 size_t VAR_0 ;


 int VAR_1 ;
 struct ieee80211_sta* FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_3 (size_t,int) ;
 TYPE_6__* VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void
FUNC_8(struct ieee80211_hw *VAR_6, s32 VAR_7)
{
 struct il_priv *VAR_8 = VAR_6->priv;
 s32 VAR_9 = 0;
 unsigned long VAR_10;
 struct il3945_rs_sta *VAR_11;
 struct ieee80211_sta *VAR_12;
 struct il3945_sta_priv *VAR_13;

 FUNC_1("enter\n");

 FUNC_4();

 VAR_12 = FUNC_2(VAR_8->vif, VAR_8->stations[VAR_7].sta.sta.addr);
 if (!VAR_12) {
  FUNC_1("Unable to find station to initialize rate scaling.\n");
  FUNC_5();
  return;
 }

 VAR_13 = (void *)VAR_12->drv_priv;
 VAR_11 = &VAR_13->rs_sta;

 FUNC_6(&VAR_11->lock, VAR_10);

 VAR_11->tgg = 0;
 switch (VAR_8->band) {
 case 129:

  if (VAR_8->active.flags & VAR_1) {
   VAR_11->tgg = 1;
   VAR_11->expected_tpt = VAR_4;
  } else
   VAR_11->expected_tpt = VAR_3;
  break;
 case 128:
  VAR_11->expected_tpt = VAR_2;
  break;
 default:
  FUNC_0();
  break;
 }

 FUNC_7(&VAR_11->lock, VAR_10);

 VAR_9 = VAR_8->_3945.last_rx_rssi;
 if (VAR_9 == 0)
  VAR_9 = VAR_0;

 FUNC_1("Network RSSI: %d\n", VAR_9);

 VAR_11->start_rate = FUNC_3(VAR_9, VAR_8->band);

 FUNC_1("leave: rssi %d assign rate idx: " "%d (plcp 0x%x)\n", VAR_9,
        VAR_11->start_rate, VAR_5[VAR_11->start_rate].plcp);
 FUNC_5();
}
