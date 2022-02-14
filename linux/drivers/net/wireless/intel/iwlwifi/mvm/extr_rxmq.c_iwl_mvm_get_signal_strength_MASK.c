
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_rx_status {int signal; int chains; int* chain_signal; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_3,
     struct ieee80211_rx_status *VAR_4,
     u32 VAR_5, int VAR_6,
     int VAR_7)
{
 int VAR_8;
 u32 VAR_9 = VAR_5;

 VAR_6 = VAR_6 ? -VAR_6 : VAR_2;
 VAR_7 = VAR_7 ? -VAR_7 : VAR_2;
 VAR_8 = FUNC_1(VAR_6, VAR_7);

 FUNC_0(VAR_3, "energy In A %d B %d, and max %d\n",
   VAR_6, VAR_7, VAR_8);

 VAR_4->signal = VAR_8;
 VAR_4->chains =
  (VAR_9 & VAR_0) >> VAR_1;
 VAR_4->chain_signal[0] = VAR_6;
 VAR_4->chain_signal[1] = VAR_7;
 VAR_4->chain_signal[2] = VAR_2;
}
