
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {scalar_t__ CustomerID; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int Enable; int* rf_rssi; int* cck_pwdb_sta; int* rf_enable_rssi_th; scalar_t__ disabledRF; int cck_method; int diff_TH; int SS_TH_low; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_6)
{
 u8 VAR_7;
 struct r8192_priv *VAR_8 = FUNC_0(VAR_6);

 VAR_2.Enable = 1;
 VAR_2.SS_TH_low = VAR_4;
 VAR_2.diff_TH = VAR_5;
 if (VAR_8->CustomerID == VAR_3)
  VAR_2.cck_method = VAR_1;
 else
  VAR_2.cck_method = VAR_0;
 VAR_2.disabledRF = 0;
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  VAR_2.rf_rssi[VAR_7] = 50;
  VAR_2.cck_pwdb_sta[VAR_7] = -64;
  VAR_2.rf_enable_rssi_th[VAR_7] = 100;
 }
}
