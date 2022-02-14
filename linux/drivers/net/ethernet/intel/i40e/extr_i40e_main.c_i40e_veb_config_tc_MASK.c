
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct i40e_veb {int enabled_tc; int seid; struct i40e_pf* pf; } ;
struct TYPE_7__ {int asq_last_status; } ;
struct TYPE_8__ {TYPE_2__ aq; } ;
struct i40e_pf {TYPE_3__ hw; TYPE_1__* pdev; } ;
struct i40e_aqc_configure_switching_comp_bw_config_data {int tc_valid_bits; int* tc_bw_share_credits; int member_0; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,struct i40e_aqc_configure_switching_comp_bw_config_data*,int *) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (struct i40e_veb*) ;

int FUNC_6(struct i40e_veb *VAR_1, u8 VAR_2)
{
 struct i40e_aqc_configure_switching_comp_bw_config_data VAR_3 = {0};
 struct i40e_pf *VAR_4 = VAR_1->pf;
 int VAR_5 = 0;
 int VAR_6;


 if (!VAR_2 || VAR_1->enabled_tc == VAR_2)
  return VAR_5;

 VAR_3.tc_valid_bits = VAR_2;



 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_2 & FUNC_0(VAR_6))
   VAR_3.tc_bw_share_credits[VAR_6] = 1;
 }

 VAR_5 = FUNC_2(&VAR_4->hw, VAR_1->seid,
         &VAR_3, ((void*)0));
 if (VAR_5) {
  FUNC_1(&VAR_4->pdev->dev,
    "VEB bw config failed, err %s aq_err %s\n",
    FUNC_4(&VAR_4->hw, VAR_5),
    FUNC_3(&VAR_4->hw, VAR_4->hw.aq.asq_last_status));
  goto out;
 }


 VAR_5 = FUNC_5(VAR_1);
 if (VAR_5) {
  FUNC_1(&VAR_4->pdev->dev,
    "Failed getting veb bw config, err %s aq_err %s\n",
    FUNC_4(&VAR_4->hw, VAR_5),
    FUNC_3(&VAR_4->hw, VAR_4->hw.aq.asq_last_status));
 }

out:
 return VAR_5;
}
