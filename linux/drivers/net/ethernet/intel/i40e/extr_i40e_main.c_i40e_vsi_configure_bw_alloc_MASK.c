
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_11__ {int * qs_handle; } ;
struct TYPE_7__ {int hw; } ;
struct TYPE_8__ {TYPE_1__ qopt; } ;
struct i40e_vsi {TYPE_5__ info; int seid; TYPE_2__ mqprio_qopt; struct i40e_pf* back; } ;
struct TYPE_10__ {int asq_last_status; } ;
struct TYPE_12__ {TYPE_4__ aq; } ;
struct i40e_pf {int flags; TYPE_6__ hw; TYPE_3__* pdev; } ;
struct i40e_aqc_configure_vsi_tc_bw_data {int * qs_handles; void** tc_bw_credits; void* tc_valid_bits; } ;
typedef int i40e_status ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_6__*,int ,struct i40e_aqc_configure_vsi_tc_bw_data*,int *) ;
 int FUNC_2 (struct i40e_vsi*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i40e_vsi *VAR_4, u8 VAR_5,
           u8 *VAR_6)
{
 struct i40e_aqc_configure_vsi_tc_bw_data VAR_7;
 struct i40e_pf *VAR_8 = VAR_4->back;
 i40e_status VAR_9;
 int VAR_10;


 if (VAR_8->flags & VAR_2)
  return 0;
 if (!VAR_4->mqprio_qopt.qopt.hw && !(VAR_8->flags & VAR_1)) {
  VAR_9 = FUNC_2(VAR_4, VAR_4->seid, 0);
  if (VAR_9)
   FUNC_0(&VAR_8->pdev->dev,
     "Failed to reset tx rate for vsi->seid %u\n",
     VAR_4->seid);
  return VAR_9;
 }
 VAR_7.tc_valid_bits = VAR_5;
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  VAR_7.tc_bw_credits[VAR_10] = VAR_6[VAR_10];

 VAR_9 = FUNC_1(&VAR_8->hw, VAR_4->seid, &VAR_7, ((void*)0));
 if (VAR_9) {
  FUNC_0(&VAR_8->pdev->dev,
    "AQ command Config VSI BW allocation per TC failed = %d\n",
    VAR_8->hw.aq.asq_last_status);
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  VAR_4->info.qs_handle[VAR_10] = VAR_7.qs_handles[VAR_10];

 return 0;
}
