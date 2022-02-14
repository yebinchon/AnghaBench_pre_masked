
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int debug_mask; } ;
struct i40e_pf {int flags; TYPE_2__* pdev; TYPE_1__ hw; int state; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct i40e_pf *VAR_3)
{
 if (FUNC_1(VAR_2, VAR_3->state))
  if ((VAR_3->flags & VAR_1) &&
      (VAR_0 & VAR_3->hw.debug_mask))
   FUNC_0(&VAR_3->pdev->dev, "FD Sideband/ntuple is being enabled since we have space in the table now\n");
}
