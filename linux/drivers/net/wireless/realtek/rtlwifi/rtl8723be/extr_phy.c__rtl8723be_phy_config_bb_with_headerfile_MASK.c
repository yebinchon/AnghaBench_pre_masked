
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ieee80211_hw*,int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static bool FUNC_1(struct ieee80211_hw *VAR_8,
           u8 VAR_9)
{

 if (VAR_9 == VAR_1)
  return FUNC_0(VAR_8,
    VAR_4,
    VAR_5,
    VAR_6);
 else if (VAR_9 == VAR_0)
  return FUNC_0(VAR_8,
    VAR_2,
    VAR_3,
    VAR_7);

 return 0;
}
