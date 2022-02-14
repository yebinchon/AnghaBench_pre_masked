
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct tegra_slink_data {unsigned int curr_dma_words; unsigned int bytes_per_word; unsigned int* tx_dma_buf; int cur_pos; int cur_tx_pos; int dma_buf_size; int tx_dma_phys; int dev; scalar_t__ is_packed; } ;
struct spi_transfer {scalar_t__ tx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (unsigned int*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_3(
  struct tegra_slink_data *VAR_1, struct spi_transfer *VAR_2)
{

 FUNC_0(VAR_1->dev, VAR_1->tx_dma_phys,
    VAR_1->dma_buf_size, VAR_0);

 if (VAR_1->is_packed) {
  unsigned VAR_3 = VAR_1->curr_dma_words * VAR_1->bytes_per_word;
  FUNC_2(VAR_1->tx_dma_buf, VAR_2->tx_buf + VAR_1->cur_pos, VAR_3);
 } else {
  unsigned int VAR_4;
  unsigned int VAR_5;
  u8 *VAR_6 = (u8 *)VAR_2->tx_buf + VAR_1->cur_tx_pos;
  unsigned VAR_7 = VAR_1->curr_dma_words * VAR_1->bytes_per_word;

  for (VAR_5 = 0; VAR_5 < VAR_1->curr_dma_words; VAR_5++) {
   u32 VAR_8 = 0;
   for (VAR_4 = 0; VAR_7 && (VAR_4 < VAR_1->bytes_per_word);
       VAR_4++, VAR_7--)
    VAR_8 |= (u32)(*VAR_6++) << (VAR_4 * 8);
   VAR_1->tx_dma_buf[VAR_5] = VAR_8;
  }
 }
 VAR_1->cur_tx_pos += VAR_1->curr_dma_words * VAR_1->bytes_per_word;


 FUNC_1(VAR_1->dev, VAR_1->tx_dma_phys,
    VAR_1->dma_buf_size, VAR_0);
}
