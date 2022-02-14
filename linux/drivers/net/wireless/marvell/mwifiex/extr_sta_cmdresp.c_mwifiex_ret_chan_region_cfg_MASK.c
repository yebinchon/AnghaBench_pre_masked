
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct mwifiex_private {TYPE_2__* adapter; } ;
struct mwifiex_ie_types_header {int len; int type; } ;
struct ieee80211_regdomain {int dummy; } ;
struct host_cmd_ds_chan_region_cfg {int action; } ;
struct TYPE_3__ {struct host_cmd_ds_chan_region_cfg reg_cfg; } ;
struct host_cmd_ds_command {int size; TYPE_1__ params; } ;
struct TYPE_4__ {struct ieee80211_regdomain* regd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_regdomain*) ;
 scalar_t__ VAR_2 ;

 scalar_t__ FUNC_1 (int ) ;
 struct ieee80211_regdomain* FUNC_2 (struct mwifiex_private*,int *,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ,char*,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_3,
           struct host_cmd_ds_command *VAR_4)
{
 struct host_cmd_ds_chan_region_cfg *VAR_5 = &VAR_4->params.reg_cfg;
 u16 VAR_6 = FUNC_1(VAR_5->action);
 u16 VAR_7, VAR_8, VAR_9;
 struct mwifiex_ie_types_header *VAR_10;
 struct ieee80211_regdomain *VAR_11;
 u8 *VAR_12;

 if (VAR_6 != VAR_1)
  return 0;

 VAR_12 = (u8 *)VAR_5 + sizeof(*VAR_5);
 VAR_9 = FUNC_1(VAR_4->size) - VAR_2 - sizeof(*VAR_5);

 while (VAR_9 >= sizeof(*VAR_10)) {
  VAR_10 = (struct mwifiex_ie_types_header *)VAR_12;
  VAR_7 = FUNC_1(VAR_10->type);
  VAR_8 = FUNC_1(VAR_10->len);

  if (VAR_9 < (sizeof(*VAR_10) + VAR_8))
   break;

  switch (VAR_7) {
  case 128:
   FUNC_3(VAR_3->adapter, VAR_0, "CHAN:",
      (u8 *)VAR_10 + sizeof(*VAR_10),
      VAR_8);
   VAR_11 = FUNC_2(VAR_3,
    (u8 *)VAR_10 + sizeof(*VAR_10), VAR_8);
   if (!FUNC_0(VAR_11))
    VAR_3->adapter->regd = VAR_11;
   break;
  }

  VAR_12 += (sizeof(*VAR_10) + VAR_8);
  VAR_9 -= (sizeof(*VAR_10) + VAR_8);
 }

 return 0;
}
