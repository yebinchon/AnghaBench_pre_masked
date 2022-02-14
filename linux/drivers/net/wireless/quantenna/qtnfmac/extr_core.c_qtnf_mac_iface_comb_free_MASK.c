
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n_if_comb; struct ieee80211_iface_combination* if_comb; } ;
struct qtnf_wmac {TYPE_1__ macinfo; } ;
struct ieee80211_iface_combination {struct ieee80211_iface_combination* limits; } ;


 int FUNC_0 (struct ieee80211_iface_combination*) ;

void FUNC_1(struct qtnf_wmac *VAR_0)
{
 struct ieee80211_iface_combination *VAR_1;
 int VAR_2;

 if (VAR_0->macinfo.if_comb) {
  for (VAR_2 = 0; VAR_2 < VAR_0->macinfo.n_if_comb; VAR_2++) {
   VAR_1 = &VAR_0->macinfo.if_comb[VAR_2];
   FUNC_0(VAR_1->limits);
   VAR_1->limits = ((void*)0);
  }

  FUNC_0(VAR_0->macinfo.if_comb);
  VAR_0->macinfo.if_comb = ((void*)0);
 }
}
