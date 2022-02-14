
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {scalar_t__ type; int num_queue_pairs; int * rx_rings; int * xdp_rings; int * tx_rings; TYPE_1__* back; scalar_t__ netdev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct i40e_vsi*) ;
 int FUNC_5 (struct i40e_vsi*) ;
 int FUNC_6 (struct i40e_vsi*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;

void FUNC_10(struct i40e_vsi *VAR_2)
{
 int VAR_3;




 if (VAR_2->netdev) {
  FUNC_7(VAR_2->netdev);
  FUNC_8(VAR_2->netdev);
 }
 FUNC_5(VAR_2);
 FUNC_6(VAR_2);
 if (VAR_2->type == VAR_1 &&
     VAR_2->back->flags & VAR_0)
  FUNC_3(VAR_2->back, 0);
 FUNC_4(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2->num_queue_pairs; VAR_3++) {
  FUNC_1(VAR_2->tx_rings[VAR_3]);
  if (FUNC_2(VAR_2)) {



   FUNC_9();
   FUNC_1(VAR_2->xdp_rings[VAR_3]);
  }
  FUNC_0(VAR_2->rx_rings[VAR_3]);
 }

}
