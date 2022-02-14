
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_rx_ring_info {int rx_prod; int rx_db; int rx_agg_prod; int rx_agg_db; } ;
struct bnxt_napi {int events; struct bnxt_rx_ring_info* rx_ring; scalar_t__ tx_pkts; int (* tx_int ) (struct bnxt*,struct bnxt_napi*,scalar_t__) ;} ;
struct bnxt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,int *,int ) ;
 int FUNC_1 (struct bnxt*,struct bnxt_napi*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_2, struct bnxt_napi *VAR_3)
{
 if (VAR_3->tx_pkts) {
  VAR_3->tx_int(VAR_2, VAR_3, VAR_3->tx_pkts);
  VAR_3->tx_pkts = 0;
 }

 if (VAR_3->events & VAR_1) {
  struct bnxt_rx_ring_info *VAR_4 = VAR_3->rx_ring;

  if (VAR_3->events & VAR_0)
   FUNC_0(VAR_2, &VAR_4->rx_agg_db, VAR_4->rx_agg_prod);
  FUNC_0(VAR_2, &VAR_4->rx_db, VAR_4->rx_prod);
 }
 VAR_3->events = 0;
}
