
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tc_cnt; } ;
struct xgbe_prv_data {TYPE_2__* ets; TYPE_1__ hw_feat; } ;
struct net_device {int dummy; } ;
struct ieee_ets {int prio_tc; int tc_tsa; int tc_tx_bw; int cbs; int ets_cap; } ;
struct TYPE_4__ {int prio_tc; int tc_tsa; int tc_tx_bw; int cbs; } ;


 int FUNC_0 (int ,int ,int) ;
 struct xgbe_prv_data* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
    struct ieee_ets *VAR_1)
{
 struct xgbe_prv_data *VAR_2 = FUNC_1(VAR_0);


 VAR_1->ets_cap = VAR_2->hw_feat.tc_cnt;

 if (VAR_2->ets) {
  VAR_1->cbs = VAR_2->ets->cbs;
  FUNC_0(VAR_1->tc_tx_bw, VAR_2->ets->tc_tx_bw,
         sizeof(VAR_1->tc_tx_bw));
  FUNC_0(VAR_1->tc_tsa, VAR_2->ets->tc_tsa,
         sizeof(VAR_1->tc_tsa));
  FUNC_0(VAR_1->prio_tc, VAR_2->ets->prio_tc,
         sizeof(VAR_1->prio_tc));
 }

 return 0;
}
