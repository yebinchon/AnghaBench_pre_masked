
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct sk_buff {scalar_t__ data; } ;
struct regulatory_request {int initiator; int user_reg_hint_type; int dfs_region; int * alpha2; } ;
struct qtnf_wmac {int macid; struct qtnf_bus* bus; } ;
struct qtnf_bus {int dummy; } ;
struct qlink_cmd_reg_notify {int slave_radar; scalar_t__ num_channels; int dfs_region; int user_reg_hint_type; int initiator; int * alpha2; } ;
struct ieee80211_supported_band {unsigned int n_channels; int * channels; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct wiphy* FUNC_0 (struct qtnf_wmac*) ;
 int FUNC_1 (struct qtnf_bus*) ;
 int FUNC_2 (struct qtnf_bus*) ;
 struct sk_buff* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct sk_buff*,int *) ;
 int FUNC_5 (struct qtnf_bus*,struct sk_buff*) ;

int FUNC_6(struct qtnf_wmac *VAR_15, struct regulatory_request *VAR_16,
   bool VAR_17)
{
 struct wiphy *VAR_18 = FUNC_0(VAR_15);
 struct qtnf_bus *VAR_19 = VAR_15->bus;
 struct sk_buff *VAR_20;
 int VAR_21;
 struct qlink_cmd_reg_notify *VAR_22;
 enum nl80211_band VAR_23;
 const struct ieee80211_supported_band *VAR_24;

 VAR_20 = FUNC_3(VAR_15->macid, VAR_14,
         VAR_2,
         sizeof(*VAR_22));
 if (!VAR_20)
  return -VAR_0;

 VAR_22 = (struct qlink_cmd_reg_notify *)VAR_20->data;
 VAR_22->alpha2[0] = VAR_16->alpha2[0];
 VAR_22->alpha2[1] = VAR_16->alpha2[1];

 switch (VAR_16->initiator) {
 case 134:
  VAR_22->initiator = VAR_7;
  break;
 case 131:
  VAR_22->initiator = VAR_10;
  break;
 case 132:
  VAR_22->initiator = VAR_9;
  break;
 case 133:
  VAR_22->initiator = VAR_8;
  break;
 }

 switch (VAR_16->user_reg_hint_type) {
 case 128:
  VAR_22->user_reg_hint_type = VAR_13;
  break;
 case 130:
  VAR_22->user_reg_hint_type = VAR_11;
  break;
 case 129:
  VAR_22->user_reg_hint_type = VAR_12;
  break;
 }

 switch (VAR_16->dfs_region) {
 case 136:
  VAR_22->dfs_region = VAR_4;
  break;
 case 137:
  VAR_22->dfs_region = VAR_3;
  break;
 case 135:
  VAR_22->dfs_region = VAR_5;
  break;
 default:
  VAR_22->dfs_region = VAR_6;
  break;
 }

 VAR_22->slave_radar = VAR_17;
 VAR_22->num_channels = 0;

 for (VAR_23 = 0; VAR_23 < VAR_1; VAR_23++) {
  unsigned int VAR_25;

  VAR_24 = VAR_18->bands[VAR_23];
  if (!VAR_24)
   continue;

  VAR_22->num_channels += VAR_24->n_channels;

  for (VAR_25 = 0; VAR_25 < VAR_24->n_channels; ++VAR_25) {
   FUNC_4(VAR_20,
       &VAR_24->channels[VAR_25]);
  }
 }

 FUNC_1(VAR_19);
 VAR_21 = FUNC_5(VAR_19, VAR_20);
 FUNC_2(VAR_19);

 return VAR_21;
}
