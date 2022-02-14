
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {unsigned long speed_hz; unsigned long len; int rx_buf; int tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct bcm2835aux_spi {unsigned long* cntl; unsigned long tx_len; unsigned long rx_len; scalar_t__ pending; int rx_buf; int tx_buf; int clk; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_2 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 unsigned long FUNC_3 (int ) ;
 int VAR_3 ;
 struct bcm2835aux_spi* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_4,
           struct spi_device *VAR_5,
           struct spi_transfer *VAR_6)
{
 struct bcm2835aux_spi *VAR_7 = FUNC_4(VAR_4);
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;
 VAR_8 = VAR_6->speed_hz;
 VAR_9 = FUNC_3(VAR_7->clk);

 if (VAR_8 >= VAR_9 / 2) {
  VAR_10 = 0;
 } else if (VAR_8) {
  VAR_10 = FUNC_0(VAR_9, 2 * VAR_8) - 1;
  if (VAR_10 > VAR_1)
   VAR_10 = VAR_1;
 } else {
  VAR_10 = VAR_1;
 }

 VAR_7->cntl[0] &= ~(VAR_0);

 VAR_7->cntl[0] |= VAR_10 << VAR_2;

 VAR_11 = VAR_9 / (2 * (VAR_10 + 1));


 VAR_7->tx_buf = VAR_6->tx_buf;
 VAR_7->rx_buf = VAR_6->rx_buf;
 VAR_7->tx_len = VAR_6->len;
 VAR_7->rx_len = VAR_6->len;
 VAR_7->pending = 0;
 VAR_12 = VAR_3 ? (9 * 1000000) / VAR_3 : 0;
 VAR_13 = VAR_12 ? VAR_11 / VAR_12 : 1;


 if (VAR_6->len < VAR_13)
  return FUNC_2(VAR_4, VAR_5, VAR_6);


 return FUNC_1(VAR_4, VAR_5, VAR_6);
}
