
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vf {size_t lan_vsi_idx; int vf_id; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {int num_alloc_vfs; int state; struct i40e_vf* vf; int * vsi; TYPE_1__* pdev; struct i40e_hw hw; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct i40e_vf*) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (struct i40e_vf*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct i40e_hw*,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int,int) ;

bool FUNC_12(struct i40e_pf *VAR_2, bool VAR_3)
{
 struct i40e_hw *VAR_4 = &VAR_2->hw;
 struct i40e_vf *VAR_5;
 int VAR_6, VAR_7;
 u32 VAR_8;


 if (!VAR_2->num_alloc_vfs)
  return 0;


 if (FUNC_10(VAR_1, VAR_2->state))
  return 0;


 for (VAR_7 = 0; VAR_7 < VAR_2->num_alloc_vfs; VAR_7++)
  FUNC_5(&VAR_2->vf[VAR_7], VAR_3);







 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < 10 && VAR_7 < VAR_2->num_alloc_vfs; VAR_6++) {
  FUNC_11(10000, 20000);




  while (VAR_7 < VAR_2->num_alloc_vfs) {
   VAR_5 = &VAR_2->vf[VAR_7];
   VAR_8 = FUNC_9(VAR_4, FUNC_0(VAR_5->vf_id));
   if (!(VAR_8 & VAR_0))
    break;




   VAR_7++;
  }
 }

 if (VAR_3)
  FUNC_11(10000, 20000);




 if (VAR_7 < VAR_2->num_alloc_vfs)
  FUNC_2(&VAR_2->pdev->dev, "VF reset check timeout on VF %d\n",
   VAR_2->vf[VAR_7].vf_id);
 FUNC_11(10000, 20000);




 for (VAR_7 = 0; VAR_7 < VAR_2->num_alloc_vfs; VAR_7++) {

  if (VAR_2->vf[VAR_7].lan_vsi_idx == 0)
   continue;

  FUNC_6(VAR_2->vsi[VAR_2->vf[VAR_7].lan_vsi_idx]);
 }




 for (VAR_7 = 0; VAR_7 < VAR_2->num_alloc_vfs; VAR_7++) {

  if (VAR_2->vf[VAR_7].lan_vsi_idx == 0)
   continue;

  FUNC_7(VAR_2->vsi[VAR_2->vf[VAR_7].lan_vsi_idx]);
 }




 FUNC_8(50);


 for (VAR_7 = 0; VAR_7 < VAR_2->num_alloc_vfs; VAR_7++)
  FUNC_3(&VAR_2->vf[VAR_7]);

 FUNC_4(VAR_4);
 FUNC_1(VAR_1, VAR_2->state);

 return 1;
}
