
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i40e_pf*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct i40e_pf *VAR_8)
{
 if (FUNC_2(VAR_7, VAR_8->state)) {





  FUNC_1(VAR_8, VAR_1,
     VAR_4 | VAR_3 |
     VAR_6 | VAR_5);

  if ((VAR_8->flags & VAR_2) &&
      (VAR_0 & VAR_8->hw.debug_mask))
   FUNC_0(&VAR_8->pdev->dev, "ATR is being enabled since we have space in the table and there are no conflicting ntuple rules\n");
 }
}
