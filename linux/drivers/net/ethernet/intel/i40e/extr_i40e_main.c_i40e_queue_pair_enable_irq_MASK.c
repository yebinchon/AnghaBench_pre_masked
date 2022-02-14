
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {struct i40e_pf* back; struct i40e_ring** rx_rings; } ;
struct i40e_ring {TYPE_1__* q_vector; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {int flags; struct i40e_hw hw; } ;
struct TYPE_2__ {int v_idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (struct i40e_vsi*,int ) ;
 int FUNC_2 (struct i40e_pf*) ;

__attribute__((used)) static void FUNC_3(struct i40e_vsi *VAR_1, int VAR_2)
{
 struct i40e_ring *VAR_3 = VAR_1->rx_rings[VAR_2];
 struct i40e_pf *VAR_4 = VAR_1->back;
 struct i40e_hw *VAR_5 = &VAR_4->hw;


 if (VAR_4->flags & VAR_0)
  FUNC_1(VAR_1, VAR_3->q_vector->v_idx);
 else
  FUNC_2(VAR_4);

 FUNC_0(VAR_5);
}
