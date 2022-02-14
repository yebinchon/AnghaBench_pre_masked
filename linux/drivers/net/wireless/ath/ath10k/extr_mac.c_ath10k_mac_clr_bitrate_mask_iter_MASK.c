
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vht_supported; } ;
struct ieee80211_sta {int addr; TYPE_1__ vht_cap; scalar_t__ drv_priv; } ;
struct ath10k_vif {int vdev_id; struct ath10k* ar; } ;
struct ath10k_sta {struct ath10k_vif* arvif; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*,int ,int) ;
 int FUNC_1 (struct ath10k*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_2,
          struct ieee80211_sta *VAR_3)
{
 struct ath10k_vif *VAR_4 = VAR_2;
 struct ath10k_sta *VAR_5 = (struct ath10k_sta *)VAR_3->drv_priv;
 struct ath10k *VAR_6 = VAR_4->ar;
 int VAR_7;


 if (VAR_5->arvif != VAR_4 || !VAR_3->vht_cap.vht_supported)
  return;

 VAR_7 = FUNC_1(VAR_6, VAR_4->vdev_id, VAR_3->addr,
     VAR_1,
     VAR_0);
 if (VAR_7)
  FUNC_0(VAR_6, "failed to clear STA %pM peer fixed rate: %d\n",
       VAR_3->addr, VAR_7);
}
