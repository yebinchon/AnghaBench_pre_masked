
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int iftype; } ;
struct brcmf_if {TYPE_1__* vif; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_2__ {struct wireless_dev wdev; } ;



enum nl80211_iftype FUNC_0(struct brcmf_if *VAR_0)
{
 struct wireless_dev *VAR_1 = &VAR_0->vif->wdev;

 return VAR_1->iftype;
}
