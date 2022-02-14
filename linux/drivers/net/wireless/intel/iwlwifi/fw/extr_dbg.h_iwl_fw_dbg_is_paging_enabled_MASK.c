
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iwl_fw_runtime {size_t cur_fw_img; TYPE_5__* fw_paging_db; TYPE_4__* fw; TYPE_2__* trans; } ;
struct TYPE_10__ {scalar_t__ fw_paging_block; } ;
struct TYPE_9__ {TYPE_3__* img; } ;
struct TYPE_8__ {scalar_t__ paging_mem_size; } ;
struct TYPE_7__ {TYPE_1__* trans_cfg; } ;
struct TYPE_6__ {int gen2; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct iwl_fw_runtime*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct iwl_fw_runtime *VAR_2)
{
 return FUNC_0(VAR_2, VAR_0) &&
  !VAR_2->trans->trans_cfg->gen2 &&
  VAR_2->cur_fw_img < VAR_1 &&
  VAR_2->fw->img[VAR_2->cur_fw_img].paging_mem_size &&
  VAR_2->fw_paging_db[0].fw_paging_block;
}
