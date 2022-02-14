
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvumi_hw_regs {int int_comaout; int int_comaerr; int int_dl_cpu2pciea; int cl_pointer_toggle; int clic_irq; int clic_in_err; int clic_out_err; int cl_slot_num_mask; int int_drbl_int_mask; int int_mu; void* outb_isr_cause; void* outb_coal_cfg; void* outb_read_pointer; void* outb_copy_pointer; void* outb_copy_baseh; void* outb_copy_basel; void* inb_read_pointer; void* inb_write_pointer; void* inb_aval_count_baseh; void* inb_aval_count_basel; void* reset_enable; void* reset_request; void* arm_to_pciea_msg1; void* arm_to_pciea_msg0; void* pciea_to_arm_msg1; void* pciea_to_arm_msg0; void* arm_to_pciea_mask_reg; void* arm_to_pciea_drbl_reg; void* pciea_to_arm_drbl_reg; void* rstoutn_en_reg; void* enpointa_mask_reg; void* main_int_cause_reg; void* sys_soft_rst_reg; void* rstoutn_mask_reg; void* ctrl_sts_reg; } ;
struct mvumi_hba {struct mvumi_hw_regs* regs; void* mmio; void** base_addr; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;


 void* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct mvumi_hba *VAR_2)
{
 void *VAR_3 = ((void*)0);
 struct mvumi_hw_regs *VAR_4;

 switch (VAR_2->pdev->device) {
 case 129:
  VAR_2->mmio = VAR_2->base_addr[0];
  VAR_3 = VAR_2->mmio;
  if (!VAR_2->regs) {
   VAR_2->regs = FUNC_0(sizeof(*VAR_4), VAR_1);
   if (VAR_2->regs == ((void*)0))
    return -VAR_0;
  }
  VAR_4 = VAR_2->regs;


  VAR_4->ctrl_sts_reg = VAR_3 + 0x20104;
  VAR_4->rstoutn_mask_reg = VAR_3 + 0x20108;
  VAR_4->sys_soft_rst_reg = VAR_3 + 0x2010C;
  VAR_4->main_int_cause_reg = VAR_3 + 0x20200;
  VAR_4->enpointa_mask_reg = VAR_3 + 0x2020C;
  VAR_4->rstoutn_en_reg = VAR_3 + 0xF1400;

  VAR_4->pciea_to_arm_drbl_reg = VAR_3 + 0x20400;
  VAR_4->arm_to_pciea_drbl_reg = VAR_3 + 0x20408;
  VAR_4->arm_to_pciea_mask_reg = VAR_3 + 0x2040C;
  VAR_4->pciea_to_arm_msg0 = VAR_3 + 0x20430;
  VAR_4->pciea_to_arm_msg1 = VAR_3 + 0x20434;
  VAR_4->arm_to_pciea_msg0 = VAR_3 + 0x20438;
  VAR_4->arm_to_pciea_msg1 = VAR_3 + 0x2043C;



  VAR_4->inb_aval_count_basel = VAR_3 + 0x508;
  VAR_4->inb_aval_count_baseh = VAR_3 + 0x50C;
  VAR_4->inb_write_pointer = VAR_3 + 0x518;
  VAR_4->inb_read_pointer = VAR_3 + 0x51C;
  VAR_4->outb_coal_cfg = VAR_3 + 0x568;
  VAR_4->outb_copy_basel = VAR_3 + 0x5B0;
  VAR_4->outb_copy_baseh = VAR_3 + 0x5B4;
  VAR_4->outb_copy_pointer = VAR_3 + 0x544;
  VAR_4->outb_read_pointer = VAR_3 + 0x548;
  VAR_4->outb_isr_cause = VAR_3 + 0x560;
  VAR_4->outb_coal_cfg = VAR_3 + 0x568;

  VAR_4->int_comaout = 1 << 8;
  VAR_4->int_comaerr = 1 << 6;
  VAR_4->int_dl_cpu2pciea = 1 << 1;
  VAR_4->cl_pointer_toggle = 1 << 12;
  VAR_4->clic_irq = 1 << 1;
  VAR_4->clic_in_err = 1 << 8;
  VAR_4->clic_out_err = 1 << 12;
  VAR_4->cl_slot_num_mask = 0xFFF;
  VAR_4->int_drbl_int_mask = 0x3FFFFFFF;
  VAR_4->int_mu = VAR_4->int_dl_cpu2pciea | VAR_4->int_comaout |
       VAR_4->int_comaerr;
  break;
 case 128:
  VAR_2->mmio = VAR_2->base_addr[2];
  VAR_3 = VAR_2->mmio;
  if (!VAR_2->regs) {
   VAR_2->regs = FUNC_0(sizeof(*VAR_4), VAR_1);
   if (VAR_2->regs == ((void*)0))
    return -VAR_0;
  }
  VAR_4 = VAR_2->regs;

  VAR_4->ctrl_sts_reg = VAR_3 + 0x20104;
  VAR_4->rstoutn_mask_reg = VAR_3 + 0x1010C;
  VAR_4->sys_soft_rst_reg = VAR_3 + 0x10108;
  VAR_4->main_int_cause_reg = VAR_3 + 0x10200;
  VAR_4->enpointa_mask_reg = VAR_3 + 0x1020C;
  VAR_4->rstoutn_en_reg = VAR_3 + 0xF1400;


  VAR_4->pciea_to_arm_drbl_reg = VAR_3 + 0x10460;
  VAR_4->arm_to_pciea_drbl_reg = VAR_3 + 0x10480;
  VAR_4->arm_to_pciea_mask_reg = VAR_3 + 0x10484;
  VAR_4->pciea_to_arm_msg0 = VAR_3 + 0x10400;
  VAR_4->pciea_to_arm_msg1 = VAR_3 + 0x10404;
  VAR_4->arm_to_pciea_msg0 = VAR_3 + 0x10420;
  VAR_4->arm_to_pciea_msg1 = VAR_3 + 0x10424;


  VAR_4->reset_request = VAR_3 + 0x10108;
  VAR_4->reset_enable = VAR_3 + 0x1010c;


  VAR_4->inb_aval_count_basel = VAR_3 + 0x4008;
  VAR_4->inb_aval_count_baseh = VAR_3 + 0x400C;
  VAR_4->inb_write_pointer = VAR_3 + 0x4018;
  VAR_4->inb_read_pointer = VAR_3 + 0x401C;
  VAR_4->outb_copy_basel = VAR_3 + 0x4058;
  VAR_4->outb_copy_baseh = VAR_3 + 0x405C;
  VAR_4->outb_copy_pointer = VAR_3 + 0x406C;
  VAR_4->outb_read_pointer = VAR_3 + 0x4070;
  VAR_4->outb_coal_cfg = VAR_3 + 0x4080;
  VAR_4->outb_isr_cause = VAR_3 + 0x4088;

  VAR_4->int_comaout = 1 << 4;
  VAR_4->int_dl_cpu2pciea = 1 << 12;
  VAR_4->int_comaerr = 1 << 29;
  VAR_4->cl_pointer_toggle = 1 << 14;
  VAR_4->cl_slot_num_mask = 0x3FFF;
  VAR_4->clic_irq = 1 << 0;
  VAR_4->clic_out_err = 1 << 1;
  VAR_4->int_drbl_int_mask = 0x3FFFFFFF;
  VAR_4->int_mu = VAR_4->int_dl_cpu2pciea | VAR_4->int_comaout;
  break;
 default:
  return -1;
  break;
 }

 return 0;
}
