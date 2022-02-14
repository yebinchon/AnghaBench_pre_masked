
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tkip_sc {int iv16; int iv32; } ;
struct TYPE_2__ {int iv16; int iv32; } ;
struct ieee80211_key_seq {TYPE_1__ tkip; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tkip_sc *VAR_0,
       struct ieee80211_key_seq *VAR_1)
{
 VAR_1->tkip.iv32 = FUNC_1(VAR_0->iv32);
 VAR_1->tkip.iv16 = FUNC_0(VAR_0->iv16);
}
