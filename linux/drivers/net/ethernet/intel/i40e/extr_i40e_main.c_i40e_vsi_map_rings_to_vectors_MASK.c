
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40e_vsi {int num_queue_pairs; int num_q_vectors; scalar_t__ base_vector; struct i40e_q_vector** q_vectors; } ;
struct TYPE_4__ {int * ring; scalar_t__ count; } ;
struct TYPE_3__ {int * ring; scalar_t__ count; } ;
struct i40e_q_vector {int num_ringpairs; TYPE_2__ tx; TYPE_1__ rx; scalar_t__ v_idx; scalar_t__ reg_idx; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct i40e_vsi*,int,int) ;

__attribute__((used)) static void FUNC_2(struct i40e_vsi *VAR_0)
{
 int VAR_1 = VAR_0->num_queue_pairs;
 int VAR_2 = VAR_0->num_q_vectors;
 int VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;
 for (; VAR_4 < VAR_2; VAR_4++) {
  struct i40e_q_vector *VAR_6 = VAR_0->q_vectors[VAR_4];

  VAR_3 = FUNC_0(VAR_1, VAR_2 - VAR_4);

  VAR_6->num_ringpairs = VAR_3;
  VAR_6->reg_idx = VAR_6->v_idx + VAR_0->base_vector - 1;

  VAR_6->rx.count = 0;
  VAR_6->tx.count = 0;
  VAR_6->rx.ring = ((void*)0);
  VAR_6->tx.ring = ((void*)0);

  while (VAR_3--) {
   FUNC_1(VAR_0, VAR_4, VAR_5);
   VAR_5++;
   VAR_1--;
  }
 }
}
