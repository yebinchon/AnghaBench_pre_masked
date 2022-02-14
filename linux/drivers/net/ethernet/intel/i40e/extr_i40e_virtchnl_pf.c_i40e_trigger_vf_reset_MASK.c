
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vf {int vf_id; int vf_states; struct i40e_pf* pf; } ;
struct TYPE_3__ {int vf_base_id; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct i40e_pf {TYPE_2__* pdev; struct i40e_hw hw; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct i40e_hw*) ;
 scalar_t__ FUNC_6 (struct i40e_vf*) ;
 int FUNC_7 (struct i40e_hw*,int ) ;
 int FUNC_8 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct i40e_vf *VAR_3, bool VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_3->pf;
 struct i40e_hw *VAR_6 = &VAR_5->hw;
 u32 VAR_7, VAR_8, VAR_9;


 FUNC_3(VAR_0, &VAR_3->vf_states);







 FUNC_3(VAR_1, &VAR_3->vf_states);




 if (!VAR_4) {

  VAR_7 = FUNC_7(VAR_6, FUNC_2(VAR_3->vf_id));
  VAR_7 |= VAR_2;
  FUNC_8(VAR_6, FUNC_2(VAR_3->vf_id), VAR_7);
  FUNC_5(VAR_6);
 }

 VAR_8 = (VAR_6->func_caps.vf_base_id + VAR_3->vf_id) / 32;
 VAR_9 = (VAR_6->func_caps.vf_base_id + VAR_3->vf_id) % 32;
 FUNC_8(VAR_6, FUNC_1(VAR_8), FUNC_0(VAR_9));
 FUNC_5(VAR_6);

 if (FUNC_6(VAR_3))
  FUNC_4(&VAR_5->pdev->dev, "VF %d PCI transactions stuck\n",
   VAR_3->vf_id);
}
