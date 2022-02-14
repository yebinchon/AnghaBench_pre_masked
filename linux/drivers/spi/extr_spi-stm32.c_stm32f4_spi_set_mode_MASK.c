
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spi {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct stm32_spi*,int ,int) ;
 int FUNC_1 (struct stm32_spi*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct stm32_spi *VAR_7, unsigned int VAR_8)
{
 if (VAR_8 == VAR_1 || VAR_8 == VAR_3) {
  FUNC_1(VAR_7, VAR_4,
     VAR_5 |
     VAR_6);
 } else if (VAR_8 == VAR_2) {
  FUNC_0(VAR_7, VAR_4,
     VAR_5 |
     VAR_6);
 } else {
  return -VAR_0;
 }

 return 0;
}
