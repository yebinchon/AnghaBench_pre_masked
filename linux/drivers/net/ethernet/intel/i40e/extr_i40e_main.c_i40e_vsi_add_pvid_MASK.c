
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int port_vlan_flags; void* pvid; void* valid_sections; } ;
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
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,struct i40e_vsi_context*,int *) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;

int FUNC_5(struct i40e_vsi *VAR_5, u16 VAR_6)
{
 struct i40e_vsi_context VAR_7;
 i40e_status VAR_8;

 VAR_5->info.valid_sections = FUNC_0(VAR_1);
 VAR_5->info.pvid = FUNC_0(VAR_6);
 VAR_5->info.port_vlan_flags = VAR_4 |
        VAR_3 |
        VAR_2;

 VAR_7.seid = VAR_5->seid;
 VAR_7.info = VAR_5->info;
 VAR_8 = FUNC_3(&VAR_5->back->hw, &VAR_7, ((void*)0));
 if (VAR_8) {
  FUNC_1(&VAR_5->back->pdev->dev,
    "add pvid failed, err %s aq_err %s\n",
    FUNC_4(&VAR_5->back->hw, VAR_8),
    FUNC_2(&VAR_5->back->hw,
         VAR_5->back->hw.aq.asq_last_status));
  return -VAR_0;
 }

 return 0;
}
