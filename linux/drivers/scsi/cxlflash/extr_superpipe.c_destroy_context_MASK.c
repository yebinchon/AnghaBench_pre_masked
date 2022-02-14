
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct cxlflash_cfg {struct afu* afu; } ;
struct ctx_info {struct ctx_info* rht_lun; struct ctx_info* rht_needs_ws; scalar_t__ rht_start; TYPE_1__* ctrl_map; int luns; scalar_t__ initialized; } ;
struct afu {scalar_t__ afu_map; } ;
struct TYPE_2__ {int ctx_cap; int rht_cnt_id; int rht_start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ctx_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct cxlflash_cfg *VAR_0,
       struct ctx_info *VAR_1)
{
 struct afu *VAR_2 = VAR_0->afu;

 if (VAR_1->initialized) {
  FUNC_0(!FUNC_3(&VAR_1->luns));


  if (VAR_2->afu_map && VAR_1->ctrl_map) {
   FUNC_4(0, &VAR_1->ctrl_map->rht_start);
   FUNC_4(0, &VAR_1->ctrl_map->rht_cnt_id);
   FUNC_4(0, &VAR_1->ctrl_map->ctx_cap);
  }
 }


 FUNC_1((ulong)VAR_1->rht_start);
 FUNC_2(VAR_1->rht_needs_ws);
 FUNC_2(VAR_1->rht_lun);
 FUNC_2(VAR_1);
}
