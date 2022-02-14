
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_spi_priv {int is_save_param; scalar_t__ mode; scalar_t__ bits_per_word; scalar_t__ speed_hz; scalar_t__ base; int rx_bytes; int tx_bytes; int rx_buf; int tx_buf; scalar_t__ error; } ;
struct spi_transfer {scalar_t__ bits_per_word; scalar_t__ speed_hz; int len; int rx_buf; int tx_buf; } ;
struct spi_device {scalar_t__ mode; int master; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct uniphier_spi_priv* FUNC_0 (int ) ;
 int FUNC_1 (struct spi_device*,scalar_t__) ;
 int FUNC_2 (struct spi_device*) ;
 int FUNC_3 (struct spi_device*,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct spi_device *VAR_3,
           struct spi_transfer *VAR_4)
{
 struct uniphier_spi_priv *VAR_5 = FUNC_0(VAR_3->master);
 u32 VAR_6;

 VAR_5->error = 0;
 VAR_5->tx_buf = VAR_4->tx_buf;
 VAR_5->rx_buf = VAR_4->rx_buf;
 VAR_5->tx_bytes = VAR_5->rx_bytes = VAR_4->len;

 if (!VAR_5->is_save_param || VAR_5->mode != VAR_3->mode) {
  FUNC_2(VAR_3);
  VAR_5->mode = VAR_3->mode;
  VAR_5->is_save_param = 0;
 }

 if (!VAR_5->is_save_param || VAR_5->bits_per_word != VAR_4->bits_per_word) {
  FUNC_3(VAR_3, VAR_4->bits_per_word);
  VAR_5->bits_per_word = VAR_4->bits_per_word;
 }

 if (!VAR_5->is_save_param || VAR_5->speed_hz != VAR_4->speed_hz) {
  FUNC_1(VAR_3, VAR_4->speed_hz);
  VAR_5->speed_hz = VAR_4->speed_hz;
 }

 VAR_5->is_save_param = 1;


 VAR_6 = VAR_2 | VAR_1;
 FUNC_4(VAR_6, VAR_5->base + VAR_0);
}
