
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int * txf_stats; int * rxf_stats; } ;
struct TYPE_8__ {TYPE_2__ hw_stats; TYPE_1__* hw_stats_kva; } ;
struct bfi_enet_stats_req {int rx_enet_mask; int tx_enet_mask; } ;
struct TYPE_7__ {int stats_get_busy; struct bfi_enet_stats_req stats_get; } ;
struct bna {TYPE_4__ stats; int bnad; TYPE_3__ stats_mod; } ;
struct bfi_msgq_mhdr {int dummy; } ;
struct bfi_enet_stats_txf {int dummy; } ;
struct bfi_enet_stats_rxf {int dummy; } ;
struct TYPE_5__ {int * rxf_stats; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_6(struct bna *VAR_8, struct bfi_msgq_mhdr *VAR_9)
{
 struct bfi_enet_stats_req *VAR_10 = &VAR_8->stats_mod.stats_get;
 u64 *VAR_11;
 u64 *VAR_12;
 u32 VAR_13 = FUNC_5(VAR_10->tx_enet_mask);
 u32 VAR_14 = FUNC_5(VAR_10->rx_enet_mask);
 int VAR_15;
 int VAR_16;

 FUNC_2(VAR_5, VAR_5);
 FUNC_2(VAR_2, VAR_2);
 FUNC_2(VAR_6, VAR_6);
 FUNC_2(VAR_7, VAR_6);
 FUNC_2(VAR_3, VAR_3);
 FUNC_2(VAR_4, VAR_4);

 VAR_11 = (u64 *)&(VAR_8->stats.hw_stats_kva->rxf_stats[0]);


 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  VAR_12 = (u64 *)&(VAR_8->stats.hw_stats.rxf_stats[VAR_16]);
  FUNC_4(VAR_12, 0, sizeof(struct bfi_enet_stats_rxf));
  if (VAR_14 & FUNC_0(VAR_16)) {
   int VAR_17;
   VAR_15 = sizeof(struct bfi_enet_stats_rxf) /
    sizeof(u64);
   for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
    VAR_12[VAR_17] = FUNC_1(*VAR_11);
    VAR_11++;
   }
  }
 }


 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  VAR_12 = (u64 *)&(VAR_8->stats.hw_stats.txf_stats[VAR_16]);
  FUNC_4(VAR_12, 0, sizeof(struct bfi_enet_stats_txf));
  if (VAR_13 & FUNC_0(VAR_16)) {
   int VAR_18;
   VAR_15 = sizeof(struct bfi_enet_stats_txf) /
    sizeof(u64);
   for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
    VAR_12[VAR_18] = FUNC_1(*VAR_11);
    VAR_11++;
   }
  }
 }

 VAR_8->stats_mod.stats_get_busy = 0;
 FUNC_3(VAR_8->bnad, VAR_1, &VAR_8->stats);
}
