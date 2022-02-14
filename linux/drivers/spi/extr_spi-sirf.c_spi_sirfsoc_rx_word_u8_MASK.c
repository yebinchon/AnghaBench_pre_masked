
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct sirfsoc_spi {int left_rx_word; scalar_t__* rx; TYPE_1__* regs; scalar_t__ base; } ;
struct TYPE_2__ {scalar_t__ rxfifo_data; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sirfsoc_spi *VAR_0)
{
 u32 VAR_1;
 u8 *VAR_2 = VAR_0->rx;

 VAR_1 = FUNC_0(VAR_0->base + VAR_0->regs->rxfifo_data);

 if (VAR_2) {
  *VAR_2++ = (u8) VAR_1;
  VAR_0->rx = VAR_2;
 }

 VAR_0->left_rx_word--;
}
