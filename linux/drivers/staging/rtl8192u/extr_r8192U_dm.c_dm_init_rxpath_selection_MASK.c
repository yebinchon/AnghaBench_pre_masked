
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {scalar_t__ CustomerID; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int* rf_rssi; int* cck_pwdb_sta; int* rf_enable_rssi_th; scalar_t__ disabled_rf; int cck_method; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4)
{
 u8 VAR_5;
 struct r8192_priv *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->CustomerID == VAR_3)
  VAR_2.cck_method = VAR_1;
 else
  VAR_2.cck_method = VAR_0;
 VAR_2.disabled_rf = 0;
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_2.rf_rssi[VAR_5] = 50;
  VAR_2.cck_pwdb_sta[VAR_5] = -64;
  VAR_2.rf_enable_rssi_th[VAR_5] = 100;
 }
}
