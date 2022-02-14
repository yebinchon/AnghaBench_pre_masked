
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vsi {int base_vector; struct i40e_pf* back; struct i40e_ring** rx_rings; } ;
struct i40e_ring {TYPE_1__* q_vector; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {int flags; TYPE_3__* pdev; TYPE_2__* msix_entries; struct i40e_hw hw; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_5__ {int vector; } ;
struct TYPE_4__ {int v_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct i40e_vsi *VAR_3, int VAR_4)
{
 struct i40e_ring *VAR_5 = VAR_3->rx_rings[VAR_4];
 struct i40e_pf *VAR_6 = VAR_3->back;
 struct i40e_hw *VAR_7 = &VAR_6->hw;







 if (VAR_6->flags & VAR_0) {
  u32 VAR_8 = VAR_3->base_vector + VAR_5->q_vector->v_idx;

  FUNC_3(VAR_7, FUNC_0(VAR_8 - 1), 0);
  FUNC_1(VAR_7);
  FUNC_2(VAR_6->msix_entries[VAR_8].vector);
 } else {

  FUNC_3(VAR_7, VAR_2, 0);
  FUNC_3(VAR_7, VAR_1, 0);
  FUNC_1(VAR_7);
  FUNC_2(VAR_6->pdev->irq);
 }
}
