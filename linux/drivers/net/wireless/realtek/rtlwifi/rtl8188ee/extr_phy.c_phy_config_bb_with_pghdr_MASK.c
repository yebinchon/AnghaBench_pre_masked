
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
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct ieee80211_hw *VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_3(VAR_5);
 int VAR_8;
 u32 *VAR_9;
 u16 VAR_10;
 u32 VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

 VAR_10 = VAR_4;
 VAR_9 = VAR_3;

 if (VAR_6 == VAR_0) {
  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8 = VAR_8 + 3) {
   VAR_11 = VAR_9[VAR_8];
   VAR_12 = VAR_9[VAR_8+1];
   VAR_13 = VAR_9[VAR_8+2];

   if (VAR_11 < 0xcdcdcdcd) {
    if (VAR_9[VAR_8] == 0xfe)
     FUNC_2(50);
    else if (VAR_9[VAR_8] == 0xfd)
     FUNC_2(5);
    else if (VAR_9[VAR_8] == 0xfc)
     FUNC_2(1);
    else if (VAR_9[VAR_8] == 0xfb)
     FUNC_5(50);
    else if (VAR_9[VAR_8] == 0xfa)
     FUNC_5(5);
    else if (VAR_9[VAR_8] == 0xf9)
     FUNC_5(1);

    FUNC_4(VAR_5, VAR_9[VAR_8],
          VAR_9[VAR_8 + 1],
          VAR_9[VAR_8 + 2]);
    continue;
   } else {
    if (!FUNC_1(VAR_5,
            VAR_9[VAR_8])) {

        VAR_8 += 2;

        if (VAR_8 >= VAR_10 - 2)
     break;

        VAR_11 = VAR_9[VAR_8];
        VAR_12 = VAR_9[VAR_8+1];
        VAR_13 = VAR_9[VAR_8+2];
        while (VAR_12 != 0xDEAD &&
        VAR_8 < VAR_10 - 5) {
     VAR_8 += 3;
     VAR_11 = VAR_9[VAR_8];
     VAR_12 = VAR_9[VAR_8+1];
     VAR_13 = VAR_9[VAR_8+2];
        }
    }
   }
  }
 } else {
  FUNC_0(VAR_7, VAR_1, VAR_2,
    "configtype != BaseBand_Config_PHY_REG\n");
 }
 return 1;
}
