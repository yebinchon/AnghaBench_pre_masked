
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u32 ;
struct iwl_fwrt_shared_mem_cfg {int num_lmacs; int num_txfifo_entries; int rxfifo2_size; int internal_txfifo_addr; int* internal_txfifo_size; TYPE_6__* lmac; } ;
struct TYPE_14__ {int* lmac_err_id; int umac_err_id; int * d3_debug_data; scalar_t__ monitor_only; TYPE_7__* desc; } ;
struct iwl_fw_runtime {size_t cur_fw_img; int num_of_paging_blk; TYPE_12__* trans; TYPE_11__ dump; TYPE_9__* fw; struct iwl_fwrt_shared_mem_cfg smem_cfg; TYPE_4__* dev; } ;
struct iwl_fw_error_dump_trigger_desc {int dummy; } ;
struct iwl_fw_error_dump_smem_cfg {void** internal_txfifo_size; void* internal_txfifo_addr; void* rxfifo2_size; TYPE_5__* lmac; void* num_txfifo_entries; void* num_lmacs; } ;
struct iwl_fw_error_dump_paging {int dummy; } ;
struct iwl_fw_error_dump_mem {int dummy; } ;
struct iwl_fw_error_dump_info {int num_of_lmacs; void* umac_err_id; void** lmac_err_id; int bus_human_readable; int dev_human_readable; struct iwl_fw_error_dump_trigger_desc* fw_human_readable; void* hw_step; void* hw_type; } ;
struct iwl_fw_error_dump_file {void* file_len; scalar_t__ data; void* barker; } ;
struct iwl_fw_error_dump_data {struct iwl_fw_error_dump_trigger_desc* data; void* len; void* type; } ;
struct iwl_fw_dump_ptrs {struct iwl_fw_error_dump_file* fwrt_ptr; } ;
struct iwl_fw_dbg_mem_seg_tlv {int data_type; int ofs; int len; } ;
struct fw_img {TYPE_1__* sec; } ;
struct TYPE_23__ {int n_mem_tlv; struct iwl_fw_dbg_mem_seg_tlv* mem_tlv; } ;
struct TYPE_24__ {TYPE_8__ dbg; int * human_readable; struct fw_img* img; } ;
struct TYPE_22__ {int len; int trig_desc; } ;
struct TYPE_21__ {int* txfifo_size; int rxfifo1_size; } ;
struct TYPE_20__ {void* rxfifo1_size; void** txfifo_size; } ;
struct TYPE_19__ {TYPE_3__* bus; } ;
struct TYPE_18__ {int name; } ;
struct TYPE_17__ {scalar_t__ device_family; } ;
struct TYPE_16__ {int offset; int len; } ;
struct TYPE_15__ {TYPE_10__* cfg; int hw_rev; TYPE_2__* trans_cfg; int status; } ;
struct TYPE_13__ {int smem_len; int dccm2_len; int dccm_offset; int dccm_len; int d3_debug_data_length; int smem_offset; int dccm2_offset; int d3_debug_data_base_addr; int name; } ;


 int FUNC_0 (int,int,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct iwl_fw_runtime*,struct iwl_fw_error_dump_data**) ;
 int VAR_19 ;
 scalar_t__ FUNC_5 (struct iwl_fw_runtime*) ;
 scalar_t__ FUNC_6 (struct iwl_fw_runtime*) ;
 scalar_t__ FUNC_7 (struct iwl_fw_runtime*,int) ;
 int FUNC_8 (struct iwl_fw_runtime*,struct iwl_fw_error_dump_data**,int,int,int) ;
 int FUNC_9 (struct iwl_fw_runtime*,struct iwl_fw_error_dump_data**) ;
 int FUNC_10 (struct iwl_fw_runtime*,struct iwl_fw_error_dump_data**) ;
 struct iwl_fw_error_dump_data* FUNC_11 (struct iwl_fw_error_dump_data*) ;
 int VAR_20 ;
 int FUNC_12 (struct iwl_fw_runtime*,...) ;
 int FUNC_13 (struct iwl_fw_runtime*,struct iwl_fwrt_shared_mem_cfg*) ;
 int FUNC_14 (struct iwl_fw_runtime*,struct iwl_fwrt_shared_mem_cfg*) ;
 int FUNC_15 (struct iwl_fw_runtime*,struct iwl_fw_error_dump_data**) ;
 int FUNC_16 (TYPE_12__*,int,struct iwl_fw_error_dump_trigger_desc*,size_t) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct iwl_fw_error_dump_trigger_desc*,int *,size_t) ;
 int FUNC_20 (int ,int ,int) ;
 scalar_t__ FUNC_21 (int ,int *) ;
 struct iwl_fw_error_dump_file* FUNC_22 (int) ;

