
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtw_chip_info {int dummy; } ;
struct ieee80211_hw {TYPE_1__* wiphy; } ;
struct TYPE_2__ {int * bands; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_2,
         struct rtw_chip_info *VAR_3)
{
 FUNC_0(VAR_2->wiphy->bands[VAR_0]);
 FUNC_0(VAR_2->wiphy->bands[VAR_1]);
}
