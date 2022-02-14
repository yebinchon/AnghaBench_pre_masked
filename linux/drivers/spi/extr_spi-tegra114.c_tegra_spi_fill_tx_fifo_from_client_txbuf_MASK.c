
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct tegra_spi_data {int cur_tx_pos; unsigned int words_per_32bit; unsigned int curr_dma_words; unsigned int bytes_per_word; unsigned int cur_pos; scalar_t__ is_packed; } ;
struct spi_transfer {unsigned int len; scalar_t__ tx_buf; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (struct tegra_spi_data*,int ) ;
 int FUNC_4 (struct tegra_spi_data*,unsigned int,int ) ;

__attribute__((used)) static unsigned FUNC_5(
 struct tegra_spi_data *VAR_2, struct spi_transfer *VAR_3)
{
 unsigned VAR_4;
 unsigned VAR_5;
 u32 VAR_6;
 unsigned VAR_7;
 unsigned VAR_8, VAR_9;
 unsigned int VAR_10;
 unsigned VAR_11;
 u8 *VAR_12 = (u8 *)VAR_3->tx_buf + VAR_2->cur_tx_pos;

 VAR_6 = FUNC_3(VAR_2, VAR_0);
 VAR_5 = FUNC_1(VAR_6);

 if (VAR_2->is_packed) {
  VAR_11 = VAR_5 * VAR_2->words_per_32bit;
  VAR_10 = FUNC_2(VAR_11, VAR_2->curr_dma_words);
  VAR_4 = VAR_10 * VAR_2->bytes_per_word;
  VAR_7 = FUNC_0(VAR_4, 4);
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   u32 VAR_13 = 0;

   for (VAR_8 = 0; (VAR_8 < 4) && VAR_4; VAR_8++, VAR_4--)
    VAR_13 |= (u32)(*VAR_12++) << (VAR_8 * 8);
   FUNC_4(VAR_2, VAR_13, VAR_1);
  }

  VAR_2->cur_tx_pos += VAR_10 * VAR_2->bytes_per_word;
 } else {
  unsigned int VAR_14;
  VAR_7 = FUNC_2(VAR_2->curr_dma_words, VAR_5);
  VAR_10 = VAR_7;
  VAR_4 = VAR_10 * VAR_2->bytes_per_word;
  if (VAR_4 > VAR_3->len - VAR_2->cur_pos)
   VAR_4 = VAR_3->len - VAR_2->cur_pos;
  VAR_14 = VAR_4;
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   u32 VAR_15 = 0;

   for (VAR_8 = 0; VAR_4 && (VAR_8 < VAR_2->bytes_per_word);
       VAR_8++, VAR_4--)
    VAR_15 |= (u32)(*VAR_12++) << (VAR_8 * 8);
   FUNC_4(VAR_2, VAR_15, VAR_1);
  }

  VAR_2->cur_tx_pos += VAR_14;
 }

 return VAR_10;
}