__attribute__((used)) static struct iwl_fw_error_dump_file *
FUNC_23(struct iwl_fw_runtime *VAR_21,
         struct iwl_fw_dump_ptrs *VAR_22)
{
 struct iwl_fw_error_dump_file *VAR_23;
 struct iwl_fw_error_dump_data *VAR_24;
 struct iwl_fw_error_dump_info *VAR_25;
 struct iwl_fw_error_dump_smem_cfg *VAR_26;
 struct iwl_fw_error_dump_trigger_desc *VAR_27;
 u32 VAR_28, VAR_29;
 const struct iwl_fw_dbg_mem_seg_tlv *VAR_30 = VAR_21->fw->dbg.mem_tlv;
 struct iwl_fwrt_shared_mem_cfg *VAR_31 = &VAR_21->smem_cfg;
 u32 VAR_32, VAR_33 = 0, VAR_34 = 0, VAR_35 = 0;
 u32 VAR_36 = VAR_21->fw->dbg.n_mem_tlv ? 0 : VAR_21->trans->cfg->smem_len;
 u32 VAR_37 = VAR_21->fw->dbg.n_mem_tlv ?
    0 : VAR_21->trans->cfg->dccm2_len;
 int VAR_38;


 if (!VAR_21->trans->cfg->dccm_offset || !VAR_21->trans->cfg->dccm_len) {
  const struct fw_img *VAR_39;

  if (VAR_21->cur_fw_img >= VAR_12)
   return ((void*)0);
  VAR_39 = &VAR_21->fw->img[VAR_21->cur_fw_img];
  VAR_29 = VAR_39->sec[VAR_11].offset;
  VAR_28 = VAR_39->sec[VAR_11].len;
 } else {
  VAR_29 = VAR_21->trans->cfg->dccm_offset;
  VAR_28 = VAR_21->trans->cfg->dccm_len;
 }


 if (FUNC_21(VAR_16, &VAR_21->trans->status)) {
  VAR_33 = FUNC_13(VAR_21, VAR_31);
  VAR_33 += FUNC_14(VAR_21, VAR_31);


  if (FUNC_7(VAR_21, VAR_9))
   FUNC_12(VAR_21, &VAR_34,
         VAR_20);

  if (VAR_21->trans->trans_cfg->device_family ==
      VAR_0 &&
      FUNC_7(VAR_21, VAR_10))
   VAR_35 = sizeof(*VAR_24) + VAR_15;
 }

 VAR_32 = sizeof(*VAR_23) + VAR_33 + VAR_34 + VAR_35;

 if (FUNC_7(VAR_21, VAR_3))
  VAR_32 += sizeof(*VAR_24) + sizeof(*VAR_25);
 if (FUNC_7(VAR_21, VAR_6))
  VAR_32 += sizeof(*VAR_24) + sizeof(*VAR_26);

