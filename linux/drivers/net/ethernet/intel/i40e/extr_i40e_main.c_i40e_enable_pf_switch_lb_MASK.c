
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int switch_id; int valid_sections; } ;
struct i40e_vsi_context {TYPE_1__ info; int flags; scalar_t__ vf_num; int pf_num; int seid; } ;
struct i40e_vsi {TYPE_2__* back; } ;
struct TYPE_11__ {int asq_last_status; } ;
struct TYPE_12__ {TYPE_4__ aq; int pf_id; } ;
struct i40e_pf {size_t lan_vsi; TYPE_5__ hw; TYPE_3__* pdev; int main_vsi_seid; struct i40e_vsi** vsi; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (TYPE_5__*,struct i40e_vsi_context*,int *) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (int *,struct i40e_vsi_context*,int *) ;
 int FUNC_5 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_6(struct i40e_pf *VAR_3)
{
 struct i40e_vsi *VAR_4 = VAR_3->vsi[VAR_3->lan_vsi];
 struct i40e_vsi_context VAR_5;
 int VAR_6;

 VAR_5.seid = VAR_3->main_vsi_seid;
 VAR_5.pf_num = VAR_3->hw.pf_id;
 VAR_5.vf_num = 0;
 VAR_6 = FUNC_2(&VAR_3->hw, &VAR_5, ((void*)0));
 if (VAR_6) {
  FUNC_1(&VAR_3->pdev->dev,
    "couldn't get PF vsi config, err %s aq_err %s\n",
    FUNC_5(&VAR_3->hw, VAR_6),
    FUNC_3(&VAR_3->hw, VAR_3->hw.aq.asq_last_status));
  return;
 }
 VAR_5.flags = VAR_2;
 VAR_5.info.valid_sections = FUNC_0(VAR_0);
 VAR_5.info.switch_id |= FUNC_0(VAR_1);

 VAR_6 = FUNC_4(&VAR_4->back->hw, &VAR_5, ((void*)0));
 if (VAR_6) {
  FUNC_1(&VAR_3->pdev->dev,
    "update vsi switch failed, err %s aq_err %s\n",
    FUNC_5(&VAR_3->hw, VAR_6),
    FUNC_3(&VAR_3->hw, VAR_3->hw.aq.asq_last_status));
 }
}
