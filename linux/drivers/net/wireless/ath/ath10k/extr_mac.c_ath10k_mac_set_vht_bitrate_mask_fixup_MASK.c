
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int vht_supported; } ;
struct ieee80211_sta {int addr; TYPE_1__ vht_cap; } ;
struct ath10k_vif {int vht_num_rates; int vdev_id; int vht_pfr; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,char*,int ,int) ;
 int FUNC_1 (struct ath10k*,int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct ath10k *VAR_1,
        struct ath10k_vif *VAR_2,
        struct ieee80211_sta *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = VAR_2->vht_pfr;


 if (!VAR_3->vht_cap.vht_supported || VAR_2->vht_num_rates != 1)
  return 0;

 VAR_4 = FUNC_1(VAR_1, VAR_2->vdev_id, VAR_3->addr,
     VAR_0, VAR_5);
 if (VAR_4)
  FUNC_0(VAR_1, "failed to eanble STA %pM peer fixed rate: %d\n",
       VAR_3->addr, VAR_4);

 return 1;
}
