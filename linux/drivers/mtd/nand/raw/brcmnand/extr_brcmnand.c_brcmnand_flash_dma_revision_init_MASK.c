
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmnand_controller {int nand_version; int flash_dma_offsets; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct brcmnand_controller *VAR_2)
{

 if (VAR_2->nand_version >= 0x0703)
  VAR_2->flash_dma_offsets = VAR_1;
 else
  VAR_2->flash_dma_offsets = VAR_0;
}
