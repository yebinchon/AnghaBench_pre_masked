
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_hw *VAR_6,
       u8 VAR_7)
{
 u32 *VAR_8;
 u16 VAR_9;

 if (VAR_7 == VAR_1) {
  VAR_9 = VAR_5;
  VAR_8 = VAR_4;
  FUNC_0(VAR_6, VAR_9, VAR_8);
 } else if (VAR_7 == VAR_0) {
  VAR_9 = VAR_3;
  VAR_8 = VAR_2;
  FUNC_1(VAR_6, VAR_9, VAR_8);
 }
 return 1;
}
