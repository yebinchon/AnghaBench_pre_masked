
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_vsi {TYPE_3__** xdp_rings; TYPE_2__** tx_rings; TYPE_1__** rx_rings; } ;
struct TYPE_6__ {int stats; } ;
struct TYPE_5__ {int stats; } ;
struct TYPE_4__ {int rx_stats; } ;


 scalar_t__ FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct i40e_vsi *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->rx_rings[VAR_1]->rx_stats, 0,
        sizeof(VAR_0->rx_rings[VAR_1]->rx_stats));
 FUNC_1(&VAR_0->tx_rings[VAR_1]->stats, 0,
        sizeof(VAR_0->tx_rings[VAR_1]->stats));
 if (FUNC_0(VAR_0)) {
  FUNC_1(&VAR_0->xdp_rings[VAR_1]->stats, 0,
         sizeof(VAR_0->xdp_rings[VAR_1]->stats));
 }
}
