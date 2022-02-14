
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int * rx_rings; int * xdp_rings; int * tx_rings; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (struct i40e_vsi*) ;
 int FUNC_4 (struct i40e_vsi*,int) ;
 int FUNC_5 (struct i40e_vsi*,int,int) ;
 int FUNC_6 (struct i40e_vsi*,int,int) ;

int FUNC_7(struct i40e_vsi *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->tx_rings[VAR_1]);
 if (VAR_2)
  return VAR_2;

 if (FUNC_2(VAR_0)) {
  VAR_2 = FUNC_1(VAR_0->xdp_rings[VAR_1]);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_0->rx_rings[VAR_1]);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_6(VAR_0, VAR_1, 1 );
 FUNC_5(VAR_0, VAR_1, 1 );
 FUNC_4(VAR_0, VAR_1);

 FUNC_3(VAR_0);

 return VAR_2;
}
