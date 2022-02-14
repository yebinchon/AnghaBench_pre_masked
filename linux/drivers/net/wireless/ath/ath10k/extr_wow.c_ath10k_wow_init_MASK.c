
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


struct TYPE_14__ {int n_patterns; int max_nd_match_sets; int flags; int max_pkt_offset; int pattern_max_len; } ;
struct TYPE_13__ {TYPE_7__ wowlan_support; int max_num_patterns; } ;
struct TYPE_10__ {scalar_t__ rx_decap_mode; int svc_map; } ;
struct ath10k {int dev; TYPE_6__ wow; TYPE_5__* hw; TYPE_3__ wmi; TYPE_2__* running_fw; } ;
struct TYPE_12__ {TYPE_4__* wiphy; } ;
struct TYPE_11__ {TYPE_7__* wowlan; } ;
struct TYPE_8__ {int fw_features; } ;
struct TYPE_9__ {TYPE_1__ fw_file; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_7__ VAR_8 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

int FUNC_3(struct ath10k *VAR_9)
{
 if (!FUNC_2(VAR_0,
        VAR_9->running_fw->fw_file.fw_features))
  return 0;

 if (FUNC_0(!FUNC_2(VAR_6, VAR_9->wmi.svc_map)))
  return -VAR_2;

 VAR_9->wow.wowlan_support = VAR_8;

 if (VAR_9->wmi.rx_decap_mode == VAR_1) {
  VAR_9->wow.wowlan_support.pattern_max_len -= VAR_7;
  VAR_9->wow.wowlan_support.max_pkt_offset -= VAR_7;
 }

 if (FUNC_2(VAR_5, VAR_9->wmi.svc_map)) {
  VAR_9->wow.wowlan_support.flags |= VAR_3;
  VAR_9->wow.wowlan_support.max_nd_match_sets = VAR_4;
 }

 VAR_9->wow.wowlan_support.n_patterns = VAR_9->wow.max_num_patterns;
 VAR_9->hw->wiphy->wowlan = &VAR_9->wow.wowlan_support;

 FUNC_1(VAR_9->dev, 1);

 return 0;
}
