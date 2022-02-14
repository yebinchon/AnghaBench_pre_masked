
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct iwl_txf_iter_data {int internal_txf; int fifo; int lmac; scalar_t__ fifo_size; } ;
struct iwl_fwrt_shared_mem_cfg {int num_txfifo_entries; int num_lmacs; scalar_t__* internal_txfifo_size; TYPE_3__* lmac; } ;
struct TYPE_5__ {struct iwl_txf_iter_data txf_iter_data; } ;
struct iwl_fw_runtime {TYPE_4__* fw; struct iwl_fwrt_shared_mem_cfg smem_cfg; TYPE_1__ dump; } ;
struct TYPE_6__ {int fid1; } ;
struct iwl_fw_ini_region_cfg {int offset; TYPE_2__ fifos; } ;
struct TYPE_8__ {int ucode_capa; } ;
struct TYPE_7__ {scalar_t__* txfifo_size; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct iwl_fw_runtime *VAR_1,
        struct iwl_fw_ini_region_cfg *VAR_2, int VAR_3)
{
 struct iwl_txf_iter_data *VAR_4 = &VAR_1->dump.txf_iter_data;
 struct iwl_fwrt_shared_mem_cfg *VAR_5 = &VAR_1->smem_cfg;
 int VAR_6 = VAR_5->num_txfifo_entries;
 int VAR_7 = FUNC_0(VAR_5->internal_txfifo_size);
 u32 VAR_8 = FUNC_4(VAR_2->fifos.fid1);

 if (!VAR_3) {
  if (FUNC_4(VAR_2->offset) &&
      FUNC_2(VAR_5->num_lmacs == 1,
         "Invalid lmac offset: 0x%x\n",
         FUNC_4(VAR_2->offset)))
   return 0;

  VAR_4->internal_txf = 0;
  VAR_4->fifo_size = 0;
  VAR_4->fifo = -1;
  if (FUNC_4(VAR_2->offset))
   VAR_4->lmac = 1;
  else
   VAR_4->lmac = 0;
 }

 if (!VAR_4->internal_txf)
  for (VAR_4->fifo++; VAR_4->fifo < VAR_6; VAR_4->fifo++) {
   VAR_4->fifo_size =
    VAR_5->lmac[VAR_4->lmac].txfifo_size[VAR_4->fifo];
   if (VAR_4->fifo_size && (VAR_8 & FUNC_1(VAR_4->fifo)))
    return 1;
  }

 VAR_4->internal_txf = 1;

 if (!FUNC_3(&VAR_1->fw->ucode_capa,
    VAR_0))
  return 0;

 for (VAR_4->fifo++; VAR_4->fifo < VAR_7 + VAR_6; VAR_4->fifo++) {
  VAR_4->fifo_size =
   VAR_5->internal_txfifo_size[VAR_4->fifo - VAR_6];
  if (VAR_4->fifo_size && (VAR_8 & FUNC_1(VAR_4->fifo)))
   return 1;
 }

 return 0;
}
