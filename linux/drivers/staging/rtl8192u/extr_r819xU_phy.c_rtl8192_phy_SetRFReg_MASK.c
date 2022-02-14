
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {scalar_t__ Rf_Mode; } ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path_e { ____Placeholder_rf90_radio_path_e } rf90_radio_path_e ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct net_device*,int,int,int) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,int,int) ;
 int FUNC_6 (struct net_device*,int,int,int) ;
 int FUNC_7 (int) ;

void FUNC_8(struct net_device *VAR_2,
     enum rf90_radio_path_e VAR_3,
     u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct r8192_priv *VAR_7 = FUNC_1(VAR_2);
 u32 VAR_8, VAR_9;

 if (!FUNC_4(VAR_2, VAR_3))
  return;

 if (VAR_7->Rf_Mode == VAR_0) {
  if (VAR_5 != VAR_1) {

   VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4);
   VAR_9 = FUNC_0(VAR_5) - 1;
   VAR_8 &= ~VAR_5;
   VAR_8 |= VAR_6 << VAR_9;

   FUNC_3(VAR_2, VAR_3, VAR_4, VAR_8);
  } else {
   FUNC_3(VAR_2, VAR_3, VAR_4, VAR_6);
  }

  FUNC_7(200);

 } else {
  if (VAR_5 != VAR_1) {

   VAR_8 = FUNC_5(VAR_2, VAR_3, VAR_4);
   VAR_9 = FUNC_0(VAR_5) - 1;
   VAR_8 &= ~VAR_5;
   VAR_8 |= VAR_6 << VAR_9;

   FUNC_6(VAR_2, VAR_3, VAR_4, VAR_8);
  } else {
   FUNC_6(VAR_2, VAR_3, VAR_4, VAR_6);
  }
 }
}
