
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct i40e_vsi {size_t num_queue_pairs; int * xdp_rings; int * tx_rings; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct i40e_vsi*) ;

__attribute__((used)) static int FUNC_2(struct i40e_vsi *VAR_0)
{
 int VAR_1 = 0;
 u16 VAR_2;

 for (VAR_2 = 0; (VAR_2 < VAR_0->num_queue_pairs) && !VAR_1; VAR_2++)
  VAR_1 = FUNC_0(VAR_0->tx_rings[VAR_2]);

 if (VAR_1 || !FUNC_1(VAR_0))
  return VAR_1;

 for (VAR_2 = 0; (VAR_2 < VAR_0->num_queue_pairs) && !VAR_1; VAR_2++)
  VAR_1 = FUNC_0(VAR_0->xdp_rings[VAR_2]);

 return VAR_1;
}
