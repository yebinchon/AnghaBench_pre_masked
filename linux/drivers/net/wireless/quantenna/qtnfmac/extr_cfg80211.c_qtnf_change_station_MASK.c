
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_parameters {int dummy; } ;
struct qtnf_vif {int vifid; TYPE_1__* mac; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int macid; } ;


 int FUNC_0 (char*,int ,int ,int const*) ;
 int FUNC_1 (struct qtnf_vif*,int const*,struct station_parameters*) ;
 struct qtnf_vif* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct wiphy *VAR_0, struct net_device *VAR_1,
      const u8 *VAR_2, struct station_parameters *VAR_3)
{
 struct qtnf_vif *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_0("VIF%u.%u: failed to change STA %pM\n",
         VAR_4->mac->macid, VAR_4->vifid, VAR_2);

 return VAR_5;
}
