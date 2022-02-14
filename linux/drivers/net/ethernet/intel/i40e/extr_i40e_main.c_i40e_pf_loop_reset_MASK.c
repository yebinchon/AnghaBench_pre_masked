
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_hw {int dummy; } ;
struct i40e_pf {int pfr_count; TYPE_1__* pdev; struct i40e_hw hw; } ;
typedef int i40e_status ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (unsigned short const) ;

__attribute__((used)) static i40e_status FUNC_3(struct i40e_pf *VAR_0)
{
 const unsigned short VAR_1 = 1000;
 const unsigned short VAR_2 = 10;
 struct i40e_hw *VAR_3 = &VAR_0->hw;
 i40e_status VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  VAR_4 = FUNC_1(VAR_3);
  if (!VAR_4)
   break;
  FUNC_2(VAR_2);
 }

 if (VAR_5 == VAR_1) {
  FUNC_0(&VAR_0->pdev->dev, "PF reset failed: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_0->pfr_count++;
 return VAR_4;
}
