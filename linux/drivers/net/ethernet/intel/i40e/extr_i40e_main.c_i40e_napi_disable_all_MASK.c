
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40e_vsi {int num_q_vectors; struct i40e_q_vector** q_vectors; int netdev; } ;
struct TYPE_4__ {scalar_t__ ring; } ;
struct TYPE_3__ {scalar_t__ ring; } ;
struct i40e_q_vector {int napi; TYPE_2__ tx; TYPE_1__ rx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct i40e_vsi *VAR_0)
{
 int VAR_1;

 if (!VAR_0->netdev)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_q_vectors; VAR_1++) {
  struct i40e_q_vector *VAR_2 = VAR_0->q_vectors[VAR_1];

  if (VAR_2->rx.ring || VAR_2->tx.ring)
   FUNC_0(&VAR_2->napi);
 }
}
