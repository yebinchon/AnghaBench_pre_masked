
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {scalar_t__ rx_buf; scalar_t__ tx_buf; int bits_per_word; int len; scalar_t__ speed_hz; } ;
struct spi_master {int dummy; } ;
struct spi_device {int max_speed_hz; } ;
struct spi_clps711x_data {int* tx_buf; int* rx_buf; int syncio; int bpw; int len; int spi_clk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 struct spi_clps711x_data* FUNC_2 (struct spi_master*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct spi_master *VAR_1,
         struct spi_device *VAR_2,
         struct spi_transfer *VAR_3)
{
 struct spi_clps711x_data *VAR_4 = FUNC_2(VAR_1);
 u8 VAR_5;

 FUNC_1(VAR_4->spi_clk, VAR_3->speed_hz ? : VAR_2->max_speed_hz);

 VAR_4->len = VAR_3->len;
 VAR_4->bpw = VAR_3->bits_per_word;
 VAR_4->tx_buf = (u8 *)VAR_3->tx_buf;
 VAR_4->rx_buf = (u8 *)VAR_3->rx_buf;


 VAR_5 = VAR_4->tx_buf ? *VAR_4->tx_buf++ : 0;
 FUNC_3(VAR_5 | FUNC_0(VAR_4->bpw) | VAR_0, VAR_4->syncio);

 return 1;
}
