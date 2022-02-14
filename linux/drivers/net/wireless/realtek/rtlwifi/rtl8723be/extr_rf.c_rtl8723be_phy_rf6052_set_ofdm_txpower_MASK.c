
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*,int,int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (struct ieee80211_hw*,int,scalar_t__*) ;
 int FUNC_2 (struct ieee80211_hw*,int,int*,scalar_t__*) ;
 int FUNC_3 (struct ieee80211_hw*,int*,int*,int*,int,scalar_t__*,scalar_t__*) ;

void FUNC_4(struct ieee80211_hw *VAR_0,
        u8 *VAR_1,
        u8 *VAR_2,
        u8 *VAR_3, u8 VAR_4)
{
 u32 VAR_5[2], VAR_6[2], VAR_7[2];
 u8 VAR_8;
 u8 VAR_9;
 u32 VAR_10;

 FUNC_3(VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_4,
         &VAR_6[0], &VAR_7[0]);

 FUNC_2(VAR_0, 1, &VAR_9, &VAR_10);

 for (VAR_8 = 0; VAR_8 < 6; VAR_8++) {
  FUNC_0(VAR_0,
             VAR_4, VAR_8,
             &VAR_6[0],
             &VAR_7[0],
             &VAR_5[0]);
  if (VAR_9 == 1) {
   VAR_5[0] += VAR_10;
   VAR_5[1] += VAR_10;
  } else if (VAR_9 == 2) {
   VAR_5[0] -= VAR_10;
   VAR_5[1] -= VAR_10;
  }
  FUNC_1(VAR_0, VAR_8, &VAR_5[0]);
 }
}
