
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_imx_data {int remainder; scalar_t__ rx_buf; scalar_t__ base; int bits_per_word; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct spi_imx_data*) ;
 int FUNC_2 (struct spi_imx_data*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct spi_imx_data *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 VAR_2 = VAR_1->remainder % 4;

 if (!VAR_2) {
  FUNC_1(VAR_1);
  return;
 }

 if (FUNC_3(VAR_1->bits_per_word) == 2) {
  FUNC_2(VAR_1);
  return;
 }

 VAR_3 = FUNC_0(VAR_1->base + VAR_0);

 while (VAR_2--) {
  if (VAR_1->rx_buf) {
   *(u8 *)VAR_1->rx_buf = (VAR_3 >> (8 * VAR_2)) & 0xff;
   VAR_1->rx_buf++;
  }
  VAR_1->remainder--;
 }
}
