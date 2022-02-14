
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ) ;
 int FUNC_4 (struct rtl_priv*,int ) ;
 int FUNC_5 (struct rtl_priv*,int ,int) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10 = 200;
 u16 VAR_11;
 u8 VAR_12, VAR_13 = 0;

 FUNC_1(VAR_8);


 VAR_12 = FUNC_3(VAR_9, VAR_5);

 FUNC_5(VAR_9, VAR_5, (VAR_12 | VAR_6));

 VAR_11 = FUNC_4(VAR_9, VAR_4);
 FUNC_6(VAR_9, VAR_4, (VAR_11 | VAR_2));


 do {
  VAR_13 = FUNC_3(VAR_9, VAR_7);
  if (VAR_13 & VAR_3) {
   FUNC_0(VAR_9, VAR_0, VAR_1,
     "IMEM Ready after CPU has refilled\n");
   break;
  }

  FUNC_7(100);
 } while (VAR_10--);

 if (!(VAR_13 & VAR_3))
  return 0;

 return 1;
}
