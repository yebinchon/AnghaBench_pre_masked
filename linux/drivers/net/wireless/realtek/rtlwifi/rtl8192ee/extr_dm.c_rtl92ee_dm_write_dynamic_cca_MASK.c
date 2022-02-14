
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee80211_hw {int dummy; } ;
struct dynamic_primary_cca {scalar_t__ mf_state; } ;
struct TYPE_2__ {struct dynamic_primary_cca primarycca; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_1,
      u8 VAR_2)
{
 struct dynamic_primary_cca *VAR_3 = &FUNC_1(VAR_1)->primarycca;

 if (VAR_3->mf_state != VAR_2)
  FUNC_2(VAR_1, VAR_0, FUNC_0(8) | FUNC_0(7),
         VAR_2);

 VAR_3->mf_state = VAR_2;
}
