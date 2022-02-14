
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {scalar_t__ hmc_obj; } ;
struct i40e_hw {TYPE_2__ hmc; } ;
struct i40e_pf {size_t num_alloc_vsi; TYPE_3__* pdev; struct i40e_hw hw; TYPE_1__** vsi; int state; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {scalar_t__ seid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (struct i40e_pf*) ;
 int FUNC_5 (struct i40e_pf*) ;
 int FUNC_6 (struct i40e_hw*) ;
 scalar_t__ FUNC_7 (struct i40e_hw*) ;
 int FUNC_8 (struct i40e_pf*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(struct i40e_pf *VAR_2, bool VAR_3)
{
 struct i40e_hw *VAR_4 = &VAR_2->hw;
 i40e_status VAR_5 = 0;
 u32 VAR_6;

 FUNC_0(VAR_0, VAR_2->state);
 if (FUNC_11(VAR_1, VAR_2->state))
  return;
 if (FUNC_3(&VAR_2->hw))
  FUNC_8(VAR_2);

 FUNC_1(&VAR_2->pdev->dev, "Tearing down internal switch for reset\n");



 if (!VAR_3)
  FUNC_9();
 FUNC_4(VAR_2);
 if (!VAR_3)
  FUNC_10();

 for (VAR_6 = 0; VAR_6 < VAR_2->num_alloc_vsi; VAR_6++) {
  if (VAR_2->vsi[VAR_6])
   VAR_2->vsi[VAR_6]->seid = 0;
 }

 FUNC_6(&VAR_2->hw);


 if (VAR_4->hmc.hmc_obj) {
  VAR_5 = FUNC_7(VAR_4);
  if (VAR_5)
   FUNC_2(&VAR_2->pdev->dev,
     "shutdown_lan_hmc failed: %d\n", VAR_5);
 }




 FUNC_5(VAR_2);
}
