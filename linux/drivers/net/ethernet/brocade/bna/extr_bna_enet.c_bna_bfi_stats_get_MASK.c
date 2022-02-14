
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {void* num_entries; } ;
struct TYPE_12__ {int addr_lo; int addr_hi; } ;
struct TYPE_13__ {TYPE_3__ a32; } ;
struct bfi_enet_stats_req {TYPE_8__ mh; TYPE_4__ host_buffer; void* rx_enet_mask; void* tx_enet_mask; void* stats_mask; } ;
struct TYPE_16__ {int stats_get_busy; int stats_get_cmd; struct bfi_enet_stats_req stats_get; } ;
struct TYPE_14__ {int lsb; int msb; } ;
struct TYPE_15__ {TYPE_5__ hw_stats_dma; } ;
struct TYPE_11__ {int rid_mask; } ;
struct TYPE_10__ {int rid_mask; } ;
struct bna {TYPE_7__ stats_mod; int msgq; TYPE_6__ stats; TYPE_2__ rx_mod; TYPE_1__ tx_mod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int,TYPE_8__*) ;
 int FUNC_2 (TYPE_8__,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct bna *VAR_3)
{
 struct bfi_enet_stats_req *VAR_4 = &VAR_3->stats_mod.stats_get;

 VAR_3->stats_mod.stats_get_busy = 1;

 FUNC_2(VAR_4->mh, VAR_2,
  VAR_0, 0, 0);
 VAR_4->mh.num_entries = FUNC_5(
  FUNC_3(sizeof(struct bfi_enet_stats_req)));
 VAR_4->stats_mask = FUNC_5(VAR_1);
 VAR_4->tx_enet_mask = FUNC_4(VAR_3->tx_mod.rid_mask);
 VAR_4->rx_enet_mask = FUNC_4(VAR_3->rx_mod.rid_mask);
 VAR_4->host_buffer.a32.addr_hi = VAR_3->stats.hw_stats_dma.msb;
 VAR_4->host_buffer.a32.addr_lo = VAR_3->stats.hw_stats_dma.lsb;

 FUNC_1(&VAR_3->stats_mod.stats_get_cmd, ((void*)0), ((void*)0),
  sizeof(struct bfi_enet_stats_req), &VAR_4->mh);
 FUNC_0(&VAR_3->msgq, &VAR_3->stats_mod.stats_get_cmd);
}
