
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_hw *VAR_2,
       u32 *VAR_3,
       u16 VAR_4,
  void (*VAR_5)(struct ieee80211_hw *VAR_6, u32 VAR_7, u32 VAR_8))
{



 int VAR_9 = 0;
 u8 VAR_10;
 bool VAR_11 = 1, VAR_12 = 0;

 while ((VAR_9 + 1) < VAR_4) {
  u32 VAR_13 = VAR_3[VAR_9];
  u32 VAR_14 = VAR_3[VAR_9 + 1];

  if (VAR_13 & (FUNC_0(31) | FUNC_0(30))) {
   if (VAR_13 & FUNC_0(31)) {
    VAR_10 = (u8)((VAR_13 & (FUNC_0(29) | FUNC_0(28))) >> 28);
    if (VAR_10 == 3) {
     VAR_11 = 1;
     VAR_12 = 0;
    } else if (VAR_10 == 2) {
     VAR_11 = VAR_12 ? 0 : 1;
    } else {
     if (VAR_12) {
      VAR_11 = 0;
     } else {
      if (FUNC_1(
        VAR_2, VAR_13, VAR_14)) {
       VAR_11 = 1;
       VAR_12 = 1;
      } else {
       VAR_11 = 0;
       VAR_12 = 0;
      }
     }
    }
   } else if (VAR_13 & FUNC_0(30)) {

   }
  } else {
   if (VAR_11)
    VAR_5(VAR_2, VAR_13, VAR_14);
  }
  VAR_9 = VAR_9 + 2;
 }

 return 1;
}
