
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct tegra_slink_data {int cur_rx_pos; unsigned int curr_dma_words; unsigned int bytes_per_word; scalar_t__ is_packed; } ;
struct spi_transfer {scalar_t__ rx_buf; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct tegra_slink_data*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(
  struct tegra_slink_data *VAR_2, struct spi_transfer *VAR_3)
{
 unsigned VAR_4;
 u32 VAR_5;
 unsigned VAR_6, VAR_7;
 unsigned int VAR_8 = 0;
 unsigned VAR_9;
 u8 *VAR_10 = (u8 *)VAR_3->rx_buf + VAR_2->cur_rx_pos;

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 VAR_4 = FUNC_0(VAR_5);
 if (VAR_2->is_packed) {
  VAR_9 = VAR_2->curr_dma_words * VAR_2->bytes_per_word;
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   u32 VAR_11 = FUNC_1(VAR_2, VAR_0);
   for (VAR_6 = 0; VAR_9 && (VAR_6 < 4); VAR_6++, VAR_9--)
    *VAR_10++ = (VAR_11 >> VAR_6*8) & 0xFF;
  }
  VAR_2->cur_rx_pos += VAR_2->curr_dma_words * VAR_2->bytes_per_word;
  VAR_8 += VAR_2->curr_dma_words;
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   u32 VAR_12 = FUNC_1(VAR_2, VAR_0);
   for (VAR_6 = 0; (VAR_6 < VAR_2->bytes_per_word); VAR_6++)
    *VAR_10++ = (VAR_12 >> (VAR_6*8)) & 0xFF;
  }
  VAR_2->cur_rx_pos += VAR_4 * VAR_2->bytes_per_word;
  VAR_8 += VAR_4;
 }
 return VAR_8;
}
