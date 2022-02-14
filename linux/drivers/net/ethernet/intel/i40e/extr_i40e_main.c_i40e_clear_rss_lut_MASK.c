
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct i40e_vsi {scalar_t__ type; int vf_id; struct i40e_pf* back; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {TYPE_1__* pdev; struct i40e_hw hw; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct i40e_hw*,int ,int ) ;
 int FUNC_4 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct i40e_vsi *VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_4->back;
 struct i40e_hw *VAR_6 = &VAR_5->hw;
 u16 VAR_7 = VAR_4->vf_id;
 u8 VAR_8;

 if (VAR_4->type == VAR_2) {
  for (VAR_8 = 0; VAR_8 <= VAR_0; VAR_8++)
   FUNC_4(VAR_6, FUNC_0(VAR_8), 0);
 } else if (VAR_4->type == VAR_3) {
  for (VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++)
   FUNC_3(VAR_6, FUNC_1(VAR_8, VAR_7), 0);
 } else {
  FUNC_2(&VAR_5->pdev->dev, "Cannot set RSS LUT - invalid VSI type\n");
 }
}
