
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct switchtec_dev {int pff_csr_count; int* pff_local; TYPE_1__* mmio_pff_csr; struct part_cfg_regs* mmio_part_cfg; } ;
struct part_cfg_regs {int * dsp_pff_inst_id; int vep_pff_inst_id; int usp_pff_inst_id; } ;
struct TYPE_2__ {int vendor_id; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct switchtec_dev *VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 struct part_cfg_regs *VAR_5 = VAR_2->mmio_part_cfg;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_1(&VAR_2->mmio_pff_csr[VAR_3].vendor_id);
  if (VAR_4 != VAR_0)
   break;
 }

 VAR_2->pff_csr_count = VAR_3;

 VAR_4 = FUNC_2(&VAR_5->usp_pff_inst_id);
 if (VAR_4 < VAR_1)
  VAR_2->pff_local[VAR_4] = 1;

 VAR_4 = FUNC_2(&VAR_5->vep_pff_inst_id);
 if (VAR_4 < VAR_1)
  VAR_2->pff_local[VAR_4] = 1;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_5->dsp_pff_inst_id); VAR_3++) {
  VAR_4 = FUNC_2(&VAR_5->dsp_pff_inst_id[VAR_3]);
  if (VAR_4 < VAR_1)
   VAR_2->pff_local[VAR_4] = 1;
 }
}
