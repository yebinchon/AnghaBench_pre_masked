
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i40e_vf {int adq_enabled; int vf_id; scalar_t__ num_tc; int vf_states; struct i40e_pf* pf; } ;
struct i40e_pf {TYPE_1__* pdev; } ;
typedef int i40e_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i40e_vf*) ;
 int FUNC_2 (struct i40e_vf*) ;
 int FUNC_3 (struct i40e_vf*,int) ;
 int FUNC_4 (struct i40e_vf*) ;
 int FUNC_5 (struct i40e_vf*,int ,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct i40e_vf *VAR_4, u8 *VAR_5)
{
 struct i40e_pf *VAR_6 = VAR_4->pf;
 i40e_status VAR_7 = 0;

 if (!FUNC_6(VAR_2, &VAR_4->vf_states)) {
  VAR_7 = VAR_0;
  goto err;
 }

 if (VAR_4->adq_enabled) {
  FUNC_1(VAR_4);
  FUNC_2(VAR_4);
  VAR_4->adq_enabled = 0;
  VAR_4->num_tc = 0;
  FUNC_0(&VAR_6->pdev->dev,
    "Deleting Queue Channels and cloud filters for ADq on VF %d\n",
    VAR_4->vf_id);
 } else {
  FUNC_0(&VAR_6->pdev->dev, "VF %d trying to delete queue channels but ADq isn't enabled\n",
    VAR_4->vf_id);
  VAR_7 = VAR_0;
 }


 FUNC_4(VAR_4);
 FUNC_3(VAR_4, 0);

 return VAR_1;

err:
 return FUNC_5(VAR_4, VAR_3,
           VAR_7);
}
