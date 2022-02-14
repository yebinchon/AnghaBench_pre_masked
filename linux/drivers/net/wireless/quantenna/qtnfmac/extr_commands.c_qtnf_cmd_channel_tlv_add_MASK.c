
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {void* len; void* type; } ;
struct qlink_channel {int flags; int dfs_state; int beacon_found; int max_antenna_gain; int max_reg_power; int max_power; int band; void* hw_value; void* center_freq; } ;
struct qlink_tlv_channel {TYPE_1__ hdr; struct qlink_channel chan; } ;
struct ieee80211_channel {int center_freq; int hw_value; int flags; int dfs_state; int beacon_found; int max_antenna_gain; int max_reg_power; int max_power; int band; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct qlink_tlv_channel* FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_1,
         const struct ieee80211_channel *VAR_2)
{
 struct qlink_tlv_channel *VAR_3;
 struct qlink_channel *VAR_4;

 VAR_3 = FUNC_5(VAR_1, sizeof(*VAR_3));
 VAR_4 = &VAR_3->chan;
 VAR_3->hdr.type = FUNC_0(VAR_0);
 VAR_3->hdr.len = FUNC_0(sizeof(*VAR_4));

 VAR_4->center_freq = FUNC_0(VAR_2->center_freq);
 VAR_4->hw_value = FUNC_0(VAR_2->hw_value);
 VAR_4->band = FUNC_2(VAR_2->band);
 VAR_4->max_power = VAR_2->max_power;
 VAR_4->max_reg_power = VAR_2->max_reg_power;
 VAR_4->max_antenna_gain = VAR_2->max_antenna_gain;
 VAR_4->beacon_found = VAR_2->beacon_found;
 VAR_4->dfs_state = FUNC_4(VAR_2->dfs_state);
 VAR_4->flags = FUNC_1(FUNC_3(VAR_2->flags));
}
