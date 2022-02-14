
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_spi_data {unsigned int curr_dma_words; unsigned int bytes_per_word; int cur_rx_pos; int* rx_dma_buf; unsigned int cur_pos; int dma_buf_size; int rx_dma_phys; int dev; scalar_t__ is_packed; } ;
struct spi_transfer {unsigned char* rx_buf; int bits_per_word; unsigned int len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (unsigned char*,int*,unsigned int) ;

__attribute__((used)) static void FUNC_3(
  struct tegra_spi_data *VAR_1, struct spi_transfer *VAR_2)
{

 FUNC_0(VAR_1->dev, VAR_1->rx_dma_phys,
  VAR_1->dma_buf_size, VAR_0);

 if (VAR_1->is_packed) {
  unsigned VAR_3 = VAR_1->curr_dma_words * VAR_1->bytes_per_word;

  FUNC_2(VAR_2->rx_buf + VAR_1->cur_rx_pos, VAR_1->rx_dma_buf, VAR_3);
  VAR_1->cur_rx_pos += VAR_1->curr_dma_words * VAR_1->bytes_per_word;
 } else {
  unsigned int VAR_4;
  unsigned int VAR_5;
  unsigned char *VAR_6 = VAR_2->rx_buf + VAR_1->cur_rx_pos;
  u32 VAR_7 = ((u32)1 << VAR_2->bits_per_word) - 1;
  unsigned VAR_8 = VAR_1->curr_dma_words * VAR_1->bytes_per_word;
  unsigned int VAR_9;

  if (VAR_8 > VAR_2->len - VAR_1->cur_pos)
   VAR_8 = VAR_2->len - VAR_1->cur_pos;
  VAR_9 = VAR_8;
  for (VAR_5 = 0; VAR_5 < VAR_1->curr_dma_words; VAR_5++) {
   u32 VAR_10 = VAR_1->rx_dma_buf[VAR_5] & VAR_7;

   for (VAR_4 = 0; VAR_8 && (VAR_4 < VAR_1->bytes_per_word);
       VAR_4++, VAR_8--)
    *VAR_6++ = (VAR_10 >> (VAR_4*8)) & 0xFF;
  }

  VAR_1->cur_rx_pos += VAR_9;
 }


 FUNC_1(VAR_1->dev, VAR_1->rx_dma_phys,
  VAR_1->dma_buf_size, VAR_0);
}
