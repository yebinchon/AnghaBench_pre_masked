
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_qup {int n_words; int in_fifo_sz; scalar_t__ mode; int done; int dev; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {struct spi_master* master; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct spi_qup* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (struct spi_device*,struct spi_transfer*) ;
 int FUNC_3 (struct spi_qup*,int ) ;
 int FUNC_4 (struct spi_qup*) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_5, struct spi_transfer *VAR_6,
     unsigned long VAR_7)
{
 struct spi_master *VAR_8 = VAR_5->master;
 struct spi_qup *VAR_9 = FUNC_1(VAR_8);
 int VAR_10, VAR_11, VAR_12, VAR_13 = 0;

 VAR_11 = VAR_9->n_words;
 VAR_12 = VAR_11 / VAR_4;
 VAR_9->rx_buf = VAR_6->rx_buf;
 VAR_9->tx_buf = VAR_6->tx_buf;

 do {
  if (VAR_12)
   VAR_9->n_words = VAR_4;
  else
   VAR_9->n_words = VAR_11 % VAR_4;

  if (VAR_9->tx_buf && VAR_13)
   VAR_9->tx_buf = VAR_6->tx_buf + VAR_13 * VAR_4;

  if (VAR_9->rx_buf && VAR_13)
   VAR_9->rx_buf = VAR_6->rx_buf + VAR_13 * VAR_4;





  if (VAR_9->n_words <= (VAR_9->in_fifo_sz / sizeof(u32)))
   VAR_9->mode = VAR_1;

  VAR_10 = FUNC_2(VAR_5, VAR_6);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_3(VAR_9, VAR_3);
  if (VAR_10) {
   FUNC_0(VAR_9->dev, "cannot set RUN state\n");
   return VAR_10;
  }

  VAR_10 = FUNC_3(VAR_9, VAR_2);
  if (VAR_10) {
   FUNC_0(VAR_9->dev, "cannot set PAUSE state\n");
   return VAR_10;
  }

  if (VAR_9->mode == VAR_1)
   FUNC_4(VAR_9);

  VAR_10 = FUNC_3(VAR_9, VAR_3);
  if (VAR_10) {
   FUNC_0(VAR_9->dev, "cannot set RUN state\n");
   return VAR_10;
  }

  if (!FUNC_5(&VAR_9->done, VAR_7))
   return -VAR_0;

  VAR_13++;
 } while (VAR_12--);

 return 0;
}
