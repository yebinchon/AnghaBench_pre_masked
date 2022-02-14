
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iwlagn_scd_bc_tbl {void** tfd_offset; } ;
struct iwl_txq {int write_ptr; int id; TYPE_2__* entries; } ;
struct iwl_tx_cmd {int sta_id; int sec_ctl; } ;
struct TYPE_6__ {struct iwlagn_scd_bc_tbl* addr; } ;
struct iwl_trans_pcie {scalar_t__ bc_table_dword; TYPE_3__ scd_bc_tbls; } ;
struct iwl_trans {int dummy; } ;
typedef void* __le16 ;
struct TYPE_5__ {TYPE_1__* cmd; } ;
struct TYPE_4__ {scalar_t__ payload; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;


 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct iwl_trans *VAR_9,
          struct iwl_txq *VAR_10, u16 VAR_11,
          int VAR_12)
{
 struct iwlagn_scd_bc_tbl *VAR_13;
 struct iwl_trans_pcie *VAR_14 = FUNC_1(VAR_9);
 int VAR_15 = VAR_10->write_ptr;
 int VAR_16 = VAR_10->id;
 u8 VAR_17 = 0;
 u16 VAR_18 = VAR_11 + VAR_4 + VAR_5;
 __le16 VAR_19;
 struct iwl_tx_cmd *VAR_20 =
  (void *)VAR_10->entries[VAR_10->write_ptr].cmd->payload;
 u8 VAR_21 = VAR_20->sta_id;

 VAR_13 = VAR_14->scd_bc_tbls.addr;

 VAR_17 = VAR_20->sec_ctl;

 switch (VAR_17 & VAR_8) {
 case 130:
  VAR_18 += VAR_0;
  break;
 case 129:
  VAR_18 += VAR_1;
  break;
 case 128:
  VAR_18 += VAR_3 + VAR_2;
  break;
 }
 if (VAR_14->bc_table_dword)
  VAR_18 = FUNC_0(VAR_18, 4);

 if (FUNC_2(VAR_18 > 0xFFF || VAR_15 >= VAR_7))
  return;

 VAR_19 = FUNC_3(VAR_18 | (VAR_21 << 12));

 VAR_13[VAR_16].tfd_offset[VAR_15] = VAR_19;

 if (VAR_15 < VAR_6)
  VAR_13[VAR_16].
   tfd_offset[VAR_7 + VAR_15] = VAR_19;
}
