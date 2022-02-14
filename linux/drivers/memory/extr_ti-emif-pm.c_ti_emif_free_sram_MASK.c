
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_emif_data {int ti_emif_sram_data_virt; int sram_pool_data; int ti_emif_sram_virt; int sram_pool_code; } ;
struct emif_regs_amx3 {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ti_emif_data *VAR_1)
{
 FUNC_0(VAR_1->sram_pool_code, VAR_1->ti_emif_sram_virt,
        VAR_0);
 FUNC_0(VAR_1->sram_pool_data,
        VAR_1->ti_emif_sram_data_virt,
        sizeof(struct emif_regs_amx3));
}
