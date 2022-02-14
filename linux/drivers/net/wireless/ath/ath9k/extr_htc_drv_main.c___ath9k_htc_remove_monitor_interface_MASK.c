
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_common {int macaddr; } ;
struct ath9k_htc_target_vif {int index; int myaddr; } ;
struct ath9k_htc_priv {int mon_vif_idx; int vif_slot; int nvifs; int ah; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ath9k_htc_target_vif*) ;
 int VAR_1 ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,char*,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct ath9k_htc_target_vif*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ath9k_htc_priv *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_1(VAR_2->ah);
 struct ath9k_htc_target_vif VAR_4;
 int VAR_5 = 0;
 u8 VAR_6;

 FUNC_4(&VAR_4, 0, sizeof(struct ath9k_htc_target_vif));
 FUNC_3(&VAR_4.myaddr, VAR_3->macaddr, VAR_0);
 VAR_4.index = VAR_2->mon_vif_idx;
 FUNC_0(VAR_1, &VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_3, "Unable to remove monitor interface at idx: %d\n",
   VAR_2->mon_vif_idx);
 }

 VAR_2->nvifs--;
 VAR_2->vif_slot &= ~(1 << VAR_2->mon_vif_idx);
}
