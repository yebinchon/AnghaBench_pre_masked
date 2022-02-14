
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vsi {int base_vector; int num_queue_pairs; int num_q_vectors; TYPE_3__** xdp_rings; TYPE_2__** rx_rings; TYPE_1__** tx_rings; struct i40e_pf* back; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {int flags; TYPE_5__* pdev; TYPE_4__* msix_entries; struct i40e_hw hw; } ;
struct TYPE_10__ {int irq; } ;
struct TYPE_9__ {int vector; } ;
struct TYPE_8__ {int reg_idx; } ;
struct TYPE_7__ {int reg_idx; } ;
struct TYPE_6__ {int reg_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct i40e_vsi*) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (struct i40e_hw*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct i40e_vsi *VAR_5)
{
 struct i40e_pf *VAR_6 = VAR_5->back;
 struct i40e_hw *VAR_7 = &VAR_6->hw;
 int VAR_8 = VAR_5->base_vector;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_5->num_queue_pairs; VAR_9++) {
  u32 VAR_10;

  VAR_10 = FUNC_5(VAR_7, FUNC_2(VAR_5->tx_rings[VAR_9]->reg_idx));
  VAR_10 &= ~VAR_4;
  FUNC_7(VAR_7, FUNC_2(VAR_5->tx_rings[VAR_9]->reg_idx), VAR_10);

  VAR_10 = FUNC_5(VAR_7, FUNC_1(VAR_5->rx_rings[VAR_9]->reg_idx));
  VAR_10 &= ~VAR_3;
  FUNC_7(VAR_7, FUNC_1(VAR_5->rx_rings[VAR_9]->reg_idx), VAR_10);

  if (!FUNC_3(VAR_5))
   continue;
  FUNC_7(VAR_7, FUNC_2(VAR_5->xdp_rings[VAR_9]->reg_idx), 0);
 }


 if (VAR_6->flags & VAR_0) {
  for (VAR_9 = VAR_5->base_vector;
       VAR_9 < (VAR_5->num_q_vectors + VAR_5->base_vector); VAR_9++)
   FUNC_7(VAR_7, FUNC_0(VAR_9 - 1), 0);

  FUNC_4(VAR_7);
  for (VAR_9 = 0; VAR_9 < VAR_5->num_q_vectors; VAR_9++)
   FUNC_6(VAR_6->msix_entries[VAR_9 + VAR_8].vector);
 } else {

  FUNC_7(VAR_7, VAR_2, 0);
  FUNC_7(VAR_7, VAR_1, 0);
  FUNC_4(VAR_7);
  FUNC_6(VAR_6->pdev->irq);
 }
}
