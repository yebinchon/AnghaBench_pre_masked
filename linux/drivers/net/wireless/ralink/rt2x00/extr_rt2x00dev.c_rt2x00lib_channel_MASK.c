
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int hw_value; int max_power; int max_antenna_gain; int band; int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_channel *VAR_2,
         const int VAR_3, const int VAR_4,
         const int VAR_5)
{

 VAR_2->band = VAR_3 <= 14 ? VAR_0 : VAR_1;
 VAR_2->center_freq = FUNC_0(VAR_3,
           VAR_2->band);
 VAR_2->hw_value = VAR_5;
 VAR_2->max_power = VAR_4;
 VAR_2->max_antenna_gain = 0xff;
}
