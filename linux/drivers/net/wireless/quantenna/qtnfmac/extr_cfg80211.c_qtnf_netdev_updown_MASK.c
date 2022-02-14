
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qtnf_vif {int vifid; TYPE_1__* mac; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int macid; } ;


 int FUNC_0 (char*,char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct qtnf_vif*,int) ;
 struct qtnf_vif* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_0, bool VAR_1)
{
 struct qtnf_vif *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_2, VAR_1))
  FUNC_0("failed to send %s command to VIF%u.%u\n",
         VAR_1 ? "UP" : "DOWN", VAR_2->mac->macid, VAR_2->vifid);
}
