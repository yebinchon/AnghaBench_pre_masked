
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_imx_data {int count; scalar_t__ base; int bits_per_word; scalar_t__ tx_buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_imx_data *VAR_1)
{
 u32 VAR_2 = 0;




 if (VAR_1->tx_buf) {
  VAR_2 = *(u32 *)VAR_1->tx_buf;
  VAR_1->tx_buf += sizeof(u32);
 }

 VAR_1->count -= sizeof(u32);
 FUNC_2(VAR_2, VAR_1->base + VAR_0);
}
