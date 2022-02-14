
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* dest_tlv; } ;
struct iwl_trans {TYPE_3__* trans_cfg; TYPE_2__ dbg; } ;
struct iwl_fw_error_dump_fw_mon {void* fw_mon_wr_ptr; void* fw_mon_base_high_ptr; void* fw_mon_base_ptr; void* fw_mon_cycle_cnt; } ;
struct TYPE_6__ {scalar_t__ device_family; } ;
struct TYPE_4__ {int base_reg; int wrap_count; int write_ptr_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_trans*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct iwl_trans *VAR_9,
        struct iwl_fw_error_dump_fw_mon *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_9->trans_cfg->device_family >= VAR_5) {
  VAR_11 = VAR_0;
  VAR_12 = VAR_1;
  VAR_13 = VAR_2;
  VAR_15 = VAR_4;
 } else if (VAR_9->dbg.dest_tlv) {
  VAR_13 = FUNC_2(VAR_9->dbg.dest_tlv->write_ptr_reg);
  VAR_15 = FUNC_2(VAR_9->dbg.dest_tlv->wrap_count);
  VAR_11 = FUNC_2(VAR_9->dbg.dest_tlv->base_reg);
 } else {
  VAR_11 = VAR_6;
  VAR_13 = VAR_8;
  VAR_15 = VAR_7;
 }

 VAR_14 = FUNC_1(VAR_9, VAR_13);
 VAR_10->fw_mon_cycle_cnt =
  FUNC_0(FUNC_1(VAR_9, VAR_15));
 VAR_10->fw_mon_base_ptr =
  FUNC_0(FUNC_1(VAR_9, VAR_11));
 if (VAR_9->trans_cfg->device_family >= VAR_5) {
  VAR_10->fw_mon_base_high_ptr =
   FUNC_0(FUNC_1(VAR_9, VAR_12));
  VAR_14 &= VAR_3;
 }
 VAR_10->fw_mon_wr_ptr = FUNC_0(VAR_14);
}
