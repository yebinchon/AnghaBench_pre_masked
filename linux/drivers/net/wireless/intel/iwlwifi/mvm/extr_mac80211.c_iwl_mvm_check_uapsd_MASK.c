
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
struct TYPE_9__ {int rate; } ;
struct iwl_mvm_tcm_mac {int opened_rx_ba_sessions; TYPE_2__ uapsd_nonagg_detect; } ;
struct TYPE_8__ {struct iwl_mvm_tcm_mac* data; } ;
struct iwl_mvm {TYPE_5__* uapsd_noagg_bssids; TYPE_4__* fw; TYPE_1__ tcm; int status; } ;
struct ieee80211_vif {int driver_flags; scalar_t__ p2p; } ;
struct TYPE_14__ {size_t id; } ;
struct TYPE_13__ {int uapsd_disable; } ;
struct TYPE_12__ {int addr; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_11__ {TYPE_3__ ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_mvm*) ;
 TYPE_7__* FUNC_3 (struct ieee80211_vif*) ;
 TYPE_6__ VAR_5 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_6, struct ieee80211_vif *VAR_7,
    const u8 *VAR_8)
{
 int VAR_9;

 if (!FUNC_4(VAR_2, &VAR_6->status)) {
  struct iwl_mvm_tcm_mac *VAR_10;

  VAR_10 = &VAR_6->tcm.data[FUNC_3(VAR_7)->id];
  FUNC_1(&VAR_10->uapsd_nonagg_detect.rate);
  VAR_10->opened_rx_ba_sessions = 0;
 }

 if (!(VAR_6->fw->ucode_capa.flags & VAR_4))
  return;

 if (VAR_7->p2p && !FUNC_2(VAR_6)) {
  VAR_7->driver_flags &= ~VAR_0;
  return;
 }

 if (!VAR_7->p2p &&
     (VAR_5.uapsd_disable & VAR_1)) {
  VAR_7->driver_flags &= ~VAR_0;
  return;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (FUNC_0(VAR_6->uapsd_noagg_bssids[VAR_9].addr, VAR_8)) {
   VAR_7->driver_flags &= ~VAR_0;
   return;
  }
 }

 VAR_7->driver_flags |= VAR_0;
}
