
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct xilinx_spi {int bytes_per_word; scalar_t__ tx_ptr; scalar_t__ regs; int (* write_fn ) (scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct xilinx_spi *VAR_1)
{
 u32 VAR_2 = 0;

 if (!VAR_1->tx_ptr) {
  VAR_1->write_fn(0, VAR_1->regs + VAR_0);
  return;
 }

 switch (VAR_1->bytes_per_word) {
 case 1:
  VAR_2 = *(u8 *)(VAR_1->tx_ptr);
  break;
 case 2:
  VAR_2 = *(u16 *)(VAR_1->tx_ptr);
  break;
 case 4:
  VAR_2 = *(u32 *)(VAR_1->tx_ptr);
  break;
 }

 VAR_1->write_fn(VAR_2, VAR_1->regs + VAR_0);
 VAR_1->tx_ptr += VAR_1->bytes_per_word;
}
