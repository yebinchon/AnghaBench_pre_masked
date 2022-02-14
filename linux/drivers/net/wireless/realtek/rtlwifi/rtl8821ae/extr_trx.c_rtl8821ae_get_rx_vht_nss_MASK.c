
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ieee80211_hw {int dummy; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static u8 FUNC_1(struct ieee80211_hw *VAR_4, __le32 *VAR_5)
{
 u8 VAR_6 = 0;
 u8 VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_5);
 if ((VAR_6 >= VAR_0) &&
     (VAR_6 <= VAR_1))
  VAR_7 = 1;
 else if ((VAR_6 >= VAR_2) &&
   (VAR_6 <= VAR_3))
  VAR_7 = 2;

 return VAR_7;
}
