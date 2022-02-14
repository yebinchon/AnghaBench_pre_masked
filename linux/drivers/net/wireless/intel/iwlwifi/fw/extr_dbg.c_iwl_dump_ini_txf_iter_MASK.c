
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iwl_txf_iter_data {int fifo; int fifo_size; } ;
struct TYPE_4__ {struct iwl_txf_iter_data txf_iter_data; } ;
struct iwl_fw_runtime {int trans; TYPE_1__ dump; } ;
struct TYPE_6__ {scalar_t__ header_only; void* num_of_registers; } ;
struct iwl_fw_ini_region_cfg {TYPE_3__ fifos; void** start_addr; void* offset; } ;
struct iwl_fw_ini_error_dump_register {void* data; void* addr; } ;
struct TYPE_5__ {void* num_of_registers; void* fifo_num; } ;
struct iwl_fw_ini_error_dump_range {void* range_data_size; TYPE_2__ fifo_hdr; scalar_t__ data; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct iwl_fw_runtime*,struct iwl_fw_ini_region_cfg*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,unsigned long*) ;
 int FUNC_4 (int ,unsigned long*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct iwl_fw_runtime *VAR_6,
     struct iwl_fw_ini_region_cfg *VAR_7,
     void *VAR_8, int VAR_9)
{
 struct iwl_fw_ini_error_dump_range *VAR_10 = VAR_8;
 struct iwl_txf_iter_data *VAR_11 = &VAR_6->dump.txf_iter_data;
 struct iwl_fw_ini_error_dump_register *VAR_12 = (void *)VAR_10->data;
 u32 VAR_13 = FUNC_6(VAR_7->offset), VAR_14;
 u32 VAR_15 =
  FUNC_6(VAR_7->fifos.num_of_registers) * sizeof(*VAR_12);
 __le32 *VAR_16;
 unsigned long VAR_17;
 int VAR_18;

 if (!FUNC_1(VAR_6, VAR_7, VAR_9))
  return -VAR_1;

 if (!FUNC_3(VAR_6->trans, &VAR_17))
  return -VAR_0;

 VAR_10->fifo_hdr.fifo_num = FUNC_0(VAR_11->fifo);
 VAR_10->fifo_hdr.num_of_registers = VAR_7->fifos.num_of_registers;
 VAR_10->range_data_size = FUNC_0(VAR_11->fifo_size + VAR_15);

 FUNC_5(VAR_6->trans, VAR_2 + VAR_13, VAR_11->fifo);





 for (VAR_18 = 0; VAR_18 < FUNC_6(VAR_7->fifos.num_of_registers); VAR_18++) {
  VAR_14 = FUNC_6(VAR_7->start_addr[VAR_18]) + VAR_13;

  VAR_12->addr = FUNC_0(VAR_14);
  VAR_12->data = FUNC_0(FUNC_2(VAR_6->trans,
           VAR_14));

  VAR_12++;
 }

 if (VAR_7->fifos.header_only) {
  VAR_10->range_data_size = FUNC_0(VAR_15);
  goto out;
 }


 FUNC_5(VAR_6->trans, VAR_3 + VAR_13,
          VAR_5 + VAR_13);


 FUNC_2(VAR_6->trans, VAR_4 + VAR_13);


 VAR_14 = VAR_4 + VAR_13;
 VAR_16 = (void *)VAR_12;
 for (VAR_18 = 0; VAR_18 < VAR_11->fifo_size; VAR_18 += sizeof(*VAR_16))
  *VAR_16++ = FUNC_0(FUNC_2(VAR_6->trans, VAR_14));

out:
 FUNC_4(VAR_6->trans, &VAR_17);

 return sizeof(*VAR_10) + FUNC_6(VAR_10->range_data_size);
}
