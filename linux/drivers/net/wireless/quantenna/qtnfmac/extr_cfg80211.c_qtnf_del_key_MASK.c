
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct qtnf_vif {int vifid; TYPE_1__* mac; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int macid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ,int) ;
 int FUNC_2 (struct qtnf_vif*,int ,int,int const*) ;
 struct qtnf_vif* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_1, struct net_device *VAR_2,
   u8 VAR_3, bool VAR_4, const u8 *VAR_5)
{
 struct qtnf_vif *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5);
 if (VAR_7) {
  if (VAR_7 == -VAR_0) {
   FUNC_0("VIF%u.%u: key index %d out of bounds\n",
     VAR_6->mac->macid, VAR_6->vifid, VAR_3);
  } else {
   FUNC_1("VIF%u.%u: failed to delete key: idx=%u pw=%u\n",
          VAR_6->mac->macid, VAR_6->vifid,
          VAR_3, VAR_4);
  }
 }

 return VAR_7;
}
