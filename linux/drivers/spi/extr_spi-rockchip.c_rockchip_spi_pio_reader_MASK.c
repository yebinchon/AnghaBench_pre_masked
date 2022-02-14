
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct rockchip_spi {scalar_t__ rx_left; int n_bytes; scalar_t__ rx; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rockchip_spi *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3->regs + VAR_1);
 u32 VAR_5 = VAR_3->rx_left - VAR_4;






 if (VAR_5) {
  u32 VAR_6 = FUNC_0(VAR_3->regs + VAR_2) + 1;

  if (VAR_5 < VAR_6) {
   VAR_5 = VAR_6;
   VAR_4 = VAR_3->rx_left - VAR_5;
  }
 }

 VAR_3->rx_left = VAR_5;
 for (; VAR_4; VAR_4--) {
  u32 VAR_7 = FUNC_0(VAR_3->regs + VAR_0);

  if (!VAR_3->rx)
   continue;

  if (VAR_3->n_bytes == 1)
   *(u8 *)VAR_3->rx = (u8)VAR_7;
  else
   *(u16 *)VAR_3->rx = (u16)VAR_7;
  VAR_3->rx += VAR_3->n_bytes;
 }
}
