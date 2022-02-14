
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spi {scalar_t__ cur_comm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct stm32_spi*) ;
 int FUNC_1 (struct stm32_spi*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct stm32_spi *VAR_5)
{

 if (VAR_5->cur_comm == VAR_2 || VAR_5->cur_comm == VAR_0 ||
     VAR_5->cur_comm == VAR_1) {





  FUNC_1(VAR_5, VAR_3, VAR_4);
 }

 FUNC_0(VAR_5);
}
