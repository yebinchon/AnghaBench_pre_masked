
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int queueing_opt_flags; void* valid_sections; } ;
struct i40e_vsi_context {TYPE_1__ info; int flags; int pf_num; int seid; } ;
struct i40e_vsi {TYPE_2__* back; } ;
struct TYPE_11__ {int asq_last_status; } ;
struct TYPE_12__ {TYPE_4__ aq; int pf_id; } ;
struct i40e_pf {size_t lan_vsi; TYPE_5__ hw; TYPE_3__* pdev; int main_vsi_seid; struct i40e_vsi** vsi; } ;
struct i40e_info {struct i40e_pf* pf; } ;
struct i40e_client {int dummy; } ;
typedef int i40e_status ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (TYPE_5__*,struct i40e_vsi_context*,int *) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (int *,struct i40e_vsi_context*,int *) ;
 int FUNC_6 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_7(struct i40e_info *VAR_6,
           struct i40e_client *VAR_7,
           bool VAR_8, u32 VAR_9,
           u32 VAR_10, u32 VAR_11)
{
 struct i40e_pf *VAR_12 = VAR_6->pf;
 struct i40e_vsi *VAR_13 = VAR_12->vsi[VAR_12->lan_vsi];
 struct i40e_vsi_context VAR_14;
 bool VAR_15 = 1;
 i40e_status VAR_16;


 if (VAR_8)
  return -VAR_0;

 VAR_14.seid = VAR_12->main_vsi_seid;
 VAR_14.pf_num = VAR_12->hw.pf_id;
 VAR_16 = FUNC_3(&VAR_12->hw, &VAR_14, ((void*)0));
 VAR_14.flags = VAR_4;
 if (VAR_16) {
  FUNC_1(&VAR_12->pdev->dev,
    "couldn't get PF vsi config, err %s aq_err %s\n",
    FUNC_6(&VAR_12->hw, VAR_16),
    FUNC_4(&VAR_12->hw,
         VAR_12->hw.aq.asq_last_status));
  return -VAR_1;
 }

 if ((VAR_11 & VAR_5) &&
     (VAR_10 & VAR_5)) {
  VAR_14.info.valid_sections =
   FUNC_0(VAR_2);
  VAR_14.info.queueing_opt_flags |= VAR_3;
 } else if ((VAR_11 & VAR_5) &&
    !(VAR_10 & VAR_5)) {
  VAR_14.info.valid_sections =
   FUNC_0(VAR_2);
  VAR_14.info.queueing_opt_flags &= ~VAR_3;
 } else {
  VAR_15 = 0;
  FUNC_2(&VAR_12->pdev->dev,
    "Client for PF id %d request an unsupported Config: %x.\n",
    VAR_12->hw.pf_id, VAR_10);
 }

 if (VAR_15) {
  VAR_16 = FUNC_5(&VAR_13->back->hw, &VAR_14, ((void*)0));
  if (VAR_16) {
   FUNC_1(&VAR_12->pdev->dev,
     "update VSI ctxt for PE failed, err %s aq_err %s\n",
     FUNC_6(&VAR_12->hw, VAR_16),
     FUNC_4(&VAR_12->hw,
          VAR_12->hw.aq.asq_last_status));
  }
 }
 return VAR_16;
}
