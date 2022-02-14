
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_key_pn {TYPE_2__* q; } ;
struct TYPE_3__ {int * pn; } ;
struct ieee80211_key_seq {TYPE_1__ ccmp; } ;
struct ieee80211_key_conf {int dummy; } ;
struct TYPE_4__ {int ** pn; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_key_conf*,int,struct ieee80211_key_seq*) ;
 scalar_t__ FUNC_1 (int const*,int const*,int ) ;

__attribute__((used)) static const u8 *FUNC_2(struct ieee80211_key_conf *VAR_1,
         struct iwl_mvm_key_pn *VAR_2,
         struct ieee80211_key_seq *VAR_3,
         int VAR_4, int VAR_5)
{
 const u8 *VAR_6 = VAR_3->ccmp.pn;
 int VAR_7;


 FUNC_0(VAR_1, VAR_4, VAR_3);


 for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++) {
  const u8 *VAR_8 = VAR_2->q[VAR_7].pn[VAR_4];

  if (FUNC_1(VAR_6, VAR_8, VAR_0) <= 0)
   VAR_6 = VAR_8;
 }

 return VAR_6;
}
