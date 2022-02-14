
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_8__ {int noa_attr; int noa_active; } ;
struct iwl_probe_resp_data {scalar_t__ noa_len; TYPE_4__ notif; } ;
struct iwl_mvm_vif {int probe_resp_data; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vendor_ie {int dummy; } ;
struct TYPE_5__ {int vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct TYPE_6__ {scalar_t__ variable; } ;
struct TYPE_7__ {TYPE_2__ probe_resp; } ;
struct ieee80211_mgmt {TYPE_3__ u; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__,int*,int,int) ;
 struct iwl_mvm_vif* FUNC_4 (int ) ;
 int FUNC_5 (int*,int *,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,scalar_t__,int ) ;
 struct iwl_probe_resp_data* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int* FUNC_10 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_12(struct iwl_mvm *VAR_4,
           struct sk_buff *VAR_5)
{
 struct ieee80211_tx_info *VAR_6 = FUNC_0(VAR_5);
 struct iwl_mvm_vif *VAR_7 =
  FUNC_4(VAR_6->control.vif);
 struct ieee80211_mgmt *VAR_8 = (struct ieee80211_mgmt *)VAR_5->data;
 int VAR_9 = (u8 *)VAR_8->u.probe_resp.variable - (u8 *)VAR_8;
 struct iwl_probe_resp_data *VAR_10;
 u8 *VAR_11, *VAR_12;
 u8 VAR_13[] = {
  (VAR_3 >> 16) & 0xff,
  (VAR_3 >> 8) & 0xff,
  VAR_3 & 0xff,
  VAR_2,
 };

 FUNC_8();

 VAR_10 = FUNC_7(VAR_7->probe_resp_data);
 if (!VAR_10)
  goto out;

 if (!VAR_10->notif.noa_active)
  goto out;

 VAR_11 = (u8 *)FUNC_3(VAR_1,
       VAR_8->u.probe_resp.variable,
       VAR_5->len - VAR_9,
       VAR_13, 4, 2);
 if (!VAR_11) {
  FUNC_1(VAR_4, "probe resp doesn't have P2P IE\n");
  goto out;
 }

 if (FUNC_11(VAR_5) < VAR_10->noa_len) {
  if (FUNC_6(VAR_5, 0, VAR_10->noa_len, VAR_0)) {
   FUNC_2(VAR_4,
    "Failed to reallocate probe resp\n");
   goto out;
  }
 }

 VAR_12 = FUNC_10(VAR_5, VAR_10->noa_len);

 *VAR_12++ = VAR_1;

 *VAR_12++ = VAR_10->noa_len - 2;
 *VAR_12++ = (VAR_3 >> 16) & 0xff;
 *VAR_12++ = (VAR_3 >> 8) & 0xff;
 *VAR_12++ = VAR_3 & 0xff;
 *VAR_12++ = VAR_2;

 FUNC_5(VAR_12, &VAR_10->notif.noa_attr,
        VAR_10->noa_len - sizeof(struct ieee80211_vendor_ie));

out:
 FUNC_9();
}
