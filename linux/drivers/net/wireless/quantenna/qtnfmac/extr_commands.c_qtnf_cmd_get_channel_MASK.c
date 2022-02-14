
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {TYPE_1__* mac; int vifid; } ;
struct qtnf_bus {int dummy; } ;
struct qlink_resp_channel_get {int chan; } ;
struct qlink_cmd {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_2__ {int macid; struct qtnf_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *,struct cfg80211_chan_def*) ;
 int FUNC_3 (struct qtnf_bus*) ;
 int FUNC_4 (struct qtnf_bus*) ;
 struct sk_buff* FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (struct qtnf_bus*,struct sk_buff*,struct sk_buff**,int,int *) ;

int FUNC_7(struct qtnf_vif *VAR_2, struct cfg80211_chan_def *VAR_3)
{
 struct qtnf_bus *VAR_4 = VAR_2->mac->bus;
 const struct qlink_resp_channel_get *VAR_5;
 struct sk_buff *VAR_6;
 struct sk_buff *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_6 = FUNC_5(VAR_2->mac->macid, VAR_2->vifid,
         VAR_1,
         sizeof(struct qlink_cmd));
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_4);
 VAR_8 = FUNC_6(VAR_4, VAR_6, &VAR_7,
           sizeof(*VAR_5), ((void*)0));
 if (VAR_8)
  goto out;

 VAR_5 = (const struct qlink_resp_channel_get *)VAR_7->data;
 FUNC_2(FUNC_1(VAR_2->mac), &VAR_5->chan, VAR_3);

out:
 FUNC_4(VAR_4);
 FUNC_0(VAR_7);

 return VAR_8;
}
