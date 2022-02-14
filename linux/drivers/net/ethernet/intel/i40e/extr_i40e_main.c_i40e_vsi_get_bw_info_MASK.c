
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct i40e_vsi {int bw_limit; int* bw_ets_limit_credits; scalar_t__* bw_ets_max_quanta; int * bw_ets_share_credits; int bw_max_quanta; int seid; struct i40e_pf* back; } ;
struct TYPE_3__ {int asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; } ;
struct i40e_pf {TYPE_2__* pdev; struct i40e_hw hw; } ;
struct i40e_aqc_query_vsi_ets_sla_config_resp {scalar_t__ tc_valid_bits; int * credits; int * share_credits; int * tc_bw_max; int member_0; } ;
struct i40e_aqc_query_vsi_bw_config_resp {scalar_t__ tc_valid_bits; int max_bw; int port_bw_limit; int member_0; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ,struct i40e_aqc_query_vsi_bw_config_resp*,int *) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int ,struct i40e_aqc_query_vsi_ets_sla_config_resp*,int *) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,int ) ;
 scalar_t__ FUNC_4 (struct i40e_hw*,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i40e_vsi *VAR_2)
{
 struct i40e_aqc_query_vsi_ets_sla_config_resp VAR_3 = {0};
 struct i40e_aqc_query_vsi_bw_config_resp VAR_4 = {0};
 struct i40e_pf *VAR_5 = VAR_2->back;
 struct i40e_hw *VAR_6 = &VAR_5->hw;
 i40e_status VAR_7;
 u32 VAR_8;
 int VAR_9;


 VAR_7 = FUNC_1(VAR_6, VAR_2->seid, &VAR_4, ((void*)0));
 if (VAR_7) {
  FUNC_0(&VAR_5->pdev->dev,
    "couldn't get PF vsi bw config, err %s aq_err %s\n",
    FUNC_4(&VAR_5->hw, VAR_7),
    FUNC_3(&VAR_5->hw, VAR_5->hw.aq.asq_last_status));
  return -VAR_0;
 }


 VAR_7 = FUNC_2(VAR_6, VAR_2->seid, &VAR_3,
            ((void*)0));
 if (VAR_7) {
  FUNC_0(&VAR_5->pdev->dev,
    "couldn't get PF vsi ets bw config, err %s aq_err %s\n",
    FUNC_4(&VAR_5->hw, VAR_7),
    FUNC_3(&VAR_5->hw, VAR_5->hw.aq.asq_last_status));
  return -VAR_0;
 }

 if (VAR_4.tc_valid_bits != VAR_3.tc_valid_bits) {
  FUNC_0(&VAR_5->pdev->dev,
    "Enabled TCs mismatch from querying VSI BW info 0x%08x 0x%08x\n",
    VAR_4.tc_valid_bits,
    VAR_3.tc_valid_bits);

 }

 VAR_2->bw_limit = FUNC_5(VAR_4.port_bw_limit);
 VAR_2->bw_max_quanta = VAR_4.max_bw;
 VAR_8 = FUNC_5(VAR_3.tc_bw_max[0]) |
      (FUNC_5(VAR_3.tc_bw_max[1]) << 16);
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_2->bw_ets_share_credits[VAR_9] = VAR_3.share_credits[VAR_9];
  VAR_2->bw_ets_limit_credits[VAR_9] =
     FUNC_5(VAR_3.credits[VAR_9]);

  VAR_2->bw_ets_max_quanta[VAR_9] = (u8)((VAR_8 >> (VAR_9*4)) & 0x7);
 }

 return 0;
}
