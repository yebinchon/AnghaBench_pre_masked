
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int usr_dot_11ac_mcs_support; } ;
struct TYPE_2__ {void* tx_highest; void* tx_mcs_map; void* rx_highest; void* rx_mcs_map; } ;
struct ieee80211_vht_cap {TYPE_1__ supp_mcs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int,int,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct mwifiex_private*,int ,int) ;
 int FUNC_8 (struct mwifiex_private*,struct ieee80211_vht_cap*,int ) ;

void FUNC_9(struct mwifiex_private *VAR_1,
         struct ieee80211_vht_cap *VAR_2, u8 VAR_3)
{
 struct mwifiex_adapter *VAR_4 = VAR_1->adapter;
 u16 VAR_5, VAR_6, VAR_7;
 u16 VAR_8, VAR_9, VAR_10, VAR_11;


 FUNC_8(VAR_1, VAR_2, VAR_3);


 VAR_5 = FUNC_0(VAR_4->usr_dot_11ac_mcs_support);
 VAR_6 = FUNC_5(VAR_2->supp_mcs.rx_mcs_map);
 VAR_7 = 0;

 for (VAR_10 = 1; VAR_10 <= 8; VAR_10++) {
  VAR_8 = FUNC_2(VAR_5, VAR_10);
  VAR_9 = FUNC_2(VAR_6, VAR_10);

  if ((VAR_8 == VAR_0) ||
      (VAR_9 == VAR_0))
   FUNC_3(VAR_7, VAR_10,
          VAR_0);
  else
   FUNC_3(VAR_7, VAR_10,
          FUNC_6(VAR_8, VAR_9));
 }

 VAR_2->supp_mcs.rx_mcs_map = FUNC_4(VAR_7);

 VAR_11 = FUNC_7(VAR_1, VAR_3, VAR_7);
 VAR_2->supp_mcs.rx_highest = FUNC_4(VAR_11);


 VAR_5 = FUNC_1(VAR_4->usr_dot_11ac_mcs_support);
 VAR_6 = FUNC_5(VAR_2->supp_mcs.tx_mcs_map);
 VAR_7 = 0;

 for (VAR_10 = 1; VAR_10 <= 8; VAR_10++) {
  VAR_8 = FUNC_2(VAR_5, VAR_10);
  VAR_9 = FUNC_2(VAR_6, VAR_10);
  if ((VAR_8 == VAR_0) ||
      (VAR_9 == VAR_0))
   FUNC_3(VAR_7, VAR_10,
          VAR_0);
  else
   FUNC_3(VAR_7, VAR_10,
          FUNC_6(VAR_8, VAR_9));
 }

 VAR_2->supp_mcs.tx_mcs_map = FUNC_4(VAR_7);

 VAR_11 = FUNC_7(VAR_1, VAR_3, VAR_7);
 VAR_2->supp_mcs.tx_highest = FUNC_4(VAR_11);

 return;
}
