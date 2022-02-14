
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asic_fixed_properties {int mmu_pgt_size; scalar_t__ pcie_aux_dbi_reg_addr; int pcie_dbi_base_address; int tpc_enabled_mask; int max_power_default; int cb_pool_cb_size; int cb_pool_cb_cnt; int high_pll; int num_of_events; int max_asid; int cfg_size; int va_space_dram_end_address; int dram_size_for_default_page_mapping; int va_space_dram_start_address; int va_space_host_end_address; int va_space_host_start_address; int dram_page_size; int mmu_hop0_tables_total_size; int mmu_hop_table_size; int mmu_pte_size; int mmu_dram_default_page_addr; int mmu_pgt_addr; scalar_t__ sram_base_address; scalar_t__ sram_user_base_address; scalar_t__ sram_size; scalar_t__ sram_end_address; int dram_user_base_address; scalar_t__ dram_size; scalar_t__ dram_base_address; scalar_t__ dram_end_address; int completion_queues_count; TYPE_1__* hw_queues_props; } ;
struct hl_device {scalar_t__ pldm; struct asic_fixed_properties asic_prop; } ;
struct TYPE_2__ {int driver_only; int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;

void FUNC_0(struct hl_device *VAR_37)
{
 struct asic_fixed_properties *VAR_38 = &VAR_37->asic_prop;
 int VAR_39;

 for (VAR_39 = 0 ; VAR_39 < VAR_19 ; VAR_39++) {
  VAR_38->hw_queues_props[VAR_39].type = VAR_24;
  VAR_38->hw_queues_props[VAR_39].driver_only = 0;
 }

 for (; VAR_39 < VAR_19 + VAR_18 ; VAR_39++) {
  VAR_38->hw_queues_props[VAR_39].type = VAR_23;
  VAR_38->hw_queues_props[VAR_39].driver_only = 1;
 }

 for (; VAR_39 < VAR_19 + VAR_18 +
   VAR_20; VAR_39++) {
  VAR_38->hw_queues_props[VAR_39].type = VAR_25;
  VAR_38->hw_queues_props[VAR_39].driver_only = 0;
 }

 for (; VAR_39 < VAR_8; VAR_39++)
  VAR_38->hw_queues_props[VAR_39].type = VAR_26;

 VAR_38->completion_queues_count = VAR_17;

 VAR_38->dram_base_address = VAR_3;
 VAR_38->dram_size = VAR_4;
 VAR_38->dram_end_address = VAR_38->dram_base_address + VAR_38->dram_size;
 VAR_38->dram_user_base_address = VAR_2;

 VAR_38->sram_base_address = VAR_27;
 VAR_38->sram_size = VAR_28;
 VAR_38->sram_end_address = VAR_38->sram_base_address + VAR_38->sram_size;
 VAR_38->sram_user_base_address = VAR_38->sram_base_address +
      VAR_29;

 VAR_38->mmu_pgt_addr = VAR_15;
 VAR_38->mmu_dram_default_page_addr = VAR_14;
 if (VAR_37->pldm)
  VAR_38->mmu_pgt_size = 0x800000;
 else
  VAR_38->mmu_pgt_size = VAR_16;
 VAR_38->mmu_pte_size = VAR_9;
 VAR_38->mmu_hop_table_size = VAR_11;
 VAR_38->mmu_hop0_tables_total_size = VAR_10;
 VAR_38->dram_page_size = VAR_21;

 VAR_38->va_space_host_start_address = VAR_34;
 VAR_38->va_space_host_end_address = VAR_33;
 VAR_38->va_space_dram_start_address = VAR_32;
 VAR_38->va_space_dram_end_address = VAR_31;
 VAR_38->dram_size_for_default_page_mapping =
   VAR_38->va_space_dram_end_address;
 VAR_38->cfg_size = VAR_1;
 VAR_38->max_asid = VAR_12;
 VAR_38->num_of_events = VAR_5;
 VAR_38->high_pll = VAR_22;
 VAR_38->cb_pool_cb_cnt = VAR_6;
 VAR_38->cb_pool_cb_size = VAR_7;
 VAR_38->max_power_default = VAR_13;
 VAR_38->tpc_enabled_mask = VAR_30;
 VAR_38->pcie_dbi_base_address = VAR_36;
 VAR_38->pcie_aux_dbi_reg_addr = VAR_0 + VAR_35;
}
