
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40e_vsi {int netdev; struct i40e_ring** rx_rings; } ;
struct i40e_ring {struct i40e_q_vector* q_vector; } ;
struct TYPE_4__ {scalar_t__ ring; } ;
struct TYPE_3__ {scalar_t__ ring; } ;
struct i40e_q_vector {int napi; TYPE_2__ tx; TYPE_1__ rx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct i40e_vsi *VAR_0, int VAR_1,
     bool VAR_2)
{
 struct i40e_ring *VAR_3 = VAR_0->rx_rings[VAR_1];
 struct i40e_q_vector *VAR_4 = VAR_3->q_vector;

 if (!VAR_0->netdev)
  return;


 if (VAR_4->rx.ring || VAR_4->tx.ring) {
  if (VAR_2)
   FUNC_1(&VAR_4->napi);
  else
   FUNC_0(&VAR_4->napi);
 }
}
