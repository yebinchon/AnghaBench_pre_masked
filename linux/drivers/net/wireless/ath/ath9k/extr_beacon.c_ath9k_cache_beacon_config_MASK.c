
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_bss_conf {int beacon_int; int dtim_period; int ibss_creator; int bssid; } ;
struct ath_softc {int sc_ah; } ;
struct ath_common {int dummy; } ;
struct ath_beacon_config {int beacon_interval; int dtim_period; int dtim_count; int bmiss_timeout; int ibss_creator; } ;
struct ath_chanctx {struct ath_beacon_config beacon; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*,struct ath_beacon_config*) ;
 int FUNC_2 (struct ath_common*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct ath_softc *VAR_2,
          struct ath_chanctx *VAR_3,
          struct ieee80211_bss_conf *VAR_4)
{
 struct ath_common *VAR_5 = FUNC_0(VAR_2->sc_ah);
 struct ath_beacon_config *VAR_6 = &VAR_3->beacon;

 FUNC_2(VAR_5, VAR_1,
  "Caching beacon data for BSS: %pM\n", VAR_4->bssid);

 VAR_6->beacon_interval = VAR_4->beacon_int;
 VAR_6->dtim_period = VAR_4->dtim_period;
 VAR_6->dtim_count = 1;
 VAR_6->ibss_creator = VAR_4->ibss_creator;







 if (VAR_6->beacon_interval == 0)
  VAR_6->beacon_interval = 100;

 VAR_6->bmiss_timeout =
  VAR_0 * VAR_6->beacon_interval;






 if (VAR_6->dtim_period == 0)
  VAR_6->dtim_period = 1;

 FUNC_1(VAR_2, VAR_6);
}
