
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static inline phys_addr_t FUNC_2(dma_addr_t VAR_2)
{
 unsigned long VAR_3 = FUNC_1(FUNC_0(VAR_2));
 dma_addr_t VAR_4 = (dma_addr_t)VAR_3 << VAR_1;
 phys_addr_t VAR_5 = VAR_4;

 VAR_5 |= VAR_2 & ~VAR_0;

 return VAR_5;
}
