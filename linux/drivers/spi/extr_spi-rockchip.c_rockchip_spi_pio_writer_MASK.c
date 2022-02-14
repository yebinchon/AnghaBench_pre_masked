
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct rockchip_spi {int n_bytes; scalar_t__ tx; scalar_t__ regs; int tx_left; scalar_t__ fifo_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rockchip_spi *VAR_2)
{
 u32 VAR_3 = VAR_2->fifo_len - FUNC_1(VAR_2->regs + VAR_1);
 u32 VAR_4 = FUNC_0(VAR_2->tx_left, VAR_3);

 VAR_2->tx_left -= VAR_4;
 for (; VAR_4; VAR_4--) {
  u32 VAR_5;

  if (VAR_2->n_bytes == 1)
   VAR_5 = *(u8 *)VAR_2->tx;
  else
   VAR_5 = *(u16 *)VAR_2->tx;

  FUNC_2(VAR_5, VAR_2->regs + VAR_0);
  VAR_2->tx += VAR_2->n_bytes;
 }
}
