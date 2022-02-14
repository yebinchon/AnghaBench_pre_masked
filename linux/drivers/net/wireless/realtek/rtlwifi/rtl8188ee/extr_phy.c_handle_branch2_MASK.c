
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_3, u16 VAR_4,
      u32 *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_3(VAR_3);
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 = VAR_9 + 2) {
  VAR_7 = VAR_5[VAR_9];
  VAR_8 = VAR_5[VAR_9+1];
  if (VAR_7 < 0xCDCDCDCD) {
   FUNC_4(VAR_3, VAR_5[VAR_9], VAR_2,
          VAR_5[VAR_9 + 1]);
   FUNC_5(1);
   continue;
  } else {

   if (VAR_9 >= VAR_4 - 2)
    break;

   if (!FUNC_2(VAR_3, VAR_5[VAR_9])) {

    FUNC_0(VAR_7, VAR_8, VAR_9);
    while (VAR_8 != 0xDEAD &&
           VAR_8 != 0xCDEF &&
           VAR_8 != 0xCDCD && VAR_9 < VAR_4 - 2)
     FUNC_0(VAR_7, VAR_8, VAR_9);
    VAR_9 -= 2;
   } else {


    FUNC_0(VAR_7, VAR_8, VAR_9);
    while (VAR_8 != 0xDEAD &&
           VAR_8 != 0xCDEF &&
           VAR_8 != 0xCDCD && VAR_9 < VAR_4 - 2) {
     FUNC_4(VAR_3, VAR_5[VAR_9],
            VAR_2,
            VAR_5[VAR_9 + 1]);
     FUNC_5(1);
     FUNC_0(VAR_7, VAR_8, VAR_9);
    }

    while (VAR_8 != 0xDEAD && VAR_9 < VAR_4 - 2)
     FUNC_0(VAR_7, VAR_8, VAR_9);
   }
  }
  FUNC_1(VAR_6, VAR_0, VAR_1,
    "The agctab_array_table[0] is %x Rtl818EEPHY_REGArray[1] is %x\n",
    VAR_5[VAR_9], VAR_5[VAR_9 + 1]);
 }
}
