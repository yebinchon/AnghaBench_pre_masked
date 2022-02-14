
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int* VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static bool FUNC_7(struct ieee80211_hw *VAR_9,
     u8 VAR_10)
{
 int VAR_11;
 u32 *VAR_12;
 u16 VAR_13;
 struct rtl_priv *VAR_14 = FUNC_4(VAR_9);
 u32 VAR_15 = 0, VAR_16 = 0;

 if (VAR_10 == VAR_1) {
  VAR_13 = VAR_8;
  VAR_12 = VAR_7;

  for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11 = VAR_11 + 2) {
   VAR_15 = VAR_12[VAR_11];
   VAR_16 = VAR_12[VAR_11+1];
   if (VAR_15 < 0xcdcdcdcd) {
    FUNC_3(VAR_9, VAR_15, VAR_16);
   } else {

    if (VAR_11 >= VAR_13 - 2)
     break;

    if (!FUNC_2(VAR_9 , VAR_12[VAR_11])) {

     FUNC_0(VAR_15, VAR_16, VAR_11);
     while (VAR_16 != 0xDEAD &&
            VAR_16 != 0xCDEF &&
            VAR_16 != 0xCDCD && VAR_11 < VAR_13 - 2) {
      FUNC_0(VAR_15, VAR_16, VAR_11);
     }
     VAR_11 -= 2;
    } else {



     FUNC_0(VAR_15, VAR_16, VAR_11);
     while (VAR_16 != 0xDEAD &&
            VAR_16 != 0xCDEF &&
            VAR_16 != 0xCDCD && VAR_11 < VAR_13 - 2) {
      FUNC_3(VAR_9, VAR_15,
               VAR_16);
      FUNC_0(VAR_15, VAR_16, VAR_11);
     }

     while (VAR_16 != 0xDEAD && VAR_11 < VAR_13 - 2)
      FUNC_0(VAR_15, VAR_16, VAR_11);
    }
   }
  }
 } else if (VAR_10 == VAR_0) {
  VAR_13 = VAR_6;
  VAR_12 = VAR_5;

  for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11 = VAR_11 + 2) {
   VAR_15 = VAR_12[VAR_11];
   VAR_16 = VAR_12[VAR_11+1];
   if (VAR_15 < 0xCDCDCDCD) {
    FUNC_5(VAR_9, VAR_12[VAR_11], VAR_4,
           VAR_12[VAR_11 + 1]);
    FUNC_6(1);
    continue;
      } else{

    if (VAR_11 >= VAR_13 - 2)
     break;

    if (!FUNC_2(VAR_9 , VAR_12[VAR_11])) {

     FUNC_0(VAR_15, VAR_16, VAR_11);
     while (VAR_16 != 0xDEAD &&
            VAR_16 != 0xCDEF &&
            VAR_16 != 0xCDCD &&
            VAR_11 < VAR_13 - 2) {
      FUNC_0(VAR_15, VAR_16, VAR_11);
     }
     VAR_11 -= 2;
    } else {



     FUNC_0(VAR_15, VAR_16, VAR_11);
     while (VAR_16 != 0xDEAD &&
            VAR_16 != 0xCDEF &&
            VAR_16 != 0xCDCD &&
            VAR_11 < VAR_13 - 2) {
      FUNC_5(VAR_9,
             VAR_12[VAR_11],
             VAR_4,
             VAR_12[VAR_11 + 1]);
      FUNC_6(1);
      FUNC_0(VAR_15 , VAR_16 , VAR_11);
     }

     while (VAR_16 != 0xDEAD &&
            VAR_11 < VAR_13 - 2) {
      FUNC_0(VAR_15 , VAR_16 , VAR_11);
     }
    }
   }
   FUNC_1(VAR_14, VAR_2, VAR_3,
     "The agctab_array_table[0] is %x Rtl818EEPHY_REGArray[1] is %x\n",
     VAR_12[VAR_11],
     VAR_12[VAR_11 + 1]);
  }
 }
 return 1;
}
