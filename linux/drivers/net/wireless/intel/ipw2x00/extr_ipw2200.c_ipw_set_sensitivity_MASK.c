
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ipw_sensitivity_calib {int beacon_rssi_raw; } ;
struct ipw_priv {int dummy; } ;
typedef int calib ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipw_priv*,int ,int,struct ipw_sensitivity_calib*) ;

__attribute__((used)) static int FUNC_2(struct ipw_priv *VAR_1, u16 VAR_2)
{
 struct ipw_sensitivity_calib VAR_3 = {
  .beacon_rssi_raw = FUNC_0(VAR_2),
 };

 return FUNC_1(VAR_1, VAR_0, sizeof(VAR_3),
    &VAR_3);
}
