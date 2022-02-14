
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct qtnf_wmac {int bus; int macid; } ;
struct qtnf_vif {int vifid; struct qtnf_wmac* mac; } ;
struct qlink_cmd_chan_switch {int beacon_count; int block_tx; int radar_required; int channel; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct cfg80211_csa_settings {int count; int block_tx; int radar_required; TYPE_2__ chandef; } ;
struct TYPE_3__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,struct sk_buff*) ;

int FUNC_5(struct qtnf_vif *VAR_2,
         struct cfg80211_csa_settings *VAR_3)
{
 struct qtnf_wmac *VAR_4 = VAR_2->mac;
 struct qlink_cmd_chan_switch *VAR_5;
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4->macid, VAR_2->vifid,
         VAR_1,
         sizeof(*VAR_5));
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_4->bus);

 VAR_5 = (struct qlink_cmd_chan_switch *)VAR_6->data;
 VAR_5->channel = FUNC_0(VAR_3->chandef.chan->hw_value);
 VAR_5->radar_required = VAR_3->radar_required;
 VAR_5->block_tx = VAR_3->block_tx;
 VAR_5->beacon_count = VAR_3->count;

 VAR_7 = FUNC_4(VAR_4->bus, VAR_6);
 if (VAR_7)
  goto out;

out:
 FUNC_2(VAR_4->bus);

 return VAR_7;
}
