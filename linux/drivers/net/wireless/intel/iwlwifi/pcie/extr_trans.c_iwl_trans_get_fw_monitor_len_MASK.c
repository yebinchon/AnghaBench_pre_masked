
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
struct TYPE_10__ {TYPE_4__* dest_tlv; TYPE_1__* fw_mon; scalar_t__ num_blocks; } ;
struct iwl_trans {TYPE_5__ dbg; TYPE_3__* trans_cfg; TYPE_2__* cfg; } ;
struct iwl_fw_error_dump_fw_mon {int dummy; } ;
struct iwl_fw_error_dump_data {int dummy; } ;
struct TYPE_9__ {int version; int base_shift; int end_shift; scalar_t__ monitor_mode; int end_reg; int base_reg; } ;
struct TYPE_8__ {scalar_t__ device_family; } ;
struct TYPE_7__ {scalar_t__ smem_offset; } ;
struct TYPE_6__ {int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct iwl_trans*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iwl_trans *VAR_5, u32 *VAR_6)
{
 if (VAR_5->dbg.num_blocks) {
  *VAR_6 += sizeof(struct iwl_fw_error_dump_data) +
   sizeof(struct iwl_fw_error_dump_fw_mon) +
   VAR_5->dbg.fw_mon[0].size;
  return VAR_5->dbg.fw_mon[0].size;
 } else if (VAR_5->dbg.dest_tlv) {
  u32 VAR_7, VAR_8, VAR_9, VAR_10;

  if (VAR_5->dbg.dest_tlv->version == 1) {
   VAR_9 = FUNC_1(VAR_5->dbg.dest_tlv->base_reg);
   VAR_9 = FUNC_0(VAR_5, VAR_9);
   VAR_7 = (VAR_9 & VAR_1) <<
    VAR_5->dbg.dest_tlv->base_shift;
   VAR_7 *= VAR_3;
   VAR_7 += VAR_5->cfg->smem_offset;

   VAR_10 =
    (VAR_9 & VAR_2) >>
    VAR_5->dbg.dest_tlv->end_shift;
   VAR_10 *= VAR_3;
  } else {
   VAR_7 = FUNC_1(VAR_5->dbg.dest_tlv->base_reg);
   VAR_8 = FUNC_1(VAR_5->dbg.dest_tlv->end_reg);

   VAR_7 = FUNC_0(VAR_5, VAR_7) <<
          VAR_5->dbg.dest_tlv->base_shift;
   VAR_8 = FUNC_0(VAR_5, VAR_8) <<
         VAR_5->dbg.dest_tlv->end_shift;


   if (VAR_5->trans_cfg->device_family >=
       VAR_0 ||
       VAR_5->dbg.dest_tlv->monitor_mode == VAR_4)
    VAR_8 += (1 << VAR_5->dbg.dest_tlv->end_shift);
   VAR_10 = VAR_8 - VAR_7;
  }
  *VAR_6 += sizeof(struct iwl_fw_error_dump_data) +
   sizeof(struct iwl_fw_error_dump_fw_mon) +
   VAR_10;
  return VAR_10;
 }
 return 0;
}
