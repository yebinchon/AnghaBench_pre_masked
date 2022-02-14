
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qtnf_vif {int vifid; TYPE_1__* mac; } ;
struct qtnf_bus {int dummy; } ;
struct qlink_tlv_hdr {scalar_t__ val; void* len; void* type; } ;
struct qlink_cmd {int dummy; } ;
struct qlink_acl_data {int dummy; } ;
struct cfg80211_acl_data {int n_acl_entries; } ;
struct TYPE_2__ {int macid; struct qtnf_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (size_t) ;
 int VAR_3 ;
 int FUNC_1 (struct cfg80211_acl_data const*,struct qlink_acl_data*) ;
 int FUNC_2 (struct qtnf_bus*) ;
 int FUNC_3 (struct qtnf_bus*) ;
 struct sk_buff* FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (struct qtnf_bus*,struct sk_buff*) ;
 struct qlink_tlv_hdr* FUNC_6 (struct sk_buff*,int) ;
 size_t FUNC_7 (struct cfg80211_acl_data const*,int ,int ) ;

int FUNC_8(const struct qtnf_vif *VAR_4,
    const struct cfg80211_acl_data *VAR_5)
{
 struct qtnf_bus *VAR_6 = VAR_4->mac->bus;
 struct sk_buff *VAR_7;
 struct qlink_tlv_hdr *VAR_8;
 size_t VAR_9 = FUNC_7(VAR_5, VAR_3, VAR_5->n_acl_entries);
 int VAR_10;

 VAR_7 = FUNC_4(VAR_4->mac->macid, VAR_4->vifid,
         VAR_1,
         sizeof(struct qlink_cmd));
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_7, sizeof(*VAR_8) + VAR_9);
 VAR_8->type = FUNC_0(VAR_2);
 VAR_8->len = FUNC_0(VAR_9);
 FUNC_1(VAR_5, (struct qlink_acl_data *)VAR_8->val);

 FUNC_2(VAR_6);
 VAR_10 = FUNC_5(VAR_6, VAR_7);
 if (VAR_10)
  goto out;

out:
 FUNC_3(VAR_6);

 return VAR_10;
}
