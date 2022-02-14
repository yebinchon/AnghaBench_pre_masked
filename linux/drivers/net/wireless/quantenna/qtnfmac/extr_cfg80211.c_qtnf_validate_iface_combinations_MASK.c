
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct qtnf_wmac {struct qtnf_vif* iflist; } ;
struct TYPE_2__ {size_t iftype; } ;
struct qtnf_vif {TYPE_1__ wdev; } ;
struct iface_combination_params {int num_different_channels; int * iftype_num; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wiphy*,struct iface_combination_params*) ;
 struct qtnf_wmac* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int
FUNC_2(struct wiphy *VAR_3,
     struct qtnf_vif *VAR_4,
     enum nl80211_iftype VAR_5)
{
 struct qtnf_wmac *VAR_6;
 struct qtnf_vif *VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 struct iface_combination_params VAR_10 = {
  .num_different_channels = 1,
 };

 VAR_6 = FUNC_1(VAR_3);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_7 = &VAR_6->iflist[VAR_8];
  if (VAR_7->wdev.iftype != VAR_1)
   VAR_10.iftype_num[VAR_7->wdev.iftype]++;
 }

 if (VAR_4) {
  VAR_10.iftype_num[VAR_5]++;
  VAR_10.iftype_num[VAR_4->wdev.iftype]--;
 } else {
  VAR_10.iftype_num[VAR_5]++;
 }

 VAR_9 = FUNC_0(VAR_3, &VAR_10);

 return VAR_9;
}
