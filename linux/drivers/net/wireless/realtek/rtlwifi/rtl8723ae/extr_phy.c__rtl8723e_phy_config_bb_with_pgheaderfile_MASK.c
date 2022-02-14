
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct ieee80211_hw *VAR_5,
            u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;
 u32 *VAR_9;
 u16 VAR_10;

 VAR_10 = VAR_4;
 VAR_9 = VAR_3;

 if (VAR_6 == VAR_0) {
  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8 = VAR_8 + 3) {
   if (VAR_9[VAR_8] == 0xfe)
    FUNC_1(50);
   else if (VAR_9[VAR_8] == 0xfd)
    FUNC_1(5);
   else if (VAR_9[VAR_8] == 0xfc)
    FUNC_1(1);
   else if (VAR_9[VAR_8] == 0xfb)
    FUNC_4(50);
   else if (VAR_9[VAR_8] == 0xfa)
    FUNC_4(5);
   else if (VAR_9[VAR_8] == 0xf9)
    FUNC_4(1);

   FUNC_3(VAR_5,
      VAR_9[VAR_8],
      VAR_9[VAR_8 + 1],
      VAR_9[VAR_8 + 2]);
  }
 } else {
  FUNC_0(VAR_7, VAR_1, VAR_2,
    "configtype != BaseBand_Config_PHY_REG\n");
 }
 return 1;
}
