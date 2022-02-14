
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fwrt_shared_mem_cfg {int num_lmacs; TYPE_1__* lmac; int rxfifo2_size; } ;
struct iwl_fw_runtime {int dummy; } ;
struct iwl_fw_error_dump_fifo {int dummy; } ;
struct iwl_fw_error_dump_data {int dummy; } ;
struct TYPE_2__ {int rxfifo1_size; } ;


 int FUNC_0 (int,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct iwl_fw_runtime*,int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_fw_runtime *VAR_2,
     struct iwl_fwrt_shared_mem_cfg *VAR_3)
{
 size_t VAR_4 = sizeof(struct iwl_fw_error_dump_data) +
    sizeof(struct iwl_fw_error_dump_fifo);
 u32 VAR_5 = 0;
 int VAR_6;

 if (!FUNC_2(VAR_2, VAR_0))
  return 0;


 FUNC_0(VAR_5, VAR_3->rxfifo2_size, VAR_4);


 if (FUNC_1(VAR_3->num_lmacs > VAR_1))
  VAR_3->num_lmacs = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_lmacs; VAR_6++)
  FUNC_0(VAR_5, VAR_3->lmac[VAR_6].rxfifo1_size, VAR_4);

 return VAR_5;
}
