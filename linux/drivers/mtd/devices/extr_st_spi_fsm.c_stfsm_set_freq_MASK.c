
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stfsm {int fifo_dir_delay; scalar_t__ base; int dev; int clk; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct stfsm *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_1(VAR_1->clk);





 VAR_4 = 2 * FUNC_0(VAR_3, 2 * VAR_2);
 if (VAR_4 < 2)
  VAR_4 = 2;
 else if (VAR_4 > 128)
  VAR_4 = 128;







 if (VAR_4 <= 4)
  VAR_1->fifo_dir_delay = 0;
 else if (VAR_4 <= 10)
  VAR_1->fifo_dir_delay = 1;
 else
  VAR_1->fifo_dir_delay = FUNC_0(VAR_4, 10);

 FUNC_2(VAR_1->dev, "emi_clk = %uHZ, spi_freq = %uHZ, clk_div = %u\n",
  VAR_3, VAR_2, VAR_4);

 FUNC_3(VAR_4, VAR_1->base + VAR_0);
}
