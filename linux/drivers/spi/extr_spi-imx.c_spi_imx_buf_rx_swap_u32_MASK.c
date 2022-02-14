
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct spi_imx_data {int remainder; scalar_t__ rx_buf; int bits_per_word; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spi_imx_data *VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_1->base + VAR_0);




 if (VAR_1->rx_buf) {







  *(u32 *)VAR_1->rx_buf = VAR_2;
  VAR_1->rx_buf += sizeof(u32);
 }

 VAR_1->remainder -= sizeof(u32);
}
