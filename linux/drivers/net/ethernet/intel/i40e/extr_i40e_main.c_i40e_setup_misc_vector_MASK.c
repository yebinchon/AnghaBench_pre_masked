
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40e_hw {int dummy; } ;
struct i40e_pf {int int_name; TYPE_2__* pdev; int state; TYPE_1__* msix_entries; struct i40e_hw hw; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (struct i40e_pf*) ;
 int FUNC_4 (struct i40e_hw*) ;
 int VAR_6 ;
 int FUNC_5 (struct i40e_pf*) ;
 int FUNC_6 (int ,int ,int ,int ,struct i40e_pf*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct i40e_pf *VAR_7)
{
 struct i40e_hw *VAR_8 = &VAR_7->hw;
 int VAR_9 = 0;


 if (!FUNC_7(VAR_5, VAR_7->state)) {
  VAR_9 = FUNC_6(VAR_7->msix_entries[0].vector,
      VAR_6, 0, VAR_7->int_name, VAR_7);
  if (VAR_9) {
   FUNC_1(VAR_5, VAR_7->state);
   FUNC_2(&VAR_7->pdev->dev,
     "request_irq for %s failed: %d\n",
     VAR_7->int_name, VAR_9);
   return -VAR_0;
  }
 }

 FUNC_3(VAR_7);


 FUNC_8(VAR_8, VAR_2, VAR_3);
 FUNC_8(VAR_8, FUNC_0(VAR_4), VAR_1);

 FUNC_4(VAR_8);

 FUNC_5(VAR_7);

 return VAR_9;
}