 if (FUNC_7(VAR_21, VAR_5)) {
  size_t VAR_40 = sizeof(*VAR_24) +
     sizeof(struct iwl_fw_error_dump_mem);


  if (!VAR_21->fw->dbg.n_mem_tlv)
   FUNC_0(VAR_32, VAR_28, VAR_40);


  FUNC_0(VAR_32, VAR_36, VAR_40);
  FUNC_0(VAR_32, VAR_37, VAR_40);

  for (VAR_38 = 0; VAR_38 < VAR_21->fw->dbg.n_mem_tlv; VAR_38++)
   FUNC_0(VAR_32, FUNC_18(VAR_30[VAR_38].len), VAR_40);
 }


 if (FUNC_6(VAR_21))
  VAR_32 += VAR_21->num_of_paging_blk *
   (sizeof(*VAR_24) +
    sizeof(struct iwl_fw_error_dump_paging) +
    VAR_14);

 if (FUNC_5(VAR_21) && VAR_21->dump.d3_debug_data) {
  VAR_32 += sizeof(*VAR_24) +
   VAR_21->trans->cfg->d3_debug_data_length * 2;
 }


 if (VAR_21->dump.monitor_only) {
  VAR_32 = sizeof(*VAR_23) + sizeof(*VAR_24) * 2 +
      sizeof(*VAR_25) + sizeof(*VAR_26);
 }

 if (FUNC_7(VAR_21, VAR_4) &&
     VAR_21->dump.desc)
  VAR_32 += sizeof(*VAR_24) + sizeof(*VAR_27) +
       VAR_21->dump.desc->len;

 VAR_23 = FUNC_22(VAR_32);
 if (!VAR_23)
  return ((void*)0);

 VAR_22->fwrt_ptr = VAR_23;

 VAR_23->barker = FUNC_3(VAR_1);
 VAR_24 = (void *)VAR_23->data;

 if (FUNC_7(VAR_21, VAR_3)) {
  VAR_24->type = FUNC_3(VAR_3);
  VAR_24->len = FUNC_3(sizeof(*VAR_25));
  VAR_25 = (void *)VAR_24->data;
  VAR_25->hw_type =
   FUNC_3(FUNC_2(VAR_21->trans->hw_rev));
  VAR_25->hw_step =
   FUNC_3(FUNC_1(VAR_21->trans->hw_rev));
  FUNC_19(VAR_25->fw_human_readable, VAR_21->fw->human_readable,
         sizeof(VAR_25->fw_human_readable));
  FUNC_20(VAR_25->dev_human_readable, VAR_21->trans->cfg->name,
   sizeof(VAR_25->dev_human_readable) - 1);
  FUNC_20(VAR_25->bus_human_readable, VAR_21->dev->bus->name,
   sizeof(VAR_25->bus_human_readable) - 1);
  VAR_25->num_of_lmacs = VAR_21->smem_cfg.num_lmacs;
  VAR_25->lmac_err_id[0] =
   FUNC_3(VAR_21->dump.lmac_err_id[0]);
  if (VAR_21->smem_cfg.num_lmacs > 1)
   VAR_25->lmac_err_id[1] =
    FUNC_3(VAR_21->dump.lmac_err_id[1]);
  VAR_25->umac_err_id = FUNC_3(VAR_21->dump.umac_err_id);

  VAR_24 = FUNC_11(VAR_24);
 }

