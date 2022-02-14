
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fwrt_shared_mem_cfg {int num_txfifo_entries; int num_lmacs; int* internal_txfifo_size; TYPE_1__* lmac; } ;
struct iwl_fw_runtime {int trans; struct iwl_fwrt_shared_mem_cfg smem_cfg; TYPE_2__* fw; } ;
struct iwl_fw_error_dump_fifo {void* fence_mode; void* fence_ptr; void* rd_ptr; void* wr_ptr; void* available_bytes; void* fifo_num; scalar_t__ data; } ;
struct iwl_fw_error_dump_data {void* len; void* type; scalar_t__ data; } ;
struct TYPE_4__ {int ucode_capa; } ;
struct TYPE_3__ {int * txfifo_size; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct iwl_fw_runtime*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct iwl_fw_runtime*,int) ;
 struct iwl_fw_error_dump_data* FUNC_5 (struct iwl_fw_error_dump_data*) ;
 int FUNC_6 (struct iwl_fw_runtime*,struct iwl_fw_error_dump_data**,int ,scalar_t__,int) ;
 int FUNC_7 (int ,unsigned long*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,unsigned long*) ;
 int FUNC_10 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_11(struct iwl_fw_runtime *VAR_13,
       struct iwl_fw_error_dump_data **VAR_14)
{
 struct iwl_fw_error_dump_fifo *VAR_15;
 struct iwl_fwrt_shared_mem_cfg *VAR_16 = &VAR_13->smem_cfg;
 u32 *VAR_17;
 u32 VAR_18;
 unsigned long VAR_19;
 int VAR_20, VAR_21;

 FUNC_1(VAR_13, "WRT TX FIFO dump\n");

 if (!FUNC_7(VAR_13->trans, &VAR_19))
  return;

 if (FUNC_4(VAR_13, VAR_1)) {

  for (VAR_20 = 0; VAR_20 < VAR_13->smem_cfg.num_txfifo_entries; VAR_20++) {

   FUNC_10(VAR_13->trans, VAR_12, VAR_20);
   FUNC_6(VAR_13, VAR_14,
       VAR_16->lmac[0].txfifo_size[VAR_20], 0, VAR_20);
  }


  if (VAR_13->smem_cfg.num_lmacs > 1) {
   for (VAR_20 = 0; VAR_20 < VAR_13->smem_cfg.num_txfifo_entries;
        VAR_20++) {

    FUNC_10(VAR_13->trans,
           VAR_12 +
           VAR_3, VAR_20);
    FUNC_6(VAR_13, VAR_14,
        VAR_16->lmac[1].txfifo_size[VAR_20],
        VAR_3,
        VAR_20 + VAR_16->num_txfifo_entries);
   }
  }
 }

 if (FUNC_4(VAR_13, VAR_0) &&
     FUNC_3(&VAR_13->fw->ucode_capa,
   VAR_2)) {

  for (VAR_20 = 0;
       VAR_20 < FUNC_0(VAR_13->smem_cfg.internal_txfifo_size);
       VAR_20++) {
   VAR_15 = (void *)(*VAR_14)->data;
   VAR_17 = (void *)VAR_15->data;
   VAR_18 = VAR_13->smem_cfg.internal_txfifo_size[VAR_20];


   if (VAR_18 == 0)
    continue;


   (*VAR_14)->type =
    FUNC_2(VAR_0);
   (*VAR_14)->len =
    FUNC_2(VAR_18 + sizeof(*VAR_15));

   VAR_15->fifo_num = FUNC_2(VAR_20);


   FUNC_10(VAR_13->trans, VAR_7, VAR_20 +
    VAR_13->smem_cfg.num_txfifo_entries);

   VAR_15->available_bytes =
    FUNC_2(FUNC_8(VAR_13->trans,
        VAR_5));
   VAR_15->wr_ptr =
    FUNC_2(FUNC_8(VAR_13->trans,
        VAR_11));
   VAR_15->rd_ptr =
    FUNC_2(FUNC_8(VAR_13->trans,
        VAR_8));
   VAR_15->fence_ptr =
    FUNC_2(FUNC_8(VAR_13->trans,
        VAR_4));
   VAR_15->fence_mode =
    FUNC_2(FUNC_8(VAR_13->trans,
        VAR_6));


   FUNC_10(VAR_13->trans,
          VAR_9,
          VAR_11);


   FUNC_8(VAR_13->trans,
         VAR_10);


   VAR_18 /= sizeof(u32);
   for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++)
    VAR_17[VAR_21] =
     FUNC_8(VAR_13->trans,
           VAR_10);
   *VAR_14 = FUNC_5(*VAR_14);
  }
 }

 FUNC_9(VAR_13->trans, &VAR_19);
}
