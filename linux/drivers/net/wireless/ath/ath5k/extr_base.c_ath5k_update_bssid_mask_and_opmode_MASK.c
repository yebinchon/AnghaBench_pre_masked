
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {int addr; } ;
struct ath_common {int macaddr; } ;
struct ath5k_vif_iter_data {int found_active; int need_set_hw_addr; int n_stas; int active_mac; int opmode; int mask; int hw_macaddr; } ;
struct ath5k_hw {int filter_flags; int bssidmask; int opmode; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath5k_hw*,int ,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ath_common* FUNC_1 (struct ath5k_hw*) ;
 scalar_t__ FUNC_2 (struct ath5k_hw*) ;
 int FUNC_3 (struct ath5k_hw*,int ) ;
 int FUNC_4 (struct ath5k_hw*,int ) ;
 int FUNC_5 (struct ath5k_hw*,int ) ;
 int FUNC_6 (struct ath5k_hw*,int ) ;
 int FUNC_7 (struct ath5k_vif_iter_data*,int ,struct ieee80211_vif*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int (*) (struct ath5k_vif_iter_data*,int ,struct ieee80211_vif*),struct ath5k_vif_iter_data*) ;
 int FUNC_11 (int ,int ,int ) ;

void
FUNC_12(struct ath5k_hw *VAR_6,
       struct ieee80211_vif *VAR_7)
{
 struct ath_common *VAR_8 = FUNC_1(VAR_6);
 struct ath5k_vif_iter_data VAR_9;
 u32 VAR_10;





 VAR_9.hw_macaddr = VAR_8->macaddr;
 FUNC_9(VAR_9.mask);
 VAR_9.found_active = 0;
 VAR_9.need_set_hw_addr = 1;
 VAR_9.opmode = VAR_5;
 VAR_9.n_stas = 0;

 if (VAR_7)
  FUNC_7(&VAR_9, VAR_7->addr, VAR_7);


 FUNC_10(
  VAR_6->hw, VAR_3,
  FUNC_7, &VAR_9);
 FUNC_11(VAR_6->bssidmask, VAR_9.mask, VAR_2);

 VAR_6->opmode = VAR_9.opmode;
 if (VAR_6->opmode == VAR_5)

  VAR_6->opmode = VAR_4;

 FUNC_5(VAR_6, VAR_6->opmode);
 FUNC_0(VAR_6, VAR_1, "mode setup opmode %d (%s)\n",
    VAR_6->opmode, FUNC_8(VAR_6->opmode));

 if (VAR_9.need_set_hw_addr && VAR_9.found_active)
  FUNC_4(VAR_6, VAR_9.active_mac);

 if (FUNC_2(VAR_6))
  FUNC_3(VAR_6, VAR_6->bssidmask);


 if (VAR_9.n_stas > 1) {




  VAR_6->filter_flags |= VAR_0;
 }

 VAR_10 = VAR_6->filter_flags;
 FUNC_6(VAR_6, VAR_10);
 FUNC_0(VAR_6, VAR_1, "RX filter 0x%x\n", VAR_10);
}
