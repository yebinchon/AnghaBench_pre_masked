
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u32 ;
struct tegra_spi_data {int cur_rx_pos; unsigned int curr_dma_words; unsigned int bytes_per_word; unsigned int cur_pos; scalar_t__ is_packed; } ;
struct spi_transfer {unsigned int bits_per_word; unsigned int len; scalar_t__ rx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct tegra_spi_data*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(
  struct tegra_spi_data *VAR_2, struct spi_transfer *VAR_3)
{
 unsigned VAR_4;
 u32 VAR_5;
 unsigned VAR_6, VAR_7;
 unsigned int VAR_8 = 0;
 unsigned VAR_9;
 u8 *VAR_10 = (u8 *)VAR_3->rx_buf + VAR_2->cur_rx_pos;

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 VAR_4 = FUNC_0(VAR_5);
 if (VAR_2->is_packed) {
  VAR_9 = VAR_2->curr_dma_words * VAR_2->bytes_per_word;
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   u32 VAR_11 = FUNC_1(VAR_2, VAR_1);

   for (VAR_6 = 0; VAR_9 && (VAR_6 < 4); VAR_6++, VAR_9--)
    *VAR_10++ = (VAR_11 >> VAR_6*8) & 0xFF;
  }
  VAR_8 += VAR_2->curr_dma_words;
  VAR_2->cur_rx_pos += VAR_2->curr_dma_words * VAR_2->bytes_per_word;
 } else {
  u32 VAR_12 = ((u32)1 << VAR_3->bits_per_word) - 1;
  u8 VAR_13 = VAR_2->bytes_per_word;
  unsigned int VAR_14;

  VAR_9 = VAR_4 * VAR_13;
  if (VAR_9 > VAR_3->len - VAR_2->cur_pos)
   VAR_9 = VAR_3->len - VAR_2->cur_pos;
  VAR_14 = VAR_9;
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   u32 VAR_15 = FUNC_1(VAR_2, VAR_1) & VAR_12;

   for (VAR_6 = 0; VAR_9 && (VAR_6 < VAR_13); VAR_6++, VAR_9--)
    *VAR_10++ = (VAR_15 >> (VAR_6*8)) & 0xFF;
  }
  VAR_8 += VAR_4;
  VAR_2->cur_rx_pos += VAR_14;
 }

 return VAR_8;
}
