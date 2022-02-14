
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct octeon_instr_queue {scalar_t__ reset_instr_cnt; int * inst_cnt_reg; int * doorbell_reg; int max_count; int base_addr_dma; } ;
struct TYPE_4__ {scalar_t__ pf_srn; } ;
struct octeon_device {scalar_t__ msix_on; TYPE_3__* pci_dev; TYPE_2__* mmio; TYPE_1__ sriov_info; struct octeon_instr_queue** instr_queue; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ hw_addr; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int *,char*,size_t,int *,int *) ;
 int FUNC_5 (struct octeon_device*,int ,int ) ;
 int FUNC_6 (struct octeon_device*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static void FUNC_9(struct octeon_device *VAR_1, u32 VAR_2)
{
 struct octeon_instr_queue *VAR_3 = VAR_1->instr_queue[VAR_2];
 u64 VAR_4;

 VAR_2 += VAR_1->sriov_info.pf_srn;


 FUNC_6(VAR_1, FUNC_0(VAR_2),
      VAR_3->base_addr_dma);
 FUNC_5(VAR_1, FUNC_3(VAR_2), VAR_3->max_count);




 VAR_3->doorbell_reg =
     (u8 *)VAR_1->mmio[0].hw_addr + FUNC_1(VAR_2);
 VAR_3->inst_cnt_reg =
     (u8 *)VAR_1->mmio[0].hw_addr + FUNC_2(VAR_2);
 FUNC_4(&VAR_1->pci_dev->dev, "InstQ[%d]:dbell reg @ 0x%p instcnt_reg @ 0x%p\n",
  VAR_2, VAR_3->doorbell_reg, VAR_3->inst_cnt_reg);




 VAR_4 = FUNC_7(VAR_3->inst_cnt_reg);

 if (VAR_1->msix_on) {

  FUNC_8((VAR_4 | VAR_0),
         VAR_3->inst_cnt_reg);
 } else {



  FUNC_8(VAR_4, VAR_3->inst_cnt_reg);
 }

 VAR_3->reset_instr_cnt = 0;
}
