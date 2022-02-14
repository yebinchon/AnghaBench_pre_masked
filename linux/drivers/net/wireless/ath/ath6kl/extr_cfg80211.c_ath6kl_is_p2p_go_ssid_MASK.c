
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ const* variable; } ;
struct TYPE_4__ {TYPE_1__ probe_resp; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const u8 *VAR_1, size_t VAR_2)
{
 const struct ieee80211_mgmt *VAR_3;
 VAR_3 = (const struct ieee80211_mgmt *) VAR_1;


 if (VAR_1 + VAR_2 >= &VAR_3->u.probe_resp.variable[1] &&
     (VAR_3->u.probe_resp.variable[1] > VAR_0)) {
  return 1;
 }

 return 0;
}
