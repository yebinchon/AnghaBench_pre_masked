
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iwl_mvm_rx_phy_data {int d4; int d3; int d2; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_radiotap_he_mu {void** ru_ch2; int flags2; int flags1; void** ru_ch1; } ;


 void* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_20,
         struct iwl_mvm_rx_phy_data *VAR_21,
         u32 VAR_22,
         struct ieee80211_radiotap_he_mu *VAR_23)
{
 u32 VAR_24 = FUNC_4(VAR_21->d2);
 u32 VAR_25 = FUNC_4(VAR_21->d3);
 u16 VAR_26 = FUNC_3(VAR_21->d4);

 if (FUNC_0(VAR_14, VAR_26)) {
  VAR_23->flags1 |=
   FUNC_1(VAR_2 |
        VAR_1);

  VAR_23->flags1 |=
   FUNC_2(FUNC_0(VAR_15,
         VAR_26),
      VAR_0);

  VAR_23->ru_ch1[0] = FUNC_0(VAR_6,
          VAR_24);
  VAR_23->ru_ch1[1] = FUNC_0(VAR_10,
          VAR_25);
  VAR_23->ru_ch1[2] = FUNC_0(VAR_7,
          VAR_24);
  VAR_23->ru_ch1[3] = FUNC_0(VAR_11,
          VAR_25);
 }

 if (FUNC_0(VAR_16, VAR_26) &&
     (VAR_22 & VAR_19) != VAR_18) {
  VAR_23->flags1 |=
   FUNC_1(VAR_4 |
        VAR_3);

  VAR_23->flags2 |=
   FUNC_2(FUNC_0(VAR_17,
         VAR_26),
      VAR_5);

  VAR_23->ru_ch2[0] = FUNC_0(VAR_8,
          VAR_24);
  VAR_23->ru_ch2[1] = FUNC_0(VAR_12,
          VAR_25);
  VAR_23->ru_ch2[2] = FUNC_0(VAR_9,
          VAR_24);
  VAR_23->ru_ch2[3] = FUNC_0(VAR_13,
          VAR_25);
 }
}
