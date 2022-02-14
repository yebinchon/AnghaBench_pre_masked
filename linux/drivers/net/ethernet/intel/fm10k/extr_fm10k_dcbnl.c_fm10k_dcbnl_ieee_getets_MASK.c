
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ieee_ets {int ets_cap; int * prio_tc; int tc_tsa; int tc_rx_bw; int tc_tx_bw; scalar_t__ cbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct ieee_ets *VAR_3)
{
 int VAR_4;


 VAR_3->ets_cap = VAR_0;
 VAR_3->cbs = 0;


 FUNC_0(VAR_3->tc_tx_bw, 0, sizeof(VAR_3->tc_tx_bw));
 FUNC_0(VAR_3->tc_rx_bw, 0, sizeof(VAR_3->tc_rx_bw));
 FUNC_0(VAR_3->tc_tsa, VAR_1, sizeof(VAR_3->tc_tsa));


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->prio_tc[VAR_4] = FUNC_1(VAR_2, VAR_4);

 return 0;
}
