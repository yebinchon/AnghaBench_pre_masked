
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {TYPE_2__* data; } ;
struct iwl_mvm {int * vif_id_to_mac; TYPE_3__ tcm; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_4__ {int rx_bytes; scalar_t__ detected; int rate; } ;
struct TYPE_5__ {TYPE_1__ uapsd_nonagg_detect; scalar_t__ opened_rx_ba_sessions; } ;


 int FUNC_0 (int,unsigned int) ;
 unsigned long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct ieee80211_vif* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct iwl_mvm *VAR_0,
       unsigned int VAR_1,
       int VAR_2)
{
 u64 VAR_3 = VAR_0->tcm.data[VAR_2].uapsd_nonagg_detect.rx_bytes;
 u64 VAR_4;
 unsigned long VAR_5;
 struct ieee80211_vif *VAR_6;

 VAR_5 = FUNC_1(&VAR_0->tcm.data[VAR_2].uapsd_nonagg_detect.rate);

 if (!VAR_5 || VAR_0->tcm.data[VAR_2].opened_rx_ba_sessions ||
     VAR_0->tcm.data[VAR_2].uapsd_nonagg_detect.detected)
  return;

 if (FUNC_2(VAR_0)) {
  VAR_4 = 8 * VAR_3;
  FUNC_0(VAR_4, VAR_1);
  VAR_5 *= 1000;
  if (VAR_4 < 22 * VAR_5 / 100)
   return;
 } else {
  VAR_4 = (8 * VAR_3);
  FUNC_0(VAR_4, VAR_1 * 100);
  if (VAR_4 < VAR_5)
   return;
 }

 FUNC_5();
 VAR_6 = FUNC_4(VAR_0->vif_id_to_mac[VAR_2]);
 if (VAR_6)
  FUNC_3(VAR_0, VAR_6);
 FUNC_6();
}
