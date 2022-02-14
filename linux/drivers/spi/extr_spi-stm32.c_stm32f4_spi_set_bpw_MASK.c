
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spi {int cur_bpw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stm32_spi*,int ,int ) ;
 int FUNC_1 (struct stm32_spi*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct stm32_spi *VAR_2)
{
 if (VAR_2->cur_bpw == 16)
  FUNC_1(VAR_2, VAR_0, VAR_1);
 else
  FUNC_0(VAR_2, VAR_0, VAR_1);
}
