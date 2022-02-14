
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ small_pkt_cnt; scalar_t__ large_pkt_cnt; } ;
struct bna_ccb {TYPE_4__* cq; int rx_coalescing_timeo; TYPE_2__ pkt_rate; } ;
struct TYPE_7__ {int ** dim_vector; } ;
struct bna {TYPE_3__ rx_mod; } ;
struct TYPE_8__ {int ib; TYPE_1__* rx; } ;
struct TYPE_5__ {struct bna* bna; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct bna_ccb *VAR_15)
{
 struct bna *VAR_16 = VAR_15->cq->rx->bna;
 u32 VAR_17, VAR_18;
 u32 VAR_19, VAR_20, VAR_21;
 u8 VAR_22;

 if ((VAR_15->pkt_rate.small_pkt_cnt == 0) &&
  (VAR_15->pkt_rate.large_pkt_cnt == 0))
  return;



 VAR_20 = VAR_15->pkt_rate.small_pkt_cnt;
 VAR_21 = VAR_15->pkt_rate.large_pkt_cnt;

 VAR_19 = VAR_20 + VAR_21;

 if (VAR_19 < VAR_8)
  VAR_17 = VAR_7;
 else if (VAR_19 < VAR_9)
  VAR_17 = VAR_6;
 else if (VAR_19 < VAR_10)
  VAR_17 = VAR_5;
 else if (VAR_19 < VAR_11)
  VAR_17 = VAR_4;
 else if (VAR_19 < VAR_12)
  VAR_17 = VAR_0;
 else if (VAR_19 < VAR_13)
  VAR_17 = VAR_1;
 else if (VAR_19 < VAR_14)
  VAR_17 = VAR_2;
 else
  VAR_17 = VAR_3;

 if (VAR_20 > (VAR_21 << 1))
  VAR_18 = 0;
 else
  VAR_18 = 1;

 VAR_15->pkt_rate.small_pkt_cnt = 0;
 VAR_15->pkt_rate.large_pkt_cnt = 0;

 VAR_22 = VAR_16->rx_mod.dim_vector[VAR_17][VAR_18];
 VAR_15->rx_coalescing_timeo = VAR_22;


 FUNC_0(&VAR_15->cq->ib, VAR_22);
}
