
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_imx_data {int count; scalar_t__ base; scalar_t__ tx_buf; int bits_per_word; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct spi_imx_data*) ;
 int FUNC_1 (struct spi_imx_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct spi_imx_data *VAR_1)
{
 int VAR_2;
 u32 VAR_3 = 0;

 VAR_2 = VAR_1->count % 4;

 if (!VAR_2) {
  FUNC_0(VAR_1);
  return;
 }

 if (FUNC_2(VAR_1->bits_per_word) == 2) {
  FUNC_1(VAR_1);
  return;
 }

 while (VAR_2--) {
  if (VAR_1->tx_buf) {
   VAR_3 |= *(u8 *)VAR_1->tx_buf << (8 * VAR_2);
   VAR_1->tx_buf++;
  }
  VAR_1->count--;
 }

 FUNC_3(VAR_3, VAR_1->base + VAR_0);
}
