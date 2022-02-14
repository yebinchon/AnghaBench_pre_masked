
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cck_and_rw_pagea_lock; } ;
struct TYPE_3__ {int interfaceindex; } ;
struct rtl_priv {TYPE_2__ locks; TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct ieee80211_hw *VAR_0,
           unsigned long *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->rtlhal.interfaceindex == 1)
  FUNC_1(&VAR_2->locks.cck_and_rw_pagea_lock, *VAR_1);
}
