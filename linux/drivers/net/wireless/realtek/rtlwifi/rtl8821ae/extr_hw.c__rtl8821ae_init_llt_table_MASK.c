
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static bool FUNC_1(struct ieee80211_hw *VAR_1, u32 VAR_2)
{
 bool VAR_3 = 1;
 u32 VAR_4;
 u32 VAR_5 = VAR_2;
 u32 VAR_6 = VAR_0;

 for (VAR_4 = 0 ; VAR_4 < (VAR_5 - 1) ; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1, VAR_4 , VAR_4 + 1);
  if (!VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_0(VAR_1, (VAR_5 - 1), 0xFF);
 if (!VAR_3)
  return VAR_3;

 for (VAR_4 = VAR_5 ; VAR_4 < VAR_6 ; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1, VAR_4, (VAR_4 + 1));
  if (!VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_0(VAR_1, VAR_6,
          VAR_5);
 if (!VAR_3)
  return VAR_3;

 return VAR_3;
}
