
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qed_hwfn {TYPE_3__* p_dcbx_info; } ;
struct TYPE_5__ {int valid; int params; } ;
struct qed_dcbx_get {TYPE_1__ remote; } ;
struct TYPE_8__ {int app_pri_tbl; } ;
struct dcbx_features {int pfc; int ets; TYPE_4__ app; } ;
struct TYPE_6__ {struct dcbx_features features; } ;
struct TYPE_7__ {TYPE_2__ remote; } ;


 int FUNC_0 (struct qed_hwfn*,TYPE_4__*,int ,int *,int ,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct qed_hwfn *VAR_0, struct qed_dcbx_get *VAR_1)
{
 struct dcbx_features *VAR_2;

 VAR_2 = &VAR_0->p_dcbx_info->remote.features;
 FUNC_0(VAR_0, &VAR_2->app,
       VAR_2->app.app_pri_tbl, &VAR_2->ets,
       VAR_2->pfc, &VAR_1->remote.params, 0);
 VAR_1->remote.valid = 1;
}
