
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int rx_buf; int tx_buf; } ;
struct spi_device {int master; } ;
struct sirfsoc_spi {int left_tx_word; int left_rx_word; int word_width; scalar_t__ type; scalar_t__ tx_by_cmd; int tx_done; int rx_done; int rx; int tx; } ;


 scalar_t__ FUNC_0 (struct spi_transfer*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 struct sirfsoc_spi* FUNC_2 (int ) ;
 int FUNC_3 (struct spi_device*,struct spi_transfer*) ;
 int FUNC_4 (struct spi_device*,struct spi_transfer*) ;
 int FUNC_5 (struct spi_device*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_1, struct spi_transfer *VAR_2)
{
 struct sirfsoc_spi *VAR_3;

 VAR_3 = FUNC_2(VAR_1->master);
 VAR_3->tx = VAR_2->tx_buf;
 VAR_3->rx = VAR_2->rx_buf;
 VAR_3->left_tx_word = VAR_3->left_rx_word = VAR_2->len / VAR_3->word_width;
 FUNC_1(&VAR_3->rx_done);
 FUNC_1(&VAR_3->tx_done);





 if (VAR_3->type == VAR_0 && VAR_3->tx_by_cmd)
  FUNC_3(VAR_1, VAR_2);
 else if (FUNC_0(VAR_2))
  FUNC_4(VAR_1, VAR_2);
 else
  FUNC_5(VAR_1, VAR_2);

 return VAR_2->len - VAR_3->left_rx_word * VAR_3->word_width;
}
