
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ category; } ;
struct TYPE_4__ {TYPE_1__ action; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;
struct cw1200_common {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cw1200_common *VAR_1,
       struct sk_buff *VAR_2)
{
 struct ieee80211_mgmt *VAR_3 = (void *)VAR_2->data;


 if (VAR_3->u.action.category == VAR_0)
  return 1;

 return 0;
}
