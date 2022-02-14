
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int bits_per_word; int * rx_buf; int tx_buf; } ;
struct spi_device {int master; } ;
struct efm32_spi_ddata {int tx_len; int rx_len; int lock; int * rx_buf; int tx_buf; int done; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct efm32_spi_ddata*) ;
 int FUNC_2 (struct efm32_spi_ddata*,int,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 struct efm32_spi_ddata* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_4, struct spi_transfer *VAR_5)
{
 struct efm32_spi_ddata *VAR_6 = FUNC_5(VAR_4->master);
 int VAR_7 = -VAR_0;

 FUNC_6(&VAR_6->lock);

 if (VAR_6->tx_buf || VAR_6->rx_buf)
  goto out_unlock;

 VAR_6->tx_buf = VAR_5->tx_buf;
 VAR_6->rx_buf = VAR_5->rx_buf;
 VAR_6->tx_len = VAR_6->rx_len =
  VAR_5->len * FUNC_0(VAR_5->bits_per_word, 8);

 FUNC_1(VAR_6);

 FUNC_4(&VAR_6->done);

 FUNC_2(VAR_6, VAR_3 | VAR_2, VAR_1);

 FUNC_7(&VAR_6->lock);

 FUNC_8(&VAR_6->done);

 FUNC_6(&VAR_6->lock);

 VAR_7 = VAR_5->len - FUNC_3(VAR_6->tx_len, VAR_6->rx_len);

 FUNC_2(VAR_6, 0, VAR_1);
 VAR_6->tx_buf = *(VAR_6->rx_buf = ((void*)0));

out_unlock:
 FUNC_7(&VAR_6->lock);

 return VAR_7;
}
