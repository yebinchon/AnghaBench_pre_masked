
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; scalar_t__ tx_buf; scalar_t__ rx_buf; } ;
struct spi_device {int dummy; } ;
struct spi_controller {int dummy; } ;
struct mtk_spi_slave {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int*,scalar_t__,int) ;
 int FUNC_2 (struct mtk_spi_slave*) ;
 int FUNC_3 (struct mtk_spi_slave*) ;
 int FUNC_4 (scalar_t__) ;
 struct mtk_spi_slave* FUNC_5 (struct spi_controller*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct spi_controller *VAR_6,
           struct spi_device *VAR_7,
           struct spi_transfer *VAR_8)
{
 struct mtk_spi_slave *VAR_9 = FUNC_5(VAR_6);
 int VAR_10, VAR_11, VAR_12, VAR_13;

 FUNC_6(VAR_2, VAR_9->base + VAR_3);

 VAR_10 = FUNC_4(VAR_9->base + VAR_0);
 if (VAR_8->rx_buf)
  VAR_10 |= VAR_1;
 if (VAR_8->tx_buf)
  VAR_10 |= VAR_5;
 FUNC_6(VAR_10, VAR_9->base + VAR_0);

 VAR_11 = VAR_8->len / 4;
 if (VAR_8->tx_buf)
  FUNC_0(VAR_9->base + VAR_4,
         VAR_8->tx_buf, VAR_11);

 VAR_12 = VAR_8->len % 4;
 if (VAR_8->tx_buf && VAR_12 > 0) {
  VAR_10 = 0;
  FUNC_1(&VAR_10, VAR_8->tx_buf + VAR_11 * 4, VAR_12);
  FUNC_6(VAR_10, VAR_9->base + VAR_4);
 }

 VAR_13 = FUNC_3(VAR_9);
 if (VAR_13) {
  FUNC_2(VAR_9);
  FUNC_6(VAR_2, VAR_9->base + VAR_3);
 }

 return VAR_13;
}
