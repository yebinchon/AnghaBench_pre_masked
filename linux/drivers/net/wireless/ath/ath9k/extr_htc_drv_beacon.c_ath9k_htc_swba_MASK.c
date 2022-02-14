
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_event_swba {scalar_t__ beacon_pending; } ;
struct ath_common {int dummy; } ;
struct TYPE_2__ {scalar_t__ bmisscnt; int ** bslot; } ;
struct ath9k_htc_priv {int beacon_lock; TYPE_1__ beacon; int fatal_work; int hw; int ah; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ath9k_htc_priv*,struct wmi_event_swba*) ;
 int FUNC_1 (struct ath9k_htc_priv*,int) ;
 int FUNC_2 (struct ath9k_htc_priv*,int) ;
 struct ath_common* FUNC_3 (int ) ;
 int FUNC_4 (struct ath_common*,int ,char*,...) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct ath9k_htc_priv *VAR_2,
      struct wmi_event_swba *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_3(VAR_2->ah);
 int VAR_5;

 if (VAR_3->beacon_pending != 0) {
  VAR_2->beacon.bmisscnt++;
  if (VAR_2->beacon.bmisscnt > VAR_1) {
   FUNC_4(VAR_4, VAR_0, "Beacon stuck, HW reset\n");
   FUNC_5(VAR_2->hw,
          &VAR_2->fatal_work);
  }
  return;
 }

 if (VAR_2->beacon.bmisscnt) {
  FUNC_4(VAR_4, VAR_0,
   "Resuming beacon xmit after %u misses\n",
   VAR_2->beacon.bmisscnt);
  VAR_2->beacon.bmisscnt = 0;
 }

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 FUNC_6(&VAR_2->beacon_lock);
 if (VAR_2->beacon.bslot[VAR_5] == ((void*)0)) {
  FUNC_7(&VAR_2->beacon_lock);
  return;
 }
 FUNC_7(&VAR_2->beacon_lock);

 FUNC_2(VAR_2, VAR_5);
 FUNC_1(VAR_2, VAR_5);
}
