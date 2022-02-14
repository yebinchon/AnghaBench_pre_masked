
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int const u16 ;
struct sirfsoc_spi {int left_tx_word; TYPE_1__* regs; scalar_t__ base; int const* tx; } ;
struct TYPE_2__ {scalar_t__ txfifo_data; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sirfsoc_spi *VAR_0)
{
 u32 VAR_1 = 0;
 const u16 *VAR_2 = VAR_0->tx;

 if (VAR_2) {
  VAR_1 = *VAR_2++;
  VAR_0->tx = VAR_2;
 }

 FUNC_0(VAR_1, VAR_0->base + VAR_0->regs->txfifo_data);
 VAR_0->left_tx_word--;
}
