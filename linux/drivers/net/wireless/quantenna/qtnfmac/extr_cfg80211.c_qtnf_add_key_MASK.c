
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct qtnf_vif {int vifid; TYPE_1__* mac; } ;
struct net_device {int dummy; } ;
struct key_params {int cipher; } ;
struct TYPE_2__ {int macid; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int) ;
 int FUNC_1 (struct qtnf_vif*,int ,int,int const*,struct key_params*) ;
 struct qtnf_vif* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0, struct net_device *VAR_1,
   u8 VAR_2, bool VAR_3, const u8 *VAR_4,
   struct key_params *VAR_5)
{
 struct qtnf_vif *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  FUNC_0("VIF%u.%u: failed to add key: cipher=%x idx=%u pw=%u\n",
         VAR_6->mac->macid, VAR_6->vifid, VAR_5->cipher, VAR_2,
         VAR_3);

 return VAR_7;
}
