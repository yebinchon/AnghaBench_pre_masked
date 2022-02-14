
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rc; } ;
union qm_mr_entry {TYPE_1__ ern; } ;
struct TYPE_4__ {int orp_zero; int fq_retired; int fq_tdrop; int late_window; int early_window; int err_cond; int wred; int cg_tdrop; } ;
struct dpaa_percpu_priv {TYPE_2__ ern_cnt; } ;





 int VAR_0 ;






__attribute__((used)) static void FUNC_0(struct dpaa_percpu_priv *VAR_1,
        const union qm_mr_entry *VAR_2)
{
 switch (VAR_2->ern.rc & VAR_0) {
 case 135:
  VAR_1->ern_cnt.cg_tdrop++;
  break;
 case 128:
  VAR_1->ern_cnt.wred++;
  break;
 case 134:
  VAR_1->ern_cnt.err_cond++;
  break;
 case 132:
  VAR_1->ern_cnt.early_window++;
  break;
 case 131:
  VAR_1->ern_cnt.late_window++;
  break;
 case 133:
  VAR_1->ern_cnt.fq_tdrop++;
  break;
 case 130:
  VAR_1->ern_cnt.fq_retired++;
  break;
 case 129:
  VAR_1->ern_cnt.orp_zero++;
  break;
 }
}
