
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {TYPE_1__* mac; int vifid; } ;
struct qlink_cmd_external_auth {int status; int bssid; } ;
struct cfg80211_external_auth_params {int status; int bssid; } ;
struct TYPE_2__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,struct sk_buff*) ;

int FUNC_6(struct qtnf_vif *VAR_2,
    struct cfg80211_external_auth_params *VAR_3)
{
 struct sk_buff *VAR_4;
 struct qlink_cmd_external_auth *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_2->mac->macid, VAR_2->vifid,
         VAR_1,
         sizeof(*VAR_5));
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = (struct qlink_cmd_external_auth *)VAR_4->data;

 FUNC_1(VAR_5->bssid, VAR_3->bssid);
 VAR_5->status = FUNC_0(VAR_3->status);

 FUNC_2(VAR_2->mac->bus);
 VAR_6 = FUNC_5(VAR_2->mac->bus, VAR_4);
 if (VAR_6)
  goto out;

out:
 FUNC_3(VAR_2->mac->bus);

 return VAR_6;
}
