
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_rx_phy_info {int phy_flags; int * non_cfg_phy; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_rx_status {int signal; int chains; int* chain_signal; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int,int,int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct iwl_mvm *VAR_10,
     struct iwl_rx_phy_info *VAR_11,
     struct ieee80211_rx_status *VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16;
 u32 VAR_17;

 VAR_17 =
     FUNC_2(VAR_11->non_cfg_phy[VAR_0]);
 VAR_13 = (VAR_17 & VAR_1) >>
      VAR_2;
 VAR_13 = VAR_13 ? -VAR_13 : VAR_9;
 VAR_14 = (VAR_17 & VAR_3) >>
      VAR_4;
 VAR_14 = VAR_14 ? -VAR_14 : VAR_9;
 VAR_15 = (VAR_17 & VAR_5) >>
      VAR_6;
 VAR_15 = VAR_15 ? -VAR_15 : VAR_9;
 VAR_16 = FUNC_3(VAR_13, VAR_14);
 VAR_16 = FUNC_3(VAR_16, VAR_15);

 FUNC_0(VAR_10, "energy In A %d B %d C %d , and max %d\n",
   VAR_13, VAR_14, VAR_15, VAR_16);

 VAR_12->signal = VAR_16;
 VAR_12->chains = (FUNC_1(VAR_11->phy_flags) &
    VAR_7)
     >> VAR_8;
 VAR_12->chain_signal[0] = VAR_13;
 VAR_12->chain_signal[1] = VAR_14;
 VAR_12->chain_signal[2] = VAR_15;
}
