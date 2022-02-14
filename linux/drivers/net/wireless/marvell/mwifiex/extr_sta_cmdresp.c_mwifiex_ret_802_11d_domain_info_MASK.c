
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct mwifiex_private {int adapter; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct mwifiex_ietypes_domain_param_set {TYPE_1__ header; } ;
struct ieee80211_country_ie_triplet {int dummy; } ;
struct host_cmd_ds_802_11d_domain_info_rsp {scalar_t__ action; struct mwifiex_ietypes_domain_param_set domain; } ;
struct TYPE_4__ {struct host_cmd_ds_802_11d_domain_info_rsp domain_info_resp; } ;
struct host_cmd_ds_command {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_5,
        struct host_cmd_ds_command *VAR_6)
{
 struct host_cmd_ds_802_11d_domain_info_rsp *VAR_7 =
  &VAR_6->params.domain_info_resp;
 struct mwifiex_ietypes_domain_param_set *VAR_8 = &VAR_7->domain;
 u16 VAR_9 = FUNC_0(VAR_7->action);
 u8 VAR_10;

 VAR_10 = (u8) ((FUNC_0(VAR_8->header.len)
    - VAR_2)
         / sizeof(struct ieee80211_country_ie_triplet));

 FUNC_1(VAR_5->adapter, VAR_3,
      "info: 11D Domain Info Resp: no_of_triplet=%d\n",
      VAR_10);

 if (VAR_10 > VAR_4) {
  FUNC_1(VAR_5->adapter, VAR_1,
       "11D: invalid number of triplets %d returned\n",
       VAR_10);
  return -1;
 }

 switch (VAR_9) {
 case 128:
  break;
 case 129:
  break;
 default:
  FUNC_1(VAR_5->adapter, VAR_0,
       "11D: invalid action:%d\n", VAR_7->action);
  return -1;
 }

 return 0;
}
