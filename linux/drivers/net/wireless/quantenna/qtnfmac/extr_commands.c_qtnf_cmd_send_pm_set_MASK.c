
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {int vifid; TYPE_1__* mac; } ;
struct qtnf_bus {int dummy; } ;
struct qlink_cmd_pm_set {int pm_standby_timer; int pm_mode; } ;
struct TYPE_2__ {int macid; struct qtnf_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qtnf_bus*) ;
 int FUNC_2 (struct qtnf_bus*) ;
 struct sk_buff* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct qtnf_bus*,struct sk_buff*) ;

int FUNC_5(const struct qtnf_vif *VAR_2, u8 VAR_3, int VAR_4)
{
 struct qtnf_bus *VAR_5 = VAR_2->mac->bus;
 struct sk_buff *VAR_6;
 struct qlink_cmd_pm_set *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_3(VAR_2->mac->macid, VAR_2->vifid,
         VAR_1, sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = (struct qlink_cmd_pm_set *)VAR_6->data;
 VAR_7->pm_mode = VAR_3;
 VAR_7->pm_standby_timer = FUNC_0(VAR_4);

 FUNC_1(VAR_5);

 VAR_8 = FUNC_4(VAR_5, VAR_6);
 if (VAR_8)
  goto out;

out:
 FUNC_2(VAR_5);

 return VAR_8;
}
