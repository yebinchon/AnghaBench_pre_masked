
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ bits_per_word; scalar_t__ speed_hz; int len; int rx_buf; int tx_buf; } ;
struct spi_device {scalar_t__ mode; int master; } ;
struct npcm_pspi {int is_save_param; scalar_t__ mode; scalar_t__ bits_per_word; scalar_t__ speed_hz; int rx_bytes; int tx_bytes; int rx_buf; int tx_buf; } ;


 int FUNC_0 (struct npcm_pspi*,scalar_t__) ;
 int FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct npcm_pspi*,scalar_t__) ;
 struct npcm_pspi* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_0,
         struct spi_transfer *VAR_1)
{
 struct npcm_pspi *VAR_2 = FUNC_3(VAR_0->master);

 VAR_2->tx_buf = VAR_1->tx_buf;
 VAR_2->rx_buf = VAR_1->rx_buf;
 VAR_2->tx_bytes = VAR_1->len;
 VAR_2->rx_bytes = VAR_1->len;

 if (!VAR_2->is_save_param || VAR_2->mode != VAR_0->mode) {
  FUNC_1(VAR_0);
  VAR_2->mode = VAR_0->mode;
 }

 if (!VAR_2->is_save_param || VAR_2->bits_per_word != VAR_1->bits_per_word) {
  FUNC_2(VAR_2, VAR_1->bits_per_word);
  VAR_2->bits_per_word = VAR_1->bits_per_word;
 }

 if (!VAR_2->is_save_param || VAR_2->speed_hz != VAR_1->speed_hz) {
  FUNC_0(VAR_2, VAR_1->speed_hz);
  VAR_2->speed_hz = VAR_1->speed_hz;
 }

 if (!VAR_2->is_save_param)
  VAR_2->is_save_param = 1;
}
