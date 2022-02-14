
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*,scalar_t__,int*) ;
 int FUNC_1 (struct ieee80211_hw*,scalar_t__*,int,int,int*,int*) ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (int*,int,int) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_4, u8 VAR_5, u8 *VAR_6)
{
 u8 VAR_7 = VAR_3;

 bool VAR_8 = 1;

 u8 VAR_9, VAR_10 = 0;
 u16 VAR_11 = 0;
 u8 VAR_12[8];

 if (VAR_6 == ((void*)0))
  return 0;
 if (VAR_5 > 15)
  return 0;

 FUNC_3(VAR_6, 0xff, VAR_1 * sizeof(u8));
 FUNC_3(VAR_12, 0xff, VAR_1 * sizeof(u8));

 while (VAR_8 && (VAR_11 < VAR_0)) {
  if (VAR_7 & VAR_3) {
   if (FUNC_0(VAR_4, VAR_11, &VAR_9)
       && (VAR_9 != 0xFF))
    FUNC_1(VAR_4, &VAR_11,
            VAR_9, VAR_5,
            VAR_12, &VAR_7);
   else
    VAR_8 = 0;
  } else if (VAR_7 & VAR_2) {
   FUNC_2(0, VAR_12, VAR_6);
   VAR_11 = VAR_11 + (VAR_10 * 2) + 1;
   VAR_7 = VAR_3;
  }

 }

 if ((VAR_6[0] == 0xff) && (VAR_6[1] == 0xff) &&
     (VAR_6[2] == 0xff) && (VAR_6[3] == 0xff) &&
     (VAR_6[4] == 0xff) && (VAR_6[5] == 0xff) &&
     (VAR_6[6] == 0xff) && (VAR_6[7] == 0xff))
  return 0;
 else
  return 1;

}
