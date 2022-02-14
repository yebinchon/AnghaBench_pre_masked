
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {TYPE_4__* dest_tlv; TYPE_2__* fw_mon; scalar_t__ num_blocks; } ;
struct iwl_trans {TYPE_5__ dbg; TYPE_3__* cfg; TYPE_1__* trans_cfg; } ;
struct iwl_fw_error_dump_fw_mon {int data; int fw_mon_base_ptr; } ;
struct iwl_fw_error_dump_data {void* len; scalar_t__ data; void* type; } ;
struct TYPE_9__ {scalar_t__ monitor_mode; int base_shift; scalar_t__ version; } ;
struct TYPE_8__ {scalar_t__ smem_offset; } ;
struct TYPE_7__ {int size; int block; } ;
struct TYPE_6__ {scalar_t__ device_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_trans*,int) ;
 int FUNC_2 (struct iwl_trans*,struct iwl_fw_error_dump_fw_mon*,int) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_fw_error_dump_fw_mon*) ;
 int FUNC_4 (struct iwl_trans*,int,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static u32
FUNC_7(struct iwl_trans *VAR_7,
       struct iwl_fw_error_dump_data **VAR_8,
       u32 VAR_9)
{
 u32 VAR_10 = 0;

 if (VAR_7->dbg.dest_tlv ||
     (VAR_7->dbg.num_blocks &&
      (VAR_7->trans_cfg->device_family == VAR_0 ||
       VAR_7->trans_cfg->device_family >= VAR_1))) {
  struct iwl_fw_error_dump_fw_mon *VAR_11;

  (*VAR_8)->type = FUNC_0(VAR_2);
  VAR_11 = (void *)(*VAR_8)->data;

  FUNC_3(VAR_7, VAR_11);

  VAR_10 += sizeof(**VAR_8) + sizeof(*VAR_11);
  if (VAR_7->dbg.num_blocks) {
   FUNC_6(VAR_11->data,
          VAR_7->dbg.fw_mon[0].block,
          VAR_7->dbg.fw_mon[0].size);

   VAR_9 = VAR_7->dbg.fw_mon[0].size;
  } else if (VAR_7->dbg.dest_tlv->monitor_mode == VAR_6) {
   u32 VAR_12 = FUNC_5(VAR_11->fw_mon_base_ptr);




   if (VAR_7->dbg.dest_tlv->version) {
    VAR_12 = (FUNC_1(VAR_7, VAR_12) &
     VAR_3) <<
           VAR_7->dbg.dest_tlv->base_shift;
    VAR_12 *= VAR_4;
    VAR_12 += VAR_7->cfg->smem_offset;
   } else {
    VAR_12 = FUNC_1(VAR_7, VAR_12) <<
           VAR_7->dbg.dest_tlv->base_shift;
   }

   FUNC_4(VAR_7, VAR_12, VAR_11->data,
        VAR_9 / sizeof(u32));
  } else if (VAR_7->dbg.dest_tlv->monitor_mode == VAR_5) {
   VAR_9 =
    FUNC_2(VAR_7,
         VAR_11,
         VAR_9);
  } else {

   VAR_9 = 0;
  }

  VAR_10 += VAR_9;
  (*VAR_8)->len = FUNC_0(VAR_9 + sizeof(*VAR_11));
 }

 return VAR_10;
}
