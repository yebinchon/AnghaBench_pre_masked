
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {int base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2(struct stm32_spi *VAR_0,
          u32 VAR_1, u32 VAR_2)
{
 FUNC_1(FUNC_0(VAR_0->base + VAR_1) | VAR_2,
         VAR_0->base + VAR_1);
}
