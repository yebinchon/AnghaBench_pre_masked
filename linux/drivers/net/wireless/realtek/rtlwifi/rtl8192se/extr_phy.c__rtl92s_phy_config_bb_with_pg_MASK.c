
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,int ,int ,int ) ;
 int * VAR_2 ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_3,
       u8 VAR_4)
{
 int VAR_5;
 u32 *VAR_6;
 u16 VAR_7;

 VAR_7 = VAR_1;
 VAR_6 = VAR_2;

 if (VAR_4 == VAR_0) {
  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5 = VAR_5 + 3) {
   FUNC_2(VAR_6[VAR_5]);

   FUNC_0(VAR_3,
     VAR_6[VAR_5],
     VAR_6[VAR_5 + 1],
     VAR_6[VAR_5 + 2]);
   FUNC_1(VAR_3, VAR_6[VAR_5],
     VAR_6[VAR_5 + 1],
     VAR_6[VAR_5 + 2]);
  }
 }

 return 1;
}
