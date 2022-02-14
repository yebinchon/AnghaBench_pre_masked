
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct TYPE_6__ {void* len; void* type; } ;
struct mwifiex_ietypes_domain_param_set {TYPE_3__ header; int triplet; int country_code; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct TYPE_5__ {int no_of_triplet; int triplet; int country_code; } ;
struct mwifiex_adapter {TYPE_2__ domain_reg; } ;
struct ieee80211_country_ie_triplet {int dummy; } ;
struct host_cmd_ds_802_11d_domain_info {void* action; struct mwifiex_ietypes_domain_param_set domain; } ;
struct TYPE_4__ {struct host_cmd_ds_802_11d_domain_info domain_info; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_5,
        struct host_cmd_ds_command *VAR_6,
        u16 VAR_7)
{
 struct mwifiex_adapter *VAR_8 = VAR_5->adapter;
 struct host_cmd_ds_802_11d_domain_info *VAR_9 =
  &VAR_6->params.domain_info;
 struct mwifiex_ietypes_domain_param_set *VAR_10 =
  &VAR_9->domain;
 u8 VAR_11 = VAR_8->domain_reg.no_of_triplet;

 FUNC_3(VAR_8, VAR_2,
      "info: 11D: no_of_triplet=0x%x\n", VAR_11);

 VAR_6->command = FUNC_0(VAR_1);
 VAR_9->action = FUNC_0(VAR_7);
 if (VAR_7 == VAR_0) {
  VAR_6->size = FUNC_0(sizeof(VAR_9->action) + VAR_3);
  return 0;
 }


 VAR_10->header.type = FUNC_0(VAR_4);
 FUNC_2(VAR_10->country_code, VAR_8->domain_reg.country_code,
        sizeof(VAR_10->country_code));

 VAR_10->header.len =
  FUNC_0((VAR_11 *
        sizeof(struct ieee80211_country_ie_triplet))
       + sizeof(VAR_10->country_code));

 if (VAR_11) {
  FUNC_2(VAR_10->triplet, VAR_8->domain_reg.triplet,
         VAR_11 * sizeof(struct
           ieee80211_country_ie_triplet));

  VAR_6->size = FUNC_0(sizeof(VAR_9->action) +
     FUNC_1(VAR_10->header.len) +
     sizeof(struct mwifiex_ie_types_header)
     + VAR_3);
 } else {
  VAR_6->size = FUNC_0(sizeof(VAR_9->action) + VAR_3);
 }

 return 0;
}
