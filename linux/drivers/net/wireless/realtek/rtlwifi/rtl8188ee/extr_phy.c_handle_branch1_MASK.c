
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0, u16 VAR_1,
      u32 *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 = VAR_5 + 2) {
  VAR_3 = VAR_2[VAR_5];
  VAR_4 = VAR_2[VAR_5+1];
  if (VAR_3 < 0xcdcdcdcd) {
   FUNC_1(VAR_0, VAR_3, VAR_4);
  } else {

   if (VAR_5 >= VAR_1 - 2)
    break;

   if (!FUNC_2(VAR_0, VAR_2[VAR_5])) {

    FUNC_0(VAR_3, VAR_4, VAR_5);
    while (VAR_4 != 0xDEAD &&
           VAR_4 != 0xCDEF &&
           VAR_4 != 0xCDCD && VAR_5 < VAR_1 - 2)
     FUNC_0(VAR_3, VAR_4, VAR_5);
    VAR_5 -= 2;
   } else {


    FUNC_0(VAR_3, VAR_4, VAR_5);
    while (VAR_4 != 0xDEAD &&
           VAR_4 != 0xCDEF &&
           VAR_4 != 0xCDCD && VAR_5 < VAR_1 - 2) {
     FUNC_1(VAR_0, VAR_3, VAR_4);
     FUNC_0(VAR_3, VAR_4, VAR_5);
    }

    while (VAR_4 != 0xDEAD && VAR_5 < VAR_1 - 2)
     FUNC_0(VAR_3, VAR_4, VAR_5);
   }
  }
 }
}
