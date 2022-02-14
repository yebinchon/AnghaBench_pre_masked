
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int alloc_queue_pairs; int num_q_vectors; struct i40e_ring** tx_rings; void* q_vectors; struct i40e_ring** rx_rings; struct i40e_ring** xdp_rings; } ;
struct i40e_ring {int dummy; } ;
struct i40e_q_vector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (struct i40e_ring**) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct i40e_vsi *VAR_2, bool VAR_3)
{
 struct i40e_ring **VAR_4;
 int VAR_5;
 int VAR_6 = 0;


 VAR_5 = sizeof(struct i40e_ring *) * VAR_2->alloc_queue_pairs *
        (FUNC_0(VAR_2) ? 3 : 2);
 VAR_2->tx_rings = FUNC_2(VAR_5, VAR_1);
 if (!VAR_2->tx_rings)
  return -VAR_0;
 VAR_4 = VAR_2->tx_rings + VAR_2->alloc_queue_pairs;
 if (FUNC_0(VAR_2)) {
  VAR_2->xdp_rings = VAR_4;
  VAR_4 += VAR_2->alloc_queue_pairs;
 }
 VAR_2->rx_rings = VAR_4;

 if (VAR_3) {

  VAR_5 = sizeof(struct i40e_q_vector *) * VAR_2->num_q_vectors;
  VAR_2->q_vectors = FUNC_2(VAR_5, VAR_1);
  if (!VAR_2->q_vectors) {
   VAR_6 = -VAR_0;
   goto err_vectors;
  }
 }
 return VAR_6;

err_vectors:
 FUNC_1(VAR_2->tx_rings);
 return VAR_6;
}
