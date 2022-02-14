
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_vif_priv {int ibss_bssid_sta_id; } ;
struct il_priv {scalar_t__ band; int hw; } ;
struct TYPE_2__ {int bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; scalar_t__ drv_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct il_priv*,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct il_priv*,int ,int ) ;
 int FUNC_3 (struct il_priv*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_3, struct ieee80211_vif *VAR_4,
      bool VAR_5)
{
 struct il_vif_priv *VAR_6 = (void *)VAR_4->drv_priv;
 int VAR_7;

 if (VAR_5) {
  VAR_7 =
      FUNC_0(VAR_3, VAR_4->bss_conf.bssid,
          &VAR_6->ibss_bssid_sta_id);
  if (VAR_7)
   return VAR_7;

  FUNC_2(VAR_3, VAR_6->ibss_bssid_sta_id,
    (VAR_3->band ==
     VAR_0) ? VAR_2 :
    VAR_1);
  FUNC_1(VAR_3->hw, VAR_6->ibss_bssid_sta_id);

  return 0;
 }

 return FUNC_3(VAR_3, VAR_6->ibss_bssid_sta_id,
     VAR_4->bss_conf.bssid);
}
