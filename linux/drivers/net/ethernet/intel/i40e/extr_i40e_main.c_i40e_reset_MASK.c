
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_hw {int dummy; } ;
struct i40e_pf {int pfr_count; int state; TYPE_1__* pdev; struct i40e_hw hw; } ;
typedef int i40e_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i40e_pf *VAR_2)
{
 struct i40e_hw *VAR_3 = &VAR_2->hw;
 i40e_status VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  FUNC_1(&VAR_2->pdev->dev, "PF reset failed, %d\n", VAR_4);
  FUNC_3(VAR_0, VAR_2->state);
  FUNC_0(VAR_1, VAR_2->state);
 } else {
  VAR_2->pfr_count++;
 }
 return VAR_4;
}
