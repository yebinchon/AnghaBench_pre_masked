
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_pf {int state; TYPE_1__* pdev; int hw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct i40e_pf *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->hw);
 if (VAR_2) {

  VAR_2 = FUNC_2(&VAR_1->hw);
  if (VAR_2) {
   FUNC_1(&VAR_1->pdev->dev, "eeprom check failed (%d), Tx/Rx traffic disabled\n",
     VAR_2);
   FUNC_3(VAR_0, VAR_1->state);
  }
 }

 if (!VAR_2 && FUNC_4(VAR_0, VAR_1->state)) {
  FUNC_1(&VAR_1->pdev->dev, "eeprom check passed, Tx/Rx traffic enabled\n");
  FUNC_0(VAR_0, VAR_1->state);
 }
}
