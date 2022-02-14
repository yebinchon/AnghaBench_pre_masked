
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u32 ;
typedef void* u16 ;
struct xilinx_spi {int bytes_per_word; scalar_t__ rx_ptr; scalar_t__ regs; void* (* read_fn ) (scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct xilinx_spi *VAR_1)
{
 u32 VAR_2 = VAR_1->read_fn(VAR_1->regs + VAR_0);

 if (!VAR_1->rx_ptr)
  return;

 switch (VAR_1->bytes_per_word) {
 case 1:
  *(u8 *)(VAR_1->rx_ptr) = VAR_2;
  break;
 case 2:
  *(u16 *)(VAR_1->rx_ptr) = VAR_2;
  break;
 case 4:
  *(u32 *)(VAR_1->rx_ptr) = VAR_2;
  break;
 }

 VAR_1->rx_ptr += VAR_1->bytes_per_word;
}
