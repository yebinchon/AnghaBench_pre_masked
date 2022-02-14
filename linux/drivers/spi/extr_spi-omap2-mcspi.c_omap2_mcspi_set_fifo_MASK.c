
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int len; int * tx_buf; int * rx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {struct omap2_mcspi_cs* controller_state; struct spi_master* master; } ;
struct omap2_mcspi_cs {int word_len; } ;
struct omap2_mcspi {int fifo_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct spi_device const*) ;
 int FUNC_2 (struct spi_device const*,int) ;
 int FUNC_3 (struct spi_master*,int ,int) ;
 struct omap2_mcspi* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static void FUNC_5(const struct spi_device *VAR_5,
    struct spi_transfer *VAR_6, int VAR_7)
{
 struct spi_master *VAR_8 = VAR_5->master;
 struct omap2_mcspi_cs *VAR_9 = VAR_5->controller_state;
 struct omap2_mcspi *VAR_10;
 unsigned int VAR_11;
 int VAR_12, VAR_13;
 u32 VAR_14, VAR_15;

 VAR_10 = FUNC_4(VAR_8);

 VAR_14 = FUNC_1(VAR_5);
 if (VAR_7) {
  VAR_13 = FUNC_0(VAR_9->word_len);
  if (VAR_6->len % VAR_13 != 0)
   goto disable_fifo;

  if (VAR_6->rx_buf != ((void*)0) && VAR_6->tx_buf != ((void*)0))
   VAR_12 = VAR_2 / 2;
  else
   VAR_12 = VAR_2;

  VAR_11 = VAR_6->len / VAR_13;
  if (VAR_11 > VAR_3)
   goto disable_fifo;

  VAR_15 = VAR_11 << 16;
  if (VAR_6->rx_buf != ((void*)0)) {
   VAR_14 |= VAR_0;
   VAR_15 |= (VAR_13 - 1) << 8;
  }

  if (VAR_6->tx_buf != ((void*)0)) {
   VAR_14 |= VAR_1;
   VAR_15 |= VAR_13 - 1;
  }

  FUNC_3(VAR_8, VAR_4, VAR_15);
  FUNC_2(VAR_5, VAR_14);
  VAR_10->fifo_depth = VAR_12;

  return;
 }

disable_fifo:
 if (VAR_6->rx_buf != ((void*)0))
  VAR_14 &= ~VAR_0;

 if (VAR_6->tx_buf != ((void*)0))
  VAR_14 &= ~VAR_1;

 FUNC_2(VAR_5, VAR_14);
 VAR_10->fifo_depth = 0;
}
