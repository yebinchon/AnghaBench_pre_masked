
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {int clk_rate; int cur_speed; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct stm32_spi *VAR_1, u32 VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_1->clk_rate, VAR_2);
 if ((VAR_5 < VAR_3) || (VAR_5 > VAR_4))
  return -VAR_0;


 if (VAR_5 & (VAR_5 - 1))
  VAR_6 = FUNC_1(VAR_5);
 else
  VAR_6 = FUNC_1(VAR_5) - 1;

 VAR_1->cur_speed = VAR_1->clk_rate / (1 << VAR_6);

 return VAR_6 - 1;
}
