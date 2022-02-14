
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {void* len; void* offset; } ;
struct TYPE_10__ {void* len; scalar_t__ offset; } ;
struct TYPE_14__ {TYPE_6__ common_data; int * buf; TYPE_4__* band_data; TYPE_3__ mac_header; } ;
struct iwl_mvm_scan_params {int flags; TYPE_7__ preq; int mac_addr_mask; int * mac_addr; } ;
struct iwl_mvm {TYPE_5__* fw; } ;
struct ieee80211_vif {int addr; } ;
struct ieee80211_scan_ies {int* len; int common_ie_len; int common_ies; int * ies; } ;
struct TYPE_8__ {int * variable; } ;
struct TYPE_9__ {TYPE_1__ probe_req; } ;
struct ieee80211_mgmt {TYPE_2__ u; scalar_t__ seq_ctrl; int bssid; int da; void* frame_control; int * sa; } ;
struct TYPE_12__ {int ucode_capa; } ;
struct TYPE_11__ {void* len; void* offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (struct iwl_mvm*,int ,int,int *) ;
 scalar_t__ FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct iwl_mvm *VAR_8, struct ieee80211_vif *VAR_9,
    struct ieee80211_scan_ies *VAR_10,
    struct iwl_mvm_scan_params *VAR_11)
{
 struct ieee80211_mgmt *VAR_12 = (void *)VAR_11->preq.buf;
 u8 *VAR_13, *VAR_14;
 const u8 *VAR_15 = VAR_11->flags & VAR_5 ?
  VAR_11->mac_addr : ((void*)0);







 if (VAR_15)
  FUNC_3(VAR_12->sa, VAR_15,
         VAR_11->mac_addr_mask);
 else
  FUNC_7(VAR_12->sa, VAR_9->addr, VAR_0);

 VAR_12->frame_control = FUNC_0(VAR_1);
 FUNC_1(VAR_12->da);
 FUNC_1(VAR_12->bssid);
 VAR_12->seq_ctrl = 0;

 VAR_13 = VAR_12->u.probe_req.variable;
 *VAR_13++ = VAR_7;
 *VAR_13++ = 0;

 VAR_11->preq.mac_header.offset = 0;
 VAR_11->preq.mac_header.len = FUNC_0(24 + 2);


 VAR_14 = FUNC_5(VAR_8,
       VAR_10->ies[VAR_3],
       VAR_10->len[VAR_3],
       VAR_13);
 VAR_11->preq.band_data[0].offset = FUNC_0(VAR_13 - VAR_11->preq.buf);
 VAR_11->preq.band_data[0].len = FUNC_0(VAR_14 - VAR_13);
 VAR_13 = VAR_14;

 FUNC_7(VAR_13, VAR_10->ies[VAR_4],
        VAR_10->len[VAR_4]);
 VAR_11->preq.band_data[1].offset = FUNC_0(VAR_13 - VAR_11->preq.buf);
 VAR_11->preq.band_data[1].len =
  FUNC_0(VAR_10->len[VAR_4]);
 VAR_13 += VAR_10->len[VAR_4];

 FUNC_7(VAR_13, VAR_10->common_ies, VAR_10->common_ie_len);
 VAR_11->preq.common_data.offset = FUNC_0(VAR_13 - VAR_11->preq.buf);

 if (FUNC_6(VAR_8) &&
     !FUNC_2(&VAR_8->fw->ucode_capa,
    VAR_2)) {
  FUNC_4(VAR_13 + VAR_10->common_ie_len);
  VAR_11->preq.common_data.len = FUNC_0(VAR_10->common_ie_len +
          VAR_6);
 } else {
  VAR_11->preq.common_data.len = FUNC_0(VAR_10->common_ie_len);
 }
}
