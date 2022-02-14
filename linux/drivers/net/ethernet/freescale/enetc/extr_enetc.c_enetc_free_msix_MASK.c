
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enetc_ndev_priv {int bdr_int_num; int num_rx_rings; int num_tx_rings; TYPE_1__* si; struct enetc_int_vector** int_vector; int ** tx_ring; int ** rx_ring; } ;
struct enetc_int_vector {int napi; } ;
struct TYPE_2__ {int pdev; } ;


 int FUNC_0 (struct enetc_int_vector*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct enetc_ndev_priv *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->bdr_int_num; VAR_1++) {
  struct enetc_int_vector *VAR_2 = VAR_0->int_vector[VAR_1];

  FUNC_1(&VAR_2->napi);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_rings; VAR_1++)
  VAR_0->rx_ring[VAR_1] = ((void*)0);

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_rings; VAR_1++)
  VAR_0->tx_ring[VAR_1] = ((void*)0);

 for (VAR_1 = 0; VAR_1 < VAR_0->bdr_int_num; VAR_1++) {
  FUNC_0(VAR_0->int_vector[VAR_1]);
  VAR_0->int_vector[VAR_1] = ((void*)0);
 }


 FUNC_2(VAR_0->si->pdev);
}
