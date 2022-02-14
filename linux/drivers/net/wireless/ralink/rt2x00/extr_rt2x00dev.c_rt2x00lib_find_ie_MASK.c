
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ variable; } ;
struct TYPE_4__ {TYPE_1__ beacon; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;



__attribute__((used)) static u8 *FUNC_0(u8 *VAR_0, unsigned int VAR_1, u8 VAR_2)
{
 struct ieee80211_mgmt *VAR_3 = (void *)VAR_0;
 u8 *VAR_4, *VAR_5;

 VAR_4 = (u8 *)VAR_3->u.beacon.variable;
 VAR_5 = VAR_0 + VAR_1;
 while (VAR_4 < VAR_5) {
  if (VAR_4 + 2 + VAR_4[1] > VAR_5)
   return ((void*)0);

  if (VAR_4[0] == VAR_2)
   return VAR_4;

  VAR_4 += 2 + VAR_4[1];
 }

 return ((void*)0);
}
