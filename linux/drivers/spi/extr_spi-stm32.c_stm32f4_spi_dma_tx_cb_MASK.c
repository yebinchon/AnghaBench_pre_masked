
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spi {scalar_t__ cur_comm; int master; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct stm32_spi*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 struct stm32_spi *VAR_3 = VAR_2;

 if (VAR_3->cur_comm == VAR_1 || VAR_3->cur_comm == VAR_0) {
  FUNC_0(VAR_3->master);
  FUNC_1(VAR_3);
 }
}
