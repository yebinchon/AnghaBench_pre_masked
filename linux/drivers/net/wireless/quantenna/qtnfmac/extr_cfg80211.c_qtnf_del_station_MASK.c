
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct station_del_parameters {int mac; } ;
struct TYPE_4__ {scalar_t__ iftype; } ;
struct qtnf_vif {int vifid; TYPE_1__* mac; int sta_list; TYPE_2__ wdev; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int macid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (struct qtnf_vif*,struct station_del_parameters*) ;
 struct qtnf_vif* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct wiphy *VAR_1, struct net_device *VAR_2,
   struct station_del_parameters *VAR_3)
{
 struct qtnf_vif *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 if (VAR_3->mac &&
     (VAR_4->wdev.iftype == VAR_0) &&
     !FUNC_0(VAR_3->mac) &&
     !FUNC_4(&VAR_4->sta_list, VAR_3->mac))
  return 0;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5)
  FUNC_1("VIF%u.%u: failed to delete STA %pM\n",
         VAR_4->mac->macid, VAR_4->vifid, VAR_3->mac);

 return VAR_5;
}
