
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct rtl_hal {int current_bandtype; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*,int ,int ) ;
 scalar_t__* VAR_2 ;
 struct rtl_hal* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct ieee80211_hw *VAR_3)
{
 struct rtl_hal *VAR_4 = FUNC_1(FUNC_2(VAR_3));
 u8 VAR_5 = 0;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4->current_bandtype,
       VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  if (VAR_6 == VAR_2[VAR_5])
   break;

 return VAR_5;
}
