
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct octeon_instr_queue {scalar_t__ inst_cnt_reg; int reset_instr_cnt; scalar_t__ doorbell_reg; int max_count; int base_addr_dma; } ;
struct octeon_device {TYPE_2__* pci_dev; TYPE_1__* mmio; struct octeon_instr_queue** instr_queue; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ hw_addr; } ;


 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int *,char*,size_t,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct octeon_device*,int ,int ) ;
 int FUNC_7 (struct octeon_device*,int ,int ) ;
 int FUNC_8 (scalar_t__) ;

void FUNC_9(struct octeon_device *VAR_0, u32 VAR_1)
{
 struct octeon_instr_queue *VAR_2 = VAR_0->instr_queue[VAR_1];

 FUNC_7(VAR_0, FUNC_3(VAR_1), 0);


 FUNC_7(VAR_0, FUNC_0(VAR_1),
      VAR_2->base_addr_dma);
 FUNC_6(VAR_0, FUNC_4(VAR_1), VAR_2->max_count);




 VAR_2->doorbell_reg = VAR_0->mmio[0].hw_addr + FUNC_1(VAR_1);
 VAR_2->inst_cnt_reg = VAR_0->mmio[0].hw_addr
      + FUNC_2(VAR_1);
 FUNC_5(&VAR_0->pci_dev->dev, "InstQ[%d]:dbell reg @ 0x%p instcnt_reg @ 0x%p\n",
  VAR_1, VAR_2->doorbell_reg, VAR_2->inst_cnt_reg);




 VAR_2->reset_instr_cnt = FUNC_8(VAR_2->inst_cnt_reg);
}
