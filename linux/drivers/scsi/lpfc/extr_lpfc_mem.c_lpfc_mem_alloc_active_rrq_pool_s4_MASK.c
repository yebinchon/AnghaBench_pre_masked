
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_xri; } ;
struct TYPE_4__ {TYPE_1__ max_cfg_param; } ;
struct lpfc_hba {size_t cfg_rrq_xri_bitmap_sz; int active_rrq_pool; TYPE_2__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t) ;

int
FUNC_1(struct lpfc_hba *VAR_3) {
 size_t VAR_4;
 int VAR_5 = VAR_3->sli4_hba.max_cfg_param.max_xri;

 if (VAR_5 <= 0)
  return -VAR_1;
 VAR_4 = ((VAR_0 - 1 + VAR_5) / VAR_0) *
    sizeof(unsigned long);
 VAR_3->cfg_rrq_xri_bitmap_sz = VAR_4;
 VAR_3->active_rrq_pool = FUNC_0(VAR_2,
           VAR_4);
 if (!VAR_3->active_rrq_pool)
  return -VAR_1;
 else
  return 0;
}
