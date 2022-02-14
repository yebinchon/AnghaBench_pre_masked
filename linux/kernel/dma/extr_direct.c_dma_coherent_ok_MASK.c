
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int bus_dma_mask; int coherent_dma_mask; } ;
typedef int phys_addr_t ;


 size_t FUNC_0 (int ,int ) ;
 size_t FUNC_1 (struct device*,int ) ;

__attribute__((used)) static bool FUNC_2(struct device *VAR_0, phys_addr_t VAR_1, size_t VAR_2)
{
 return FUNC_1(VAR_0, VAR_1) + VAR_2 - 1 <=
   FUNC_0(VAR_0->coherent_dma_mask, VAR_0->bus_dma_mask);
}
