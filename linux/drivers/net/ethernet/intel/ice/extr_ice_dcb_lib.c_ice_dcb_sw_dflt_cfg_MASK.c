
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int willing; int pfccap; } ;
struct TYPE_13__ {scalar_t__ willing; } ;
struct TYPE_14__ {int willing; int* tcbwtable; int * tsatable; int maxtcs; } ;
struct ice_dcbx_cfg {int numapps; TYPE_4__* app; TYPE_1__ pfc; TYPE_6__ etsrec; TYPE_7__ etscfg; } ;
struct ice_port_info {struct ice_dcbx_cfg local_dcbx_cfg; } ;
struct TYPE_9__ {int maxtc; } ;
struct TYPE_10__ {TYPE_2__ common_cap; } ;
struct ice_hw {TYPE_3__ func_caps; struct ice_port_info* port_info; } ;
struct ice_pf {TYPE_5__* pdev; struct ice_hw hw; } ;
struct ice_aqc_port_ets_elem {int member_0; } ;
typedef int buf ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {int priority; int prot_id; int selector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct ice_dcbx_cfg*) ;
 struct ice_dcbx_cfg* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct ice_pf*,struct ice_dcbx_cfg*,int) ;
 int FUNC_3 (struct ice_port_info*,struct ice_aqc_port_ets_elem*,int,int *) ;
 int FUNC_4 (TYPE_6__*,TYPE_7__*,int) ;
 int FUNC_5 (struct ice_dcbx_cfg*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct ice_pf *VAR_4, bool VAR_5)
{
 struct ice_aqc_port_ets_elem VAR_6 = { 0 };
 struct ice_dcbx_cfg *VAR_7;
 struct ice_port_info *VAR_8;
 struct ice_hw *VAR_9;
 int VAR_10;

 VAR_9 = &VAR_4->hw;
 VAR_8 = VAR_9->port_info;
 VAR_7 = FUNC_1(&VAR_4->pdev->dev, sizeof(*VAR_7), VAR_0);

 FUNC_5(VAR_7, 0, sizeof(*VAR_7));
 FUNC_5(&VAR_8->local_dcbx_cfg, 0, sizeof(*VAR_7));

 VAR_7->etscfg.willing = 1;
 VAR_7->etscfg.maxtcs = VAR_9->func_caps.common_cap.maxtc;
 VAR_7->etscfg.tcbwtable[0] = 100;
 VAR_7->etscfg.tsatable[0] = VAR_3;

 FUNC_4(&VAR_7->etsrec, &VAR_7->etscfg,
        sizeof(VAR_7->etsrec));
 VAR_7->etsrec.willing = 0;

 VAR_7->pfc.willing = 1;
 VAR_7->pfc.pfccap = VAR_9->func_caps.common_cap.maxtc;

 VAR_7->numapps = 1;
 VAR_7->app[0].selector = VAR_2;
 VAR_7->app[0].priority = 3;
 VAR_7->app[0].prot_id = VAR_1;

 VAR_10 = FUNC_2(VAR_4, VAR_7, VAR_5);
 FUNC_0(&VAR_4->pdev->dev, VAR_7);
 if (VAR_10)
  return VAR_10;

 return FUNC_3(VAR_8, &VAR_6, sizeof(VAR_6), ((void*)0));
}
