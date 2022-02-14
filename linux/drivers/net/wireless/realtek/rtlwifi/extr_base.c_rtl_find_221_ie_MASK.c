
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct octet_string {int length; int* octet; } ;
struct TYPE_3__ {scalar_t__ variable; } ;
struct TYPE_4__ {TYPE_1__ beacon; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_hw*,struct octet_string) ;

__attribute__((used)) static bool FUNC_1(struct ieee80211_hw *VAR_0, u8 *VAR_1,
  unsigned int VAR_2)
{
 struct ieee80211_mgmt *VAR_3 = (void *)VAR_1;
 struct octet_string VAR_4;
 u8 *VAR_5, *VAR_6;

 VAR_5 = (u8 *)VAR_3->u.beacon.variable;
 VAR_6 = VAR_1 + VAR_2;
 while (VAR_5 < VAR_6) {
  if (VAR_5[0] == 221) {
   VAR_4.length = VAR_5[1];
   VAR_4.octet = &VAR_5[2];
   if (FUNC_0(VAR_0, VAR_4))
    return 1;
  }

  if (VAR_5 + 2 + VAR_5[1] > VAR_6)
   return 0;

  VAR_5 += 2 + VAR_5[1];
 }
 return 0;
}
