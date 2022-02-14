
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {int vifid; TYPE_1__* mac; } ;
struct qtnf_bus {int dummy; } ;
struct qlink_cmd_start_cac {int chan; int cac_time_ms; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_2__ {int macid; struct qtnf_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cfg80211_chan_def const*,int *) ;
 int FUNC_2 (struct qtnf_bus*) ;
 int FUNC_3 (struct qtnf_bus*) ;
 struct sk_buff* FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (struct qtnf_bus*,struct sk_buff*) ;

int FUNC_6(const struct qtnf_vif *VAR_2,
         const struct cfg80211_chan_def *VAR_3,
         u32 VAR_4)
{
 struct qtnf_bus *VAR_5 = VAR_2->mac->bus;
 struct sk_buff *VAR_6;
 struct qlink_cmd_start_cac *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_2->mac->macid, VAR_2->vifid,
         VAR_1,
         sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = (struct qlink_cmd_start_cac *)VAR_6->data;
 VAR_7->cac_time_ms = FUNC_0(VAR_4);
 FUNC_1(VAR_3, &VAR_7->chan);

 FUNC_2(VAR_5);
 VAR_8 = FUNC_5(VAR_5, VAR_6);
 if (VAR_8)
  goto out;

out:
 FUNC_3(VAR_5);

 return VAR_8;
}
