
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {int cur_bpw; int cur_fthlv; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct stm32_spi*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct stm32_spi *VAR_5)
{
 u32 VAR_6, VAR_7;
 u32 VAR_8 = 0, VAR_9 = 0;

 VAR_6 = VAR_5->cur_bpw - 1;

 VAR_8 |= VAR_1;
 VAR_9 |= (VAR_6 << VAR_2) &
       VAR_1;

 VAR_5->cur_fthlv = FUNC_1(VAR_5);
 VAR_7 = VAR_5->cur_fthlv - 1;

 VAR_8 |= VAR_3;
 VAR_9 |= (VAR_7 << VAR_4) &
       VAR_3;

 FUNC_2(
  (FUNC_0(VAR_5->base + VAR_0) &
   ~VAR_8) | VAR_9,
  VAR_5->base + VAR_0);
}
