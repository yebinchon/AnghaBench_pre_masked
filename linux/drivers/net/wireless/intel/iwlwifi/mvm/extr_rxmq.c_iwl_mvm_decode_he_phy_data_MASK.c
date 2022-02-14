
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_rx_phy_data {int info_type; int d0; int d1; int d4; int d2; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_radiotap_he_mu {int flags2; int flags1; } ;
struct ieee80211_radiotap_he {int data3; int data1; int data4; int data6; int data5; int data2; } ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_mvm_rx_phy_data*,int ,struct ieee80211_radiotap_he_mu*) ;
 int FUNC_2 (struct iwl_mvm_rx_phy_data*,int ,struct ieee80211_radiotap_he*,struct ieee80211_radiotap_he_mu*,struct ieee80211_rx_status*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct iwl_mvm *VAR_51,
           struct iwl_mvm_rx_phy_data *VAR_52,
           struct ieee80211_radiotap_he *VAR_53,
           struct ieee80211_radiotap_he_mu *VAR_54,
           struct ieee80211_rx_status *VAR_55,
           u32 VAR_56, int VAR_57)
{
 switch (VAR_52->info_type) {
 case 131:
 case 138:
 case 130:
 case 132:
 case 128:
 case 129:
  return;
 case 133:
  VAR_53->data1 |= FUNC_0(VAR_7 |
      VAR_4 |
      VAR_5 |
      VAR_6);
  VAR_53->data4 |= FUNC_3(FUNC_5(VAR_52->d2,
           VAR_44),
           VAR_18);
  VAR_53->data4 |= FUNC_3(FUNC_5(VAR_52->d2,
           VAR_45),
           VAR_19);
  VAR_53->data4 |= FUNC_3(FUNC_5(VAR_52->d2,
           VAR_46),
           VAR_20);
  VAR_53->data4 |= FUNC_3(FUNC_5(VAR_52->d2,
           VAR_47),
           VAR_21);

 case 135:
 case 137:
 case 136:
 case 134:

  VAR_53->data1 |= FUNC_0(VAR_3 |
      VAR_2 |
      VAR_1);
  VAR_53->data2 |= FUNC_0(VAR_11 |
      VAR_10 |
      VAR_12 |
      VAR_9);
  VAR_53->data3 |= FUNC_3(FUNC_5(VAR_52->d0,
           VAR_33),
           VAR_14);
  if (VAR_52->info_type != 134 &&
      VAR_52->info_type != 133) {
   VAR_53->data1 |= FUNC_0(VAR_8);
   VAR_53->data3 |= FUNC_3(FUNC_5(VAR_52->d0,
           VAR_40),
            VAR_16);
  }
  VAR_53->data3 |= FUNC_3(FUNC_5(VAR_52->d0,
           VAR_35),
           VAR_15);
  VAR_53->data5 |= FUNC_3(FUNC_5(VAR_52->d0,
           VAR_37),
           VAR_24);
  VAR_53->data5 |= FUNC_3(FUNC_5(VAR_52->d0,
           VAR_36),
           VAR_23);
  VAR_53->data5 |= FUNC_3(FUNC_5(VAR_52->d1,
           VAR_41),
           VAR_22);
  VAR_53->data6 |= FUNC_3(FUNC_5(VAR_52->d0,
           VAR_39),
           VAR_26);
  VAR_53->data6 |= FUNC_3(FUNC_5(VAR_52->d0,
           VAR_34),
           VAR_25);
  break;
 }

 switch (VAR_52->info_type) {
 case 136:
 case 137:
 case 135:
  VAR_53->data1 |= FUNC_0(VAR_7);
  VAR_53->data4 |= FUNC_3(FUNC_5(VAR_52->d0,
           VAR_38),
           VAR_17);
  break;
 default:

  break;
 }

 switch (VAR_52->info_type) {
 case 136:
  VAR_54->flags1 |=
   FUNC_3(FUNC_4(VAR_52->d4,
             VAR_49),
      VAR_27);
  VAR_54->flags1 |=
   FUNC_3(FUNC_4(VAR_52->d4,
             VAR_50),
      VAR_28);
  VAR_54->flags2 |=
   FUNC_3(FUNC_4(VAR_52->d4,
             VAR_48),
      VAR_29);
  FUNC_1(VAR_51, VAR_52, VAR_56, VAR_54);

 case 137:
  VAR_54->flags2 |=
   FUNC_3(FUNC_5(VAR_52->d1,
             VAR_42),
      VAR_31);
  VAR_54->flags2 |=
   FUNC_3(FUNC_5(VAR_52->d1,
             VAR_43),
      VAR_30);

 case 134:
 case 133:
  FUNC_2(VAR_52, VAR_56,
            VAR_53, VAR_54, VAR_55);
  break;
 case 135:
  VAR_53->data1 |= FUNC_0(VAR_0);
  VAR_53->data3 |= FUNC_3(FUNC_5(VAR_52->d0,
           VAR_32),
           VAR_13);
  break;
 default:

  break;
 }
}
