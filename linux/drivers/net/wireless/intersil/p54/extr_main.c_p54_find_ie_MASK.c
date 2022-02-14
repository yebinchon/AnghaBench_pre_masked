
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int* data; int len; } ;
struct TYPE_3__ {scalar_t__ variable; } ;
struct TYPE_4__ {TYPE_1__ beacon; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;
typedef int mgmt ;



u8 *FUNC_0(struct sk_buff *VAR_0, u8 VAR_1)
{
 struct ieee80211_mgmt *VAR_2 = (void *)VAR_0->data;
 u8 *VAR_3, *VAR_4;

 if (VAR_0->len <= sizeof(VAR_2))
  return ((void*)0);

 VAR_3 = (u8 *)VAR_2->u.beacon.variable;
 VAR_4 = VAR_0->data + VAR_0->len;
 while (VAR_3 < VAR_4) {
  if (VAR_3 + 2 + VAR_3[1] > VAR_4)
   return ((void*)0);

  if (VAR_3[0] == VAR_1)
   return VAR_3;

  VAR_3 += 2 + VAR_3[1];
 }
 return ((void*)0);
}
