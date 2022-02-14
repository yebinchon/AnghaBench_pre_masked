
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct qtnf_vif {int netdev; int vifid; TYPE_1__* mac; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int macid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct qtnf_vif*) ;
 struct qtnf_vif* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_0, struct net_device *VAR_1)
{
 struct qtnf_vif *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_4(VAR_2->mac, 1);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  FUNC_1("VIF%u.%u: failed to stop AP operation in FW\n",
         VAR_2->mac->macid, VAR_2->vifid);

 FUNC_0(VAR_2->netdev);

 return VAR_3;
}
