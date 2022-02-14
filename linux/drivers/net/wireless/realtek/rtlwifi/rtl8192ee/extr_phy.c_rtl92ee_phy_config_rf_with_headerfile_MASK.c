
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;




 int* VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int) ;
 int FUNC_4 (struct ieee80211_hw*,int,int) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

bool FUNC_6(struct ieee80211_hw *VAR_6,
        enum radio_path VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_5(VAR_6);
 int VAR_9;
 u32 *VAR_10;
 u16 VAR_11;
 u32 VAR_12 = 0, VAR_13 = 0;

 switch (VAR_7) {
 case 131:
  VAR_11 = VAR_3;
  VAR_10 = VAR_2;
  FUNC_1(VAR_8, VAR_0, VAR_1,
    "Radio_A:RTL8192EE_RADIOA_ARRAY %d\n" , VAR_11);
  FUNC_1(VAR_8, VAR_0, VAR_1, "Radio No %x\n", VAR_7);
  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9 = VAR_9 + 2) {
   VAR_12 = VAR_10[VAR_9];
   VAR_13 = VAR_10[VAR_9+1];
   if (VAR_12 < 0xcdcdcdcd) {
    FUNC_3(VAR_6, VAR_12, VAR_13);
    continue;
   } else {

    if (VAR_9 >= VAR_11 - 2)
     break;

    if (!FUNC_2(VAR_6 , VAR_10[VAR_9])) {

     FUNC_0(VAR_12, VAR_13, VAR_9);
     while (VAR_13 != 0xDEAD &&
            VAR_13 != 0xCDEF &&
            VAR_13 != 0xCDCD && VAR_9 < VAR_11 - 2) {
      FUNC_0(VAR_12, VAR_13, VAR_9);
     }
     VAR_9 -= 2;
    } else {



     FUNC_0(VAR_12, VAR_13, VAR_9);
     while (VAR_13 != 0xDEAD &&
            VAR_13 != 0xCDEF &&
            VAR_13 != 0xCDCD && VAR_9 < VAR_11 - 2) {
      FUNC_3(VAR_6,
            VAR_12,
            VAR_13);
      FUNC_0(VAR_12, VAR_13, VAR_9);
     }

     while (VAR_13 != 0xDEAD && VAR_9 < VAR_11 - 2)
      FUNC_0(VAR_12, VAR_13, VAR_9);
    }
   }
  }
  break;

 case 130:
  VAR_11 = VAR_5;
  VAR_10 = VAR_4;
  FUNC_1(VAR_8, VAR_0, VAR_1,
    "Radio_A:RTL8192EE_RADIOB_ARRAY %d\n" , VAR_11);
  FUNC_1(VAR_8, VAR_0, VAR_1, "Radio No %x\n", VAR_7);
  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9 = VAR_9 + 2) {
   VAR_12 = VAR_10[VAR_9];
   VAR_13 = VAR_10[VAR_9+1];
   if (VAR_12 < 0xcdcdcdcd) {
    FUNC_4(VAR_6, VAR_12, VAR_13);
    continue;
   } else {

    if (VAR_9 >= VAR_11 - 2)
     break;

    if (!FUNC_2(VAR_6 , VAR_10[VAR_9])) {

     FUNC_0(VAR_12, VAR_13, VAR_9);
     while (VAR_13 != 0xDEAD &&
            VAR_13 != 0xCDEF &&
            VAR_13 != 0xCDCD && VAR_9 < VAR_11 - 2) {
      FUNC_0(VAR_12, VAR_13, VAR_9);
     }
     VAR_9 -= 2;
    } else {



     FUNC_0(VAR_12, VAR_13, VAR_9);
     while (VAR_13 != 0xDEAD &&
            VAR_13 != 0xCDEF &&
            VAR_13 != 0xCDCD && VAR_9 < VAR_11 - 2) {
      FUNC_4(VAR_6,
            VAR_12,
            VAR_13);
      FUNC_0(VAR_12, VAR_13, VAR_9);
     }

     while (VAR_13 != 0xDEAD && VAR_9 < VAR_11 - 2)
      FUNC_0(VAR_12, VAR_13, VAR_9);
    }
   }
  }
  break;
 case 129:
 case 128:
  break;
 }
 return 1;
}
