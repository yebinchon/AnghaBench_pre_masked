
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int n_dest_reg; TYPE_3__* fw_mon; int num_blocks; struct iwl_fw_dbg_dest_tlv_v1* dest_tlv; } ;
struct iwl_trans {TYPE_4__ dbg; TYPE_2__* trans_cfg; } ;
struct iwl_fw_dbg_dest_tlv_v1 {scalar_t__ monitor_mode; int base_shift; int end_shift; int end_reg; int base_reg; TYPE_1__* reg_ops; int size_power; } ;
struct TYPE_7__ {int physical; int size; } ;
struct TYPE_6__ {scalar_t__ device_family; } ;
struct TYPE_5__ {int op; int val; int addr; } ;


 int FUNC_0 (int) ;



 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct iwl_trans*,char*,int,...) ;
 int FUNC_3 (struct iwl_trans*,char*,int ) ;
 int FUNC_4 (struct iwl_trans*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct iwl_trans*,int,int) ;
 int FUNC_7 (struct iwl_trans*,int,int) ;
 int FUNC_8 (struct iwl_trans*,int ) ;
 int FUNC_9 (struct iwl_trans*,int) ;
 int FUNC_10 (struct iwl_trans*,int,int) ;
 int FUNC_11 (struct iwl_trans*,int,int) ;
 scalar_t__ FUNC_12 (struct iwl_trans*) ;
 int FUNC_13 (struct iwl_trans*,int,int) ;
 int FUNC_14 (struct iwl_trans*,int,int) ;
 int FUNC_15 (struct iwl_trans*,int ,int) ;
 int FUNC_16 (int ) ;

void FUNC_17(struct iwl_trans *VAR_5)
{
 const struct iwl_fw_dbg_dest_tlv_v1 *VAR_6 = VAR_5->dbg.dest_tlv;
 int VAR_7;

 if (FUNC_12(VAR_5)) {
  if (!VAR_5->dbg.num_blocks)
   return;

  FUNC_1(VAR_5,
        "WRT: Applying DRAM buffer[0] destination\n");
  FUNC_15(VAR_5, VAR_2,
        VAR_5->dbg.fw_mon[0].physical >>
        VAR_4);
  FUNC_15(VAR_5, VAR_3,
        (VAR_5->dbg.fw_mon[0].physical +
         VAR_5->dbg.fw_mon[0].size - 256) >>
        VAR_4);
  return;
 }

 FUNC_3(VAR_5, "Applying debug destination %s\n",
   FUNC_5(VAR_6->monitor_mode));

 if (VAR_6->monitor_mode == VAR_0)
  FUNC_8(VAR_5, VAR_6->size_power);
 else
  FUNC_4(VAR_5, "PCI should have external buffer debug\n");

 for (VAR_7 = 0; VAR_7 < VAR_5->dbg.n_dest_reg; VAR_7++) {
  u32 VAR_8 = FUNC_16(VAR_6->reg_ops[VAR_7].addr);
  u32 VAR_9 = FUNC_16(VAR_6->reg_ops[VAR_7].val);

  switch (VAR_6->reg_ops[VAR_7].op) {
  case 134:
   FUNC_13(VAR_5, VAR_8, VAR_9);
   break;
  case 132:
   FUNC_10(VAR_5, VAR_8, FUNC_0(VAR_9));
   break;
  case 133:
   FUNC_6(VAR_5, VAR_8, FUNC_0(VAR_9));
   break;
  case 131:
   FUNC_14(VAR_5, VAR_8, VAR_9);
   break;
  case 128:
   FUNC_11(VAR_5, VAR_8, FUNC_0(VAR_9));
   break;
  case 129:
   FUNC_7(VAR_5, VAR_8, FUNC_0(VAR_9));
   break;
  case 130:
   if (FUNC_9(VAR_5, VAR_8) & FUNC_0(VAR_9)) {
    FUNC_2(VAR_5,
     "BIT(%u) in address 0x%x is 1, stopping FW configuration\n",
     VAR_9, VAR_8);
    goto monitor;
   }
   break;
  default:
   FUNC_2(VAR_5, "FW debug - unknown OP %d\n",
    VAR_6->reg_ops[VAR_7].op);
   break;
  }
 }

monitor:
 if (VAR_6->monitor_mode == VAR_0 && VAR_5->dbg.fw_mon[0].size) {
  FUNC_14(VAR_5, FUNC_16(VAR_6->base_reg),
          VAR_5->dbg.fw_mon[0].physical >>
          VAR_6->base_shift);
  if (VAR_5->trans_cfg->device_family >= VAR_1)
   FUNC_14(VAR_5, FUNC_16(VAR_6->end_reg),
           (VAR_5->dbg.fw_mon[0].physical +
     VAR_5->dbg.fw_mon[0].size - 256) >>
      VAR_6->end_shift);
  else
   FUNC_14(VAR_5, FUNC_16(VAR_6->end_reg),
           (VAR_5->dbg.fw_mon[0].physical +
     VAR_5->dbg.fw_mon[0].size) >>
      VAR_6->end_shift);
 }
}
