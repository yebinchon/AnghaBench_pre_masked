
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_hal {scalar_t__ oem_id; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1,
      u16 VAR_2,
      u32 *VAR_3)
{
 struct rtl_hal *VAR_4 = FUNC_3(FUNC_4(VAR_1));
 u32 VAR_5, VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 = VAR_7 + 2) {
  VAR_5 = VAR_3[VAR_7];
  VAR_6 = VAR_3[VAR_7+1];
  if (VAR_5 < 0xcdcdcdcd) {
   FUNC_1(VAR_1, VAR_5, VAR_6);
  } else {

   if (VAR_7 >= VAR_2 - 2)
    break;

   if (!FUNC_2(VAR_1, VAR_3[VAR_7])) {

    FUNC_0(VAR_5, VAR_6, VAR_7);
    while (VAR_6 != 0xDEAD &&
           VAR_6 != 0xCDEF &&
           VAR_6 != 0xCDCD &&
           VAR_7 < VAR_2 - 2) {
     FUNC_0(VAR_5, VAR_6, VAR_7);
    }
    VAR_7 -= 2;
   } else {


    FUNC_0(VAR_5, VAR_6, VAR_7);
    while (VAR_6 != 0xDEAD &&
           VAR_6 != 0xCDEF &&
           VAR_6 != 0xCDCD &&
           VAR_7 < VAR_2 - 2) {
     FUNC_1(VAR_1, VAR_5, VAR_6);
     FUNC_0(VAR_5, VAR_6, VAR_7);
    }

    while (VAR_6 != 0xDEAD &&
           VAR_7 < VAR_2 - 2)
     FUNC_0(VAR_5, VAR_6, VAR_7);
   }
  }
 }

 if (VAR_4->oem_id == VAR_0)
  FUNC_1(VAR_1, 0x52, 0x7E4BD);
}
