
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct wl18xx_priv {scalar_t__ last_fw_rls_idx; } ;
struct wl18xx_fw_status_priv {scalar_t__ fw_release_idx; int * released_tx_desc; } ;
struct wl1271 {int tx_results_count; TYPE_3__* fw_status; TYPE_1__* links; struct wl18xx_priv* priv; } ;
struct TYPE_5__ {size_t hlid; int tx_last_rate_mbps; int tx_last_rate; } ;
struct TYPE_6__ {TYPE_2__ counters; scalar_t__ priv; } ;
struct TYPE_4__ {int fw_rate_mbps; int fw_rate_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (struct wl1271*,int ) ;

void FUNC_4(struct wl1271 *VAR_3)
{
 struct wl18xx_fw_status_priv *VAR_4 =
  (struct wl18xx_fw_status_priv *)VAR_3->fw_status->priv;
 struct wl18xx_priv *VAR_5 = VAR_3->priv;
 u8 VAR_6, VAR_7;


 if (VAR_5->last_fw_rls_idx == VAR_4->fw_release_idx)
  return;


 VAR_7 = VAR_3->fw_status->counters.hlid;

 if (VAR_7 < VAR_2) {
  VAR_3->links[VAR_7].fw_rate_idx =
    VAR_3->fw_status->counters.tx_last_rate;
  VAR_3->links[VAR_7].fw_rate_mbps =
    VAR_3->fw_status->counters.tx_last_rate_mbps;
 }


 FUNC_1(VAR_0, "last released desc = %d, current idx = %d",
       VAR_5->last_fw_rls_idx, VAR_4->fw_release_idx);

 if (VAR_4->fw_release_idx >= VAR_1) {
  FUNC_2("invalid desc release index %d",
        VAR_4->fw_release_idx);
  FUNC_0(1);
  return;
 }

 for (VAR_6 = VAR_5->last_fw_rls_idx;
      VAR_6 != VAR_4->fw_release_idx;
      VAR_6 = (VAR_6 + 1) % VAR_1) {
  FUNC_3(VAR_3,
   VAR_4->released_tx_desc[VAR_6]);

  VAR_3->tx_results_count++;
 }

 VAR_5->last_fw_rls_idx = VAR_4->fw_release_idx;
}
