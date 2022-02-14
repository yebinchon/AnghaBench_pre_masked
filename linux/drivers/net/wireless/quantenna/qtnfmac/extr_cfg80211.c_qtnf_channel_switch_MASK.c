
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct qtnf_vif {int dummy; } ;
struct net_device {int name; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct cfg80211_csa_settings {TYPE_2__ chandef; int block_tx; int radar_required; int count; } ;
struct TYPE_3__ {int hw_value; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct qtnf_vif*,struct cfg80211_csa_settings*) ;
 struct qtnf_vif* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_1, struct net_device *VAR_2,
          struct cfg80211_csa_settings *VAR_3)
{
 struct qtnf_vif *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;

 FUNC_1("%s: chan(%u) count(%u) radar(%u) block_tx(%u)\n", VAR_2->name,
   VAR_3->chandef.chan->hw_value, VAR_3->count,
   VAR_3->radar_required, VAR_3->block_tx);

 if (!FUNC_0(&VAR_3->chandef)) {
  FUNC_2("%s: invalid channel\n", VAR_2->name);
  return -VAR_0;
 }

 VAR_5 = FUNC_4(VAR_4, VAR_3);
 if (VAR_5)
  FUNC_3("%s: failed to switch to channel (%u)\n",
   VAR_2->name, VAR_3->chandef.chan->hw_value);

 return VAR_5;
}
