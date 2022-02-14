
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct brcmnand_controller {scalar_t__ flash_dma_base; scalar_t__* flash_dma_offsets; } ;
typedef enum flash_dma_reg { ____Placeholder_flash_dma_reg } flash_dma_reg ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct brcmnand_controller *VAR_0,
      enum flash_dma_reg VAR_1)
{
 u16 VAR_2 = VAR_0->flash_dma_offsets[VAR_1];

 return FUNC_0(VAR_0->flash_dma_base + VAR_2);
}
