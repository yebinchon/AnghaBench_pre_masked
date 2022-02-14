
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {int fifo_size; int cur_bpw; } ;



__attribute__((used)) static u32 FUNC_0(struct stm32_spi *VAR_0)
{
 u32 VAR_1, VAR_2;


 VAR_2 = (VAR_0->fifo_size / 2);

 if (VAR_0->cur_bpw <= 8)
  VAR_1 = VAR_2;
 else if (VAR_0->cur_bpw <= 16)
  VAR_1 = VAR_2 / 2;
 else
  VAR_1 = VAR_2 / 4;


 if (VAR_0->cur_bpw > 8)
  VAR_1 -= (VAR_1 % 2);
 else
  VAR_1 -= (VAR_1 % 4);

 return VAR_1;
}
