
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * rx_cfo_tail; int * rx_cfo_short; scalar_t__* rx_snr_db; int * rx_evm_dbm; int * rx_rssi_percentage; } ;
struct rtl_priv {TYPE_1__ stats; } ;
struct ieee80211_hw {int dummy; } ;


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
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int ,int ) ;
 int FUNC_2 (struct rtl_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_0(VAR_10);

 FUNC_1(VAR_11, VAR_2,
         VAR_11->stats.rx_rssi_percentage[0]);
 FUNC_1(VAR_11, VAR_6,
         VAR_11->stats.rx_rssi_percentage[1]);





 FUNC_1(VAR_11, VAR_8, VAR_11->stats.rx_evm_dbm[0]);
 FUNC_1(VAR_11, VAR_9, VAR_11->stats.rx_evm_dbm[1]);

 FUNC_1(VAR_11, VAR_3,
         (u8)(VAR_11->stats.rx_snr_db[0]));
 FUNC_1(VAR_11, VAR_7,
         (u8)(VAR_11->stats.rx_snr_db[1]));

 FUNC_2(VAR_11, VAR_1,
         VAR_11->stats.rx_cfo_short[0]);
 FUNC_2(VAR_11, VAR_5,
         VAR_11->stats.rx_cfo_short[1]);

 FUNC_2(VAR_11, VAR_0, VAR_11->stats.rx_cfo_tail[0]);
 FUNC_2(VAR_11, VAR_4, VAR_11->stats.rx_cfo_tail[1]);
}
