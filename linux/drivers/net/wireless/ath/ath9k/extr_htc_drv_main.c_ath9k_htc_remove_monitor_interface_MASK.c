
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath_common {int dummy; } ;
struct ath9k_htc_priv {int* vif_sta_pos; size_t mon_vif_idx; int sta_slot; TYPE_1__* ah; int nstations; } ;
struct TYPE_2__ {int is_monitoring; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int VAR_1 ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ath_common*,int ,char*,size_t,int) ;
 int FUNC_4 (struct ath_common*,char*) ;

__attribute__((used)) static int FUNC_5(struct ath9k_htc_priv *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_2(VAR_2->ah);
 int VAR_4 = 0;
 u8 VAR_5, VAR_6;

 FUNC_1(VAR_2);

 VAR_6 = VAR_2->vif_sta_pos[VAR_2->mon_vif_idx];

 FUNC_0(VAR_1, &VAR_6);
 if (VAR_4) {
  FUNC_4(VAR_3, "Unable to remove station entry for monitor mode\n");
  return VAR_4;
 }

 VAR_2->sta_slot &= ~(1 << VAR_6);
 VAR_2->nstations--;
 VAR_2->ah->is_monitoring = 0;

 FUNC_3(VAR_3, VAR_0,
  "Removed a monitor interface at idx: %d, sta idx: %d\n",
  VAR_2->mon_vif_idx, VAR_6);

 return 0;
}
