
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int n_per_out; scalar_t__ max_adj; } ;
struct TYPE_8__ {int pps_out_num; } ;
struct stmmac_priv {int dev; int * ptp_clock; int device; TYPE_4__ ptp_clock_ops; int ptp_lock; TYPE_3__ dma_cap; TYPE_2__* plat; TYPE_1__* pps; } ;
struct TYPE_7__ {scalar_t__ ptp_max_adj; } ;
struct TYPE_6__ {int available; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int *) ;
 TYPE_4__ VAR_1 ;

void FUNC_5(struct stmmac_priv *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->dma_cap.pps_out_num; VAR_3++) {
  if (VAR_3 >= VAR_0)
   break;
  VAR_2->pps[VAR_3].available = 1;
 }

 if (VAR_2->plat->ptp_max_adj)
  VAR_1.max_adj = VAR_2->plat->ptp_max_adj;

 VAR_1.n_per_out = VAR_2->dma_cap.pps_out_num;

 FUNC_4(&VAR_2->ptp_lock);
 VAR_2->ptp_clock_ops = VAR_1;

 VAR_2->ptp_clock = FUNC_3(&VAR_2->ptp_clock_ops,
          VAR_2->device);
 if (FUNC_0(VAR_2->ptp_clock)) {
  FUNC_1(VAR_2->dev, "ptp_clock_register failed\n");
  VAR_2->ptp_clock = ((void*)0);
 } else if (VAR_2->ptp_clock)
  FUNC_2(VAR_2->dev, "registered PTP clock\n");
}