 if (FUNC_7(VAR_21, VAR_6)) {

  VAR_24->type = FUNC_3(VAR_6);
  VAR_24->len = FUNC_3(sizeof(*VAR_26));
  VAR_26 = (void *)VAR_24->data;
  VAR_26->num_lmacs = FUNC_3(VAR_31->num_lmacs);
  VAR_26->num_txfifo_entries =
   FUNC_3(VAR_31->num_txfifo_entries);
  for (VAR_38 = 0; VAR_38 < VAR_13; VAR_38++) {
   int VAR_41;
   u32 *VAR_42 = VAR_31->lmac[VAR_38].txfifo_size;

   for (VAR_41 = 0; VAR_41 < VAR_18; VAR_41++)
    VAR_26->lmac[VAR_38].txfifo_size[VAR_41] =
     FUNC_3(VAR_42[VAR_41]);
   VAR_26->lmac[VAR_38].rxfifo1_size =
    FUNC_3(VAR_31->lmac[VAR_38].rxfifo1_size);
  }
  VAR_26->rxfifo2_size =
   FUNC_3(VAR_31->rxfifo2_size);
  VAR_26->internal_txfifo_addr =
   FUNC_3(VAR_31->internal_txfifo_addr);
  for (VAR_38 = 0; VAR_38 < VAR_17; VAR_38++) {
   VAR_26->internal_txfifo_size[VAR_38] =
    FUNC_3(VAR_31->internal_txfifo_size[VAR_38]);
  }

  VAR_24 = FUNC_11(VAR_24);
 }


 if (VAR_33) {
  FUNC_9(VAR_21, &VAR_24);
  FUNC_10(VAR_21, &VAR_24);
 }

 if (VAR_35)
  FUNC_15(VAR_21, &VAR_24);

 if (FUNC_7(VAR_21, VAR_4) &&
     VAR_21->dump.desc) {
  VAR_24->type = FUNC_3(VAR_4);
  VAR_24->len = FUNC_3(sizeof(*VAR_27) +
          VAR_21->dump.desc->len);
  VAR_27 = (void *)VAR_24->data;
  FUNC_19(VAR_27, &VAR_21->dump.desc->trig_desc,
         sizeof(*VAR_27) + VAR_21->dump.desc->len);

  VAR_24 = FUNC_11(VAR_24);
 }


 if (VAR_21->dump.monitor_only)
  goto out;

 if (FUNC_7(VAR_21, VAR_5)) {
  const struct iwl_fw_dbg_mem_seg_tlv *VAR_43 =
   VAR_21->fw->dbg.mem_tlv;

  if (!VAR_21->fw->dbg.n_mem_tlv)
   FUNC_8(VAR_21, &VAR_24, VAR_28, VAR_29,
     VAR_8);

  for (VAR_38 = 0; VAR_38 < VAR_21->fw->dbg.n_mem_tlv; VAR_38++) {
   u32 VAR_44 = FUNC_18(VAR_43[VAR_38].len);
   u32 VAR_45 = FUNC_18(VAR_43[VAR_38].ofs);

   FUNC_8(VAR_21, &VAR_24, VAR_44, VAR_45,
     FUNC_18(VAR_43[VAR_38].data_type));
  }

  FUNC_8(VAR_21, &VAR_24, VAR_36,
    VAR_21->trans->cfg->smem_offset,
    VAR_7);

  FUNC_8(VAR_21, &VAR_24, VAR_37,
    VAR_21->trans->cfg->dccm2_offset,
    VAR_8);
 }

 if (FUNC_5(VAR_21) && VAR_21->dump.d3_debug_data) {
  u32 VAR_46 = VAR_21->trans->cfg->d3_debug_data_base_addr;
  size_t VAR_47 = VAR_21->trans->cfg->d3_debug_data_length;

  VAR_24->type = FUNC_3(VAR_2);
  VAR_24->len = FUNC_3(VAR_47 * 2);

  FUNC_19(VAR_24->data, VAR_21->dump.d3_debug_data, VAR_47);

  FUNC_17(VAR_21->dump.d3_debug_data);
  VAR_21->dump.d3_debug_data = ((void*)0);

  FUNC_16(VAR_21->trans, VAR_46,
      VAR_24->data + VAR_47,
      VAR_47);

  VAR_24 = FUNC_11(VAR_24);
 }


 if (FUNC_6(VAR_21))
  FUNC_4(VAR_21, &VAR_24);

 if (VAR_34)
  FUNC_12(VAR_21, &VAR_24, VAR_19);

out:
 VAR_23->file_len = FUNC_3(VAR_32);
 return VAR_23;
}
