
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; scalar_t__ tx_buf; scalar_t__ rx_buf; } ;
struct spi_device {int dummy; } ;
struct lantiq_ssc_spi {int tx_todo; int rx_todo; int lock; scalar_t__ tx; scalar_t__ rx; } ;


 int FUNC_0 (struct lantiq_ssc_spi*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct lantiq_ssc_spi*) ;

__attribute__((used)) static int FUNC_4(struct lantiq_ssc_spi *VAR_0, struct spi_device *VAR_1,
     struct spi_transfer *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);

 VAR_0->tx = VAR_2->tx_buf;
 VAR_0->rx = VAR_2->rx_buf;

 if (VAR_2->tx_buf) {
  VAR_0->tx_todo = VAR_2->len;


  FUNC_3(VAR_0);
 }

 if (VAR_0->rx) {
  VAR_0->rx_todo = VAR_2->len;


  if (!VAR_0->tx)
   FUNC_0(VAR_0);
 }

 FUNC_2(&VAR_0->lock, VAR_3);

 return VAR_2->len;
}
