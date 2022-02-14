
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tegra_sflash_data {unsigned int curr_xfer_words; int cur_tx_pos; unsigned int bytes_per_word; } ;
struct spi_transfer {scalar_t__ tx_buf; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tegra_sflash_data*,int ) ;
 int FUNC_1 (struct tegra_sflash_data*,int,int ) ;

__attribute__((used)) static unsigned FUNC_2(
 struct tegra_sflash_data *VAR_4, struct spi_transfer *VAR_5)
{
 unsigned VAR_6;
 u32 VAR_7;
 unsigned VAR_8 = VAR_4->curr_xfer_words;
 u8 *VAR_9 = (u8 *)VAR_5->tx_buf + VAR_4->cur_tx_pos;

 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;
 VAR_6 = VAR_8 * VAR_4->bytes_per_word;

 VAR_7 = FUNC_0(VAR_4, VAR_1);
 while (!(VAR_7 & VAR_2)) {
  int VAR_10;
  u32 VAR_11 = 0;

  for (VAR_10 = 0; VAR_6 && (VAR_10 < VAR_4->bytes_per_word);
       VAR_10++, VAR_6--)
   VAR_11 |= (u32)(*VAR_9++) << (VAR_10 * 8);
  FUNC_1(VAR_4, VAR_11, VAR_3);
  if (!VAR_6)
   break;

  VAR_7 = FUNC_0(VAR_4, VAR_1);
 }
 VAR_4->cur_tx_pos += VAR_8 * VAR_4->bytes_per_word;
 return VAR_8;
}
