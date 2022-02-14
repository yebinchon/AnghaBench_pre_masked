
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sflash_data {unsigned int cur_pos; unsigned int bytes_per_word; unsigned int curr_xfer_words; } ;
struct spi_transfer {unsigned int len; int bits_per_word; } ;
struct spi_device {int dummy; } ;


 unsigned int FUNC_0 (int ,int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned FUNC_1(
 struct spi_device *VAR_1, struct tegra_sflash_data *VAR_2,
 struct spi_transfer *VAR_3)
{
 unsigned VAR_4 = VAR_3->len - VAR_2->cur_pos;
 unsigned VAR_5;

 VAR_2->bytes_per_word = FUNC_0(VAR_3->bits_per_word, 8);
 VAR_5 = VAR_4 / VAR_2->bytes_per_word;
 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;
 VAR_2->curr_xfer_words = VAR_5;
 return VAR_5;
}
