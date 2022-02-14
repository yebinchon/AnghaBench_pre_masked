
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tegra_sflash_data {int cur_rx_pos; int bytes_per_word; } ;
struct spi_transfer {scalar_t__ rx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_sflash_data*,int ) ;

__attribute__((used)) static int FUNC_1(
  struct tegra_sflash_data *VAR_3, struct spi_transfer *VAR_4)
{
 u32 VAR_5;
 unsigned int VAR_6 = 0;
 u8 *VAR_7 = (u8 *)VAR_4->rx_buf + VAR_3->cur_rx_pos;

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 while (!(VAR_5 & VAR_0)) {
  int VAR_8;
  u32 VAR_9 = FUNC_0(VAR_3, VAR_1);

  for (VAR_8 = 0; (VAR_8 < VAR_3->bytes_per_word); VAR_8++)
   *VAR_7++ = (VAR_9 >> (VAR_8*8)) & 0xFF;
  VAR_6++;
  VAR_5 = FUNC_0(VAR_3, VAR_2);
 }
 VAR_3->cur_rx_pos += VAR_6 * VAR_3->bytes_per_word;
 return 0;
}
