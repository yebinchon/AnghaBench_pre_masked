
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct i40e_vsi {TYPE_3__* back; } ;
struct TYPE_9__ {int * qs_handle; } ;
struct i40e_channel {TYPE_4__ info; int seid; int enabled_tc; } ;
struct i40e_aqc_configure_vsi_tc_bw_data {int * qs_handles; int * tc_bw_credits; int tc_valid_bits; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_7__ {int asq_last_status; } ;
struct TYPE_10__ {TYPE_2__ aq; } ;
struct TYPE_8__ {TYPE_5__ hw; TYPE_1__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ,struct i40e_aqc_configure_vsi_tc_bw_data*,int *) ;

__attribute__((used)) static int FUNC_2(struct i40e_vsi *VAR_2, struct i40e_channel *VAR_3,
      u8 *VAR_4)
{
 struct i40e_aqc_configure_vsi_tc_bw_data VAR_5;
 i40e_status VAR_6;
 int VAR_7;

 VAR_5.tc_valid_bits = VAR_3->enabled_tc;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_5.tc_bw_credits[VAR_7] = VAR_4[VAR_7];

 VAR_6 = FUNC_1(&VAR_2->back->hw, VAR_3->seid,
           &VAR_5, ((void*)0));
 if (VAR_6) {
  FUNC_0(&VAR_2->back->pdev->dev,
    "Config VSI BW allocation per TC failed, aq_err: %d for new_vsi->seid %u\n",
    VAR_2->back->hw.aq.asq_last_status, VAR_3->seid);
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_3->info.qs_handle[VAR_7] = VAR_5.qs_handles[VAR_7];

 return 0;
}
