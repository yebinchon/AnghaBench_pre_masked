
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vf {size_t lan_vsi_idx; int vf_id; struct i40e_pf* pf; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {int state; int * vsi; TYPE_1__* pdev; struct i40e_hw hw; } ;
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
 int FUNC_7 (struct i40e_hw*,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int) ;

bool FUNC_10(struct i40e_vf *VAR_2, bool VAR_3)
{
 struct i40e_pf *VAR_4 = VAR_2->pf;
 struct i40e_hw *VAR_5 = &VAR_4->hw;
 bool VAR_6 = 0;
 u32 VAR_7;
 int VAR_8;




 if (FUNC_8(VAR_1, VAR_4->state))
  return 0;

 FUNC_5(VAR_2, VAR_3);




 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {





  FUNC_9(10000, 20000);
  VAR_7 = FUNC_7(VAR_5, FUNC_0(VAR_2->vf_id));
  if (VAR_7 & VAR_0) {
   VAR_6 = 1;
   break;
  }
 }

 if (VAR_3)
  FUNC_9(10000, 20000);

 if (!VAR_6)
  FUNC_2(&VAR_4->pdev->dev, "VF reset check timeout on VF %d\n",
   VAR_2->vf_id);
 FUNC_9(10000, 20000);


 if (VAR_2->lan_vsi_idx != 0)
  FUNC_6(VAR_4->vsi[VAR_2->lan_vsi_idx]);

 FUNC_3(VAR_2);

 FUNC_4(VAR_5);
 FUNC_1(VAR_1, VAR_4->state);

 return 1;
}
