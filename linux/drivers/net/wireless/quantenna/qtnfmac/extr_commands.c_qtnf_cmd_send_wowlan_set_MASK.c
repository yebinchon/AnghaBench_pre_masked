
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {int vifid; TYPE_1__* mac; } ;
struct qtnf_bus {int dummy; } ;
struct qlink_cmd_wowlan_set {int triggers; } ;
struct cfg80211_wowlan {int n_patterns; TYPE_2__* patterns; scalar_t__ magic_pkt; scalar_t__ disconnect; } ;
struct TYPE_4__ {int pattern_len; int pattern; } ;
struct TYPE_3__ {int macid; struct qtnf_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qtnf_bus*) ;
 int FUNC_2 (struct qtnf_bus*) ;
 struct sk_buff* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct qtnf_bus*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ) ;

int FUNC_6(const struct qtnf_vif *VAR_6,
        const struct cfg80211_wowlan *VAR_7)
{
 struct qtnf_bus *VAR_8 = VAR_6->mac->bus;
 struct sk_buff *VAR_9;
 struct qlink_cmd_wowlan_set *VAR_10;
 u32 VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;

 VAR_9 = FUNC_3(VAR_6->mac->macid, VAR_6->vifid,
         VAR_1, sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_0;

 FUNC_1(VAR_8);

 VAR_10 = (struct qlink_cmd_wowlan_set *)VAR_9->data;

 if (VAR_7) {
  if (VAR_7->disconnect)
   VAR_11 |= VAR_2;

  if (VAR_7->magic_pkt)
   VAR_11 |= VAR_3;

  if (VAR_7->n_patterns && VAR_7->patterns) {
   VAR_11 |= VAR_4;
   while (VAR_12 < VAR_7->n_patterns) {
    FUNC_5(VAR_9,
     VAR_5,
     VAR_7->patterns[VAR_12].pattern,
     VAR_7->patterns[VAR_12].pattern_len);
    VAR_12++;
   }
  }
 }

 VAR_10->triggers = FUNC_0(VAR_11);

 VAR_13 = FUNC_4(VAR_8, VAR_9);
 if (VAR_13)
  goto out;

out:
 FUNC_2(VAR_8);
 return VAR_13;
}
