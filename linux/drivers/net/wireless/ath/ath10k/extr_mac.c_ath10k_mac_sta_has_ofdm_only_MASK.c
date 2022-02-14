
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sta {int* supp_rates; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct ieee80211_sta *VAR_2)
{
 return VAR_2->supp_rates[VAR_1] >>
        VAR_0;
}
