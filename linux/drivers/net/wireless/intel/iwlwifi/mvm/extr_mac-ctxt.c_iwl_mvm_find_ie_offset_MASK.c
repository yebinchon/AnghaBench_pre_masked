
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u8 ;
typedef int u32 ;
struct TYPE_3__ {int const* variable; } ;
struct TYPE_4__ {TYPE_1__ beacon; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;


 scalar_t__ FUNC_0 (int) ;
 int const* FUNC_1 (int const,int const*,int) ;

__attribute__((used)) static u32 FUNC_2(u8 *VAR_0, u8 VAR_1, u32 VAR_2)
{
 struct ieee80211_mgmt *VAR_3 = (void *)VAR_0;
 const u8 *VAR_4;

 if (FUNC_0(VAR_2 <= (VAR_3->u.beacon.variable - VAR_0)))
  return 0;

 VAR_2 -= VAR_3->u.beacon.variable - VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_3->u.beacon.variable, VAR_2);
 if (!VAR_4)
  return 0;

 return VAR_4 - VAR_0;
}
