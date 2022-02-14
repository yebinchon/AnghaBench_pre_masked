
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {scalar_t__ Rf_Mode; } ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path_e { ____Placeholder_rf90_radio_path_e } rf90_radio_path_e ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int,int) ;
 int FUNC_5 (int) ;

u32 FUNC_6(struct net_device *VAR_1,
      enum rf90_radio_path_e VAR_2,
      u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6;
 struct r8192_priv *VAR_7 = FUNC_1(VAR_1);


 if (!FUNC_3(VAR_1, VAR_2))
  return 0;
 if (VAR_7->Rf_Mode == VAR_0) {
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
  FUNC_5(200);
 } else {
  VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3);
 }
 VAR_6 = FUNC_0(VAR_4) - 1;
 VAR_5 = (VAR_5 & VAR_4) >> VAR_6;
 return VAR_5;

}
