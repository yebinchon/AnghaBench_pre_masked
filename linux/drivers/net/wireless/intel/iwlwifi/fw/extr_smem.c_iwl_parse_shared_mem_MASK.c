
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_shared_mem_cfg_v2 {void** internal_txfifo_size; void* internal_txfifo_addr; void** rxfifo_size; void** txfifo_size; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct TYPE_6__ {int num_lmacs; int num_txfifo_entries; void** internal_txfifo_size; void* internal_txfifo_addr; void* rxfifo2_size; TYPE_1__* lmac; } ;
struct iwl_fw_runtime {TYPE_3__ smem_cfg; TYPE_2__* fw; } ;
struct TYPE_5__ {int ucode_capa; } ;
struct TYPE_4__ {void* rxfifo1_size; void** txfifo_size; } ;


 int FUNC_0 (void**) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 void* FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(struct iwl_fw_runtime *VAR_1,
     struct iwl_rx_packet *VAR_2)
{
 struct iwl_shared_mem_cfg_v2 *VAR_3 = (void *)VAR_2->data;
 int VAR_4;

 VAR_1->smem_cfg.num_lmacs = 1;

 VAR_1->smem_cfg.num_txfifo_entries = FUNC_0(VAR_3->txfifo_size);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->txfifo_size); VAR_4++)
  VAR_1->smem_cfg.lmac[0].txfifo_size[VAR_4] =
   FUNC_3(VAR_3->txfifo_size[VAR_4]);

 VAR_1->smem_cfg.lmac[0].rxfifo1_size =
  FUNC_3(VAR_3->rxfifo_size[0]);
 VAR_1->smem_cfg.rxfifo2_size = FUNC_3(VAR_3->rxfifo_size[1]);


 if (FUNC_2(&VAR_1->fw->ucode_capa,
   VAR_0)) {
  FUNC_1(sizeof(VAR_1->smem_cfg.internal_txfifo_size) !=
        sizeof(VAR_3->internal_txfifo_size));

  VAR_1->smem_cfg.internal_txfifo_addr =
   FUNC_3(VAR_3->internal_txfifo_addr);

  for (VAR_4 = 0;
       VAR_4 < FUNC_0(VAR_1->smem_cfg.internal_txfifo_size);
       VAR_4++)
   VAR_1->smem_cfg.internal_txfifo_size[VAR_4] =
    FUNC_3(VAR_3->internal_txfifo_size[VAR_4]);
 }
}
