
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (struct ieee80211_hw*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_7, u8 VAR_8)
{
 int VAR_9;
 u32 *VAR_10;
 u32 *VAR_11;
 u16 VAR_12, VAR_13;

 VAR_13 = VAR_0;
 VAR_11 = VAR_5;

 VAR_12 = VAR_4;
 VAR_10 = VAR_6;

 if (VAR_8 == VAR_2) {
  for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9 = VAR_9 + 2) {
   FUNC_1(VAR_10[VAR_9]);


   FUNC_2(1);

   FUNC_0(VAR_7, VAR_10[VAR_9], VAR_3,
     VAR_10[VAR_9 + 1]);
  }
 } else if (VAR_8 == VAR_1) {
  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9 = VAR_9 + 2) {
   FUNC_0(VAR_7, VAR_11[VAR_9], VAR_3,
     VAR_11[VAR_9 + 1]);


   FUNC_2(1);
  }
 }

 return 1;
}
