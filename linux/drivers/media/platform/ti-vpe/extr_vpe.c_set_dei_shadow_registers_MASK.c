
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vpe_mmr_adb {int * dei_regs; } ;
struct vpe_dei_regs {int edi_lut_reg3; int edi_lut_reg2; int edi_lut_reg1; int edi_lut_reg0; int edi_config_reg; int mdt_spacial_freq_thr_reg; } ;
struct TYPE_2__ {struct vpe_mmr_adb* addr; } ;
struct vpe_ctx {int load_mmrs; TYPE_1__ mmr_adb; } ;


 struct vpe_dei_regs VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vpe_ctx *VAR_1)
{
 struct vpe_mmr_adb *VAR_2 = VAR_1->mmr_adb.addr;
 u32 *VAR_3 = &VAR_2->dei_regs[0];
 const struct vpe_dei_regs *VAR_4 = &VAR_0;

 VAR_3[2] = VAR_4->mdt_spacial_freq_thr_reg;
 VAR_3[3] = VAR_4->edi_config_reg;
 VAR_3[4] = VAR_4->edi_lut_reg0;
 VAR_3[5] = VAR_4->edi_lut_reg1;
 VAR_3[6] = VAR_4->edi_lut_reg2;
 VAR_3[7] = VAR_4->edi_lut_reg3;

 VAR_1->load_mmrs = 1;
}
