
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wiphy {int dummy; } ;
struct qtnf_wmac {int macid; } ;
struct TYPE_2__ {scalar_t__ iftype; scalar_t__ current_bss; } ;
struct qtnf_vif {int netdev; TYPE_1__ wdev; int vifid; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int *,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (struct qtnf_vif*,int ) ;
 struct qtnf_vif* FUNC_4 (struct qtnf_wmac*) ;
 struct qtnf_wmac* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static int
FUNC_6(struct wiphy *VAR_4, struct net_device *VAR_5,
  u16 VAR_6)
{
 struct qtnf_wmac *VAR_7 = FUNC_5(VAR_4);
 struct qtnf_vif *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_4(VAR_7);
 if (!VAR_8) {
  FUNC_2("MAC%u: primary VIF is not configured\n", VAR_7->macid);
  return -VAR_0;
 }

 if (VAR_8->wdev.iftype != VAR_3) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_9 = FUNC_3(VAR_8, VAR_6);
 if (VAR_9)
  FUNC_2("VIF%u.%u: failed to disconnect\n",
         VAR_7->macid, VAR_8->vifid);

 if (VAR_8->wdev.current_bss) {
  FUNC_1(VAR_8->netdev);
  FUNC_0(VAR_8->netdev, VAR_6,
          ((void*)0), 0, 1, VAR_2);
 }

out:
 return VAR_9;
}
