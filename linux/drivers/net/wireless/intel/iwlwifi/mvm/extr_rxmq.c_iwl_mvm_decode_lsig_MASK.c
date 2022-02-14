
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iwl_mvm_rx_phy_data {int info_type; int d1; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_radiotap_lsig {int data2; int data1; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct ieee80211_radiotap_lsig* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_4,
    struct iwl_mvm_rx_phy_data *VAR_5)
{
 struct ieee80211_rx_status *VAR_6 = FUNC_0(VAR_4);
 struct ieee80211_radiotap_lsig *VAR_7;

 switch (VAR_5->info_type) {
 case 130:
 case 128:
 case 129:
 case 131:
 case 133:
 case 135:
 case 134:
 case 132:
  VAR_7 = FUNC_4(VAR_4, sizeof(*VAR_7));
  VAR_7->data1 = FUNC_1(VAR_0);
  VAR_7->data2 = FUNC_2(FUNC_3(VAR_5->d1,
            VAR_2),
            VAR_1);
  VAR_6->flag |= VAR_3;
  break;
 default:
  break;
 }
}
