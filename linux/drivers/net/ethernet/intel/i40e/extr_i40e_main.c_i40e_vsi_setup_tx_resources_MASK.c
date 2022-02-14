
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int num_queue_pairs; int * xdp_rings; int * tx_rings; } ;


 int FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct i40e_vsi *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_queue_pairs && !VAR_2; VAR_1++)
  VAR_2 = FUNC_1(VAR_0->tx_rings[VAR_1]);

 if (!FUNC_0(VAR_0))
  return VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_queue_pairs && !VAR_2; VAR_1++)
  VAR_2 = FUNC_1(VAR_0->xdp_rings[VAR_1]);

 return VAR_2;
}
