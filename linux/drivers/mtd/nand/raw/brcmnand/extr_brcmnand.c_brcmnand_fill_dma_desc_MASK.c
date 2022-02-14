
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef void* u32 ;
struct brcmnand_host {int cs; } ;
struct brcm_nand_dma_desc {int cmd_irq; int status_valid; int cs; void* flash_addr_ext; void* flash_addr; void* total_len; void* tfr_len; void* dram_addr_ext; void* dram_addr; void* next_desc_ext; void* next_desc; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct brcm_nand_dma_desc*,int ,int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct brcmnand_host *VAR_0,
      struct brcm_nand_dma_desc *VAR_1, u64 VAR_2,
      dma_addr_t VAR_3, u32 VAR_4, u8 VAR_5,
      bool VAR_6, bool VAR_7,
      dma_addr_t VAR_8)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->next_desc = FUNC_0(VAR_8);
 VAR_1->next_desc_ext = FUNC_2(VAR_8);
 VAR_1->cmd_irq = (VAR_5 << 24) |
  (VAR_7 ? (0x03 << 8) : 0) |
  (!!VAR_6) | ((!!VAR_7) << 1);



 VAR_1->dram_addr = FUNC_0(VAR_3);
 VAR_1->dram_addr_ext = FUNC_2(VAR_3);
 VAR_1->tfr_len = VAR_4;
 VAR_1->total_len = VAR_4;
 VAR_1->flash_addr = FUNC_0(VAR_2);
 VAR_1->flash_addr_ext = FUNC_2(VAR_2);
 VAR_1->cs = VAR_0->cs;
 VAR_1->status_valid = 0x01;
 return 0;
}
