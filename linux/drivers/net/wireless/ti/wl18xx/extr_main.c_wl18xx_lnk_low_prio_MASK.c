
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wl18xx_fw_status_priv {scalar_t__ tx_suspend_threshold; scalar_t__ tx_fast_stop_threshold; scalar_t__ tx_slow_stop_threshold; int link_suspend_bitmap; } ;
struct wl1271_link {scalar_t__ allocated_pkts; } ;
struct wl1271 {unsigned long fw_fast_lnk_map; unsigned long ap_fw_ps_map; TYPE_1__* fw_status; } ;
struct TYPE_2__ {scalar_t__ priv; } ;


 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned long*) ;

__attribute__((used)) static bool FUNC_2(struct wl1271 *VAR_0, u8 VAR_1,
    struct wl1271_link *VAR_2)
{
 u8 VAR_3;
 struct wl18xx_fw_status_priv *VAR_4 =
  (struct wl18xx_fw_status_priv *)VAR_0->fw_status->priv;
 unsigned long VAR_5;


 if (!VAR_4)
  return 1;

 VAR_5 = FUNC_0(VAR_4->link_suspend_bitmap);
 if (FUNC_1(VAR_1, &VAR_5))
  VAR_3 = VAR_4->tx_suspend_threshold;
 else if (FUNC_1(VAR_1, &VAR_0->fw_fast_lnk_map) &&
   !FUNC_1(VAR_1, &VAR_0->ap_fw_ps_map))
  VAR_3 = VAR_4->tx_fast_stop_threshold;
 else
  VAR_3 = VAR_4->tx_slow_stop_threshold;

 return VAR_2->allocated_pkts < VAR_3;
}
