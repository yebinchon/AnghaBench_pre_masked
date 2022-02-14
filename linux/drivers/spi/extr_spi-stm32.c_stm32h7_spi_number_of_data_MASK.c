
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct stm32_spi *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = 0, VAR_7 = 0;

 if (VAR_5 <= (VAR_2 >>
    VAR_3)) {
  VAR_6 |= VAR_2;
  VAR_7 = VAR_5 << VAR_3;
  FUNC_1((FUNC_0(VAR_4->base + VAR_1) &
    ~VAR_6) | VAR_7,
          VAR_4->base + VAR_1);
 } else {
  return -VAR_0;
 }

 return 0;
}
