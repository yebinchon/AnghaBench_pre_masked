
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i40e_veb {int bw_limit; int* bw_tc_limit_credits; int* bw_tc_max_quanta; int * bw_tc_share_credits; int enabled_tc; int is_abs_credits; int bw_max_quanta; int seid; struct i40e_pf* pf; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct i40e_hw {TYPE_2__ aq; } ;
struct i40e_pf {struct i40e_hw hw; TYPE_1__* pdev; } ;
struct i40e_aqc_query_switching_comp_ets_config_resp {int tc_valid_bits; int tc_bw_max; int port_bw_limit; } ;
struct i40e_aqc_query_switching_comp_bw_config_resp {int * tc_bw_limits; int * tc_bw_share_credits; int * tc_bw_max; int absolute_credits_enable; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct i40e_hw*,int ,struct i40e_aqc_query_switching_comp_bw_config_resp*,int *) ;
 int FUNC_2 (struct i40e_hw*,int ,struct i40e_aqc_query_switching_comp_ets_config_resp*,int *) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct i40e_hw*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i40e_veb *VAR_1)
{
 struct i40e_aqc_query_switching_comp_ets_config_resp VAR_2;
 struct i40e_aqc_query_switching_comp_bw_config_resp VAR_3;
 struct i40e_pf *VAR_4 = VAR_1->pf;
 struct i40e_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_5, VAR_1->seid,
        &VAR_3, ((void*)0));
 if (VAR_7) {
  FUNC_0(&VAR_4->pdev->dev,
    "query veb bw config failed, err %s aq_err %s\n",
    FUNC_4(&VAR_4->hw, VAR_7),
    FUNC_3(&VAR_4->hw, VAR_5->aq.asq_last_status));
  goto out;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_1->seid,
         &VAR_2, ((void*)0));
 if (VAR_7) {
  FUNC_0(&VAR_4->pdev->dev,
    "query veb bw ets config failed, err %s aq_err %s\n",
    FUNC_4(&VAR_4->hw, VAR_7),
    FUNC_3(&VAR_4->hw, VAR_5->aq.asq_last_status));
  goto out;
 }

 VAR_1->bw_limit = FUNC_5(VAR_2.port_bw_limit);
 VAR_1->bw_max_quanta = VAR_2.tc_bw_max;
 VAR_1->is_abs_credits = VAR_3.absolute_credits_enable;
 VAR_1->enabled_tc = VAR_2.tc_valid_bits;
 VAR_6 = FUNC_5(VAR_3.tc_bw_max[0]) |
      (FUNC_5(VAR_3.tc_bw_max[1]) << 16);
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_1->bw_tc_share_credits[VAR_8] = VAR_3.tc_bw_share_credits[VAR_8];
  VAR_1->bw_tc_limit_credits[VAR_8] =
     FUNC_5(VAR_3.tc_bw_limits[VAR_8]);
  VAR_1->bw_tc_max_quanta[VAR_8] = ((VAR_6 >> (VAR_8*4)) & 0x7);
 }

out:
 return VAR_7;
}
