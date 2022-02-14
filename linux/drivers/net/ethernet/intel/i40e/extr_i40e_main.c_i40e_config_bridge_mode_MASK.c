
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40e_veb {int bridge_mode; struct i40e_pf* pf; } ;
struct TYPE_3__ {int debug_mask; } ;
struct i40e_pf {TYPE_2__* pdev; TYPE_1__ hw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (struct i40e_pf*) ;
 int FUNC_2 (struct i40e_pf*) ;

__attribute__((used)) static void FUNC_3(struct i40e_veb *VAR_2)
{
 struct i40e_pf *VAR_3 = VAR_2->pf;

 if (VAR_3->hw.debug_mask & VAR_1)
  FUNC_0(&VAR_3->pdev->dev, "enabling bridge mode: %s\n",
    VAR_2->bridge_mode == VAR_0 ? "VEPA" : "VEB");
 if (VAR_2->bridge_mode & VAR_0)
  FUNC_1(VAR_3);
 else
  FUNC_2(VAR_3);
}
