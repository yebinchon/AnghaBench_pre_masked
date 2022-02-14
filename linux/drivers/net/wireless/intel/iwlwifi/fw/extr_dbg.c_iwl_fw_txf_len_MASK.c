
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fwrt_shared_mem_cfg {int num_lmacs; int num_txfifo_entries; int * internal_txfifo_size; TYPE_1__* lmac; } ;
struct iwl_fw_runtime {TYPE_2__* fw; } ;
struct iwl_fw_error_dump_fifo {int dummy; } ;
struct iwl_fw_error_dump_data {int dummy; } ;
struct TYPE_4__ {int ucode_capa; } ;
struct TYPE_3__ {int * txfifo_size; } ;


 int FUNC_0 (int,int ,size_t) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct iwl_fw_runtime*,int ) ;

__attribute__((used)) static int FUNC_5(struct iwl_fw_runtime *VAR_4,
     struct iwl_fwrt_shared_mem_cfg *VAR_5)
{
 size_t VAR_6 = sizeof(struct iwl_fw_error_dump_data) +
    sizeof(struct iwl_fw_error_dump_fifo);
 u32 VAR_7 = 0;
 int VAR_8;

 if (!FUNC_4(VAR_4, VAR_1))
  goto dump_internal_txf;


 if (FUNC_2(VAR_5->num_lmacs > VAR_3))
  VAR_5->num_lmacs = VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_lmacs; VAR_8++) {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_5->num_txfifo_entries; VAR_9++)
   FUNC_0(VAR_7, VAR_5->lmac[VAR_8].txfifo_size[VAR_9],
    VAR_6);
 }

dump_internal_txf:
 if (!(FUNC_4(VAR_4, VAR_0) &&
       FUNC_3(&VAR_4->fw->ucode_capa,
     VAR_2)))
  goto out;

 for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_5->internal_txfifo_size); VAR_8++)
  FUNC_0(VAR_7, VAR_5->internal_txfifo_size[VAR_8], VAR_6);

out:
 return VAR_7;
}
