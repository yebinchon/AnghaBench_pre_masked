
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * sgl; } ;
struct TYPE_3__ {int * sgl; } ;
struct spi_transfer {void* rx_dma; void* tx_dma; TYPE_2__ rx_sg; scalar_t__ rx_buf; TYPE_1__ tx_sg; scalar_t__ tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct mtk_spi {int * rx_sgl; void* rx_sgl_len; int * tx_sgl; void* tx_sgl_len; scalar_t__ base; scalar_t__ num_xfered; struct spi_transfer* cur_transfer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spi_master*) ;
 int FUNC_1 (struct spi_master*,struct spi_transfer*) ;
 int FUNC_2 (struct spi_master*,struct spi_transfer*) ;
 int FUNC_3 (struct spi_master*) ;
 int FUNC_4 (struct spi_master*) ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 struct mtk_spi* FUNC_8 (struct spi_master*) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct spi_master *VAR_3,
    struct spi_device *VAR_4,
    struct spi_transfer *VAR_5)
{
 int VAR_6;
 struct mtk_spi *VAR_7 = FUNC_8(VAR_3);

 VAR_7->tx_sgl = ((void*)0);
 VAR_7->rx_sgl = ((void*)0);
 VAR_7->tx_sgl_len = 0;
 VAR_7->rx_sgl_len = 0;
 VAR_7->cur_transfer = VAR_5;
 VAR_7->num_xfered = 0;

 FUNC_1(VAR_3, VAR_5);

 VAR_6 = FUNC_5(VAR_7->base + VAR_0);
 if (VAR_5->tx_buf)
  VAR_6 |= VAR_2;
 if (VAR_5->rx_buf)
  VAR_6 |= VAR_1;
 FUNC_9(VAR_6, VAR_7->base + VAR_0);

 if (VAR_5->tx_buf)
  VAR_7->tx_sgl = VAR_5->tx_sg.sgl;
 if (VAR_5->rx_buf)
  VAR_7->rx_sgl = VAR_5->rx_sg.sgl;

 if (VAR_7->tx_sgl) {
  VAR_5->tx_dma = FUNC_6(VAR_7->tx_sgl);
  VAR_7->tx_sgl_len = FUNC_7(VAR_7->tx_sgl);
 }
 if (VAR_7->rx_sgl) {
  VAR_5->rx_dma = FUNC_6(VAR_7->rx_sgl);
  VAR_7->rx_sgl_len = FUNC_7(VAR_7->rx_sgl);
 }

 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 FUNC_2(VAR_3, VAR_5);
 FUNC_0(VAR_3);

 return 1;
}
