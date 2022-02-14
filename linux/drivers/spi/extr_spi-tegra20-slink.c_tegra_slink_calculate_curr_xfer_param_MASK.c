
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_slink_data {unsigned int cur_pos; unsigned int bytes_per_word; int is_packed; int words_per_32bit; int max_buf_size; unsigned int curr_dma_words; int packed_size; } ;
struct spi_transfer {unsigned int len; unsigned int bits_per_word; } ;
struct spi_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (struct tegra_slink_data*,struct spi_transfer*) ;

__attribute__((used)) static unsigned FUNC_3(
 struct spi_device *VAR_0, struct tegra_slink_data *VAR_1,
 struct spi_transfer *VAR_2)
{
 unsigned VAR_3 = VAR_2->len - VAR_1->cur_pos;
 unsigned VAR_4;
 unsigned VAR_5;
 unsigned VAR_6;
 unsigned VAR_7;

 VAR_5 = VAR_2->bits_per_word;
 VAR_1->bytes_per_word = FUNC_0(VAR_5, 8);

 if (VAR_5 == 8 || VAR_5 == 16) {
  VAR_1->is_packed = 1;
  VAR_1->words_per_32bit = 32/VAR_5;
 } else {
  VAR_1->is_packed = 0;
  VAR_1->words_per_32bit = 1;
 }
 VAR_1->packed_size = FUNC_2(VAR_1, VAR_2);

 if (VAR_1->is_packed) {
  VAR_6 = FUNC_1(VAR_3, VAR_1->max_buf_size);
  VAR_1->curr_dma_words = VAR_6/VAR_1->bytes_per_word;
  VAR_7 = VAR_6/4;
 } else {
  VAR_4 = (VAR_3 - 1) / VAR_1->bytes_per_word + 1;
  VAR_4 = FUNC_1(VAR_4, VAR_1->max_buf_size/4);
  VAR_1->curr_dma_words = VAR_4;
  VAR_7 = VAR_4;
 }
 return VAR_7;
}
