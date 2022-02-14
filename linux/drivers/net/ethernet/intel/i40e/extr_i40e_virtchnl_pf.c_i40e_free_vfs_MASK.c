
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int vf_base_id; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct i40e_pf {int num_alloc_vfs; int state; TYPE_2__* pdev; TYPE_4__* vf; int * vsi; struct i40e_hw hw; } ;
struct TYPE_9__ {size_t lan_vsi_idx; int vf_states; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct i40e_pf*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (struct i40e_hw*,int ,int ) ;

void FUNC_16(struct i40e_pf *VAR_2)
{
 struct i40e_hw *VAR_3 = &VAR_2->hw;
 u32 VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;

 if (!VAR_2->vf)
  return;
 while (FUNC_12(VAR_1, VAR_2->state))
  FUNC_14(1000, 2000);

 FUNC_6(VAR_2, 0);


 for (VAR_6 = 0; VAR_6 < VAR_2->num_alloc_vfs; VAR_6++) {
  if (FUNC_13(VAR_0, &VAR_2->vf[VAR_6].vf_states))
   continue;

  FUNC_7(VAR_2->vsi[VAR_2->vf[VAR_6].lan_vsi_idx]);
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->num_alloc_vfs; VAR_6++) {
  if (FUNC_13(VAR_0, &VAR_2->vf[VAR_6].vf_states))
   continue;

  FUNC_8(VAR_2->vsi[VAR_2->vf[VAR_6].lan_vsi_idx]);
 }





 if (!FUNC_11(VAR_2->pdev))
  FUNC_10(VAR_2->pdev);
 else
  FUNC_3(&VAR_2->pdev->dev, "VFs are assigned - not disabling SR-IOV\n");


 VAR_7 = VAR_2->num_alloc_vfs;
 VAR_2->num_alloc_vfs = 0;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (FUNC_13(VAR_0, &VAR_2->vf[VAR_6].vf_states))
   FUNC_5(&VAR_2->vf[VAR_6]);

  FUNC_4(&VAR_2->vf[VAR_6]);
 }

 FUNC_9(VAR_2->vf);
 VAR_2->vf = ((void*)0);





 if (!FUNC_11(VAR_2->pdev)) {



  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_4 = (VAR_3->func_caps.vf_base_id + VAR_8) / 32;
   VAR_5 = (VAR_3->func_caps.vf_base_id + VAR_8) % 32;
   FUNC_15(VAR_3, FUNC_1(VAR_4), FUNC_0(VAR_5));
  }
 }
 FUNC_2(VAR_1, VAR_2->state);
}
