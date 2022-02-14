
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int valid_sections; int port_vlan_flags; scalar_t__ pvid; } ;
struct i40e_vsi_context {TYPE_1__ info; int seid; } ;
struct i40e_vsi {TYPE_4__* back; TYPE_1__ info; int seid; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_10__ {int asq_last_status; } ;
struct TYPE_12__ {TYPE_3__ aq; } ;
struct TYPE_11__ {TYPE_5__ hw; TYPE_2__* pdev; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,struct i40e_vsi_context*,int *) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;

void FUNC_5(struct i40e_vsi *VAR_4)
{
 struct i40e_vsi_context VAR_5;
 i40e_status VAR_6;


 if (VAR_4->info.pvid)
  return;

 if ((VAR_4->info.valid_sections &
      FUNC_0(VAR_0)) &&
     ((VAR_4->info.port_vlan_flags & VAR_1) ==
      VAR_1))
  return;

 VAR_4->info.valid_sections = FUNC_0(VAR_0);
 VAR_4->info.port_vlan_flags = VAR_3 |
        VAR_2;

 VAR_5.seid = VAR_4->seid;
 VAR_5.info = VAR_4->info;
 VAR_6 = FUNC_3(&VAR_4->back->hw, &VAR_5, ((void*)0));
 if (VAR_6) {
  FUNC_1(&VAR_4->back->pdev->dev,
    "update vlan stripping failed, err %s aq_err %s\n",
    FUNC_4(&VAR_4->back->hw, VAR_6),
    FUNC_2(&VAR_4->back->hw,
         VAR_4->back->hw.aq.asq_last_status));
 }
}
