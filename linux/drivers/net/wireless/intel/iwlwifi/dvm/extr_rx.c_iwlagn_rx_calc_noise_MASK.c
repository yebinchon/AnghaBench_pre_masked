
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statistics_rx_non_phy {int beacon_silence_rssi_c; int beacon_silence_rssi_b; int beacon_silence_rssi_a; } ;
struct TYPE_2__ {struct statistics_rx_non_phy rx_non_phy; } ;
struct iwl_priv {TYPE_1__ statistics; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,int,int,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct iwl_priv *VAR_2)
{
 struct statistics_rx_non_phy *VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_3 = &VAR_2->statistics.rx_non_phy;

 VAR_6 =
  FUNC_1(VAR_3->beacon_silence_rssi_a) & VAR_0;
 VAR_7 =
  FUNC_1(VAR_3->beacon_silence_rssi_b) & VAR_0;
 VAR_8 =
  FUNC_1(VAR_3->beacon_silence_rssi_c) & VAR_0;

 if (VAR_6) {
  VAR_5 += VAR_6;
  VAR_4++;
 }
 if (VAR_7) {
  VAR_5 += VAR_7;
  VAR_4++;
 }
 if (VAR_8) {
  VAR_5 += VAR_8;
  VAR_4++;
 }


 if (VAR_4)
  VAR_9 = (VAR_5 / VAR_4) - 107;
 else
  VAR_9 = VAR_1;

 FUNC_0(VAR_2, "inband silence a %u, b %u, c %u, dBm %d\n",
   VAR_6, VAR_7, VAR_8,
   VAR_9);
}
