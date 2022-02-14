
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {unsigned long speed_hz; unsigned long len; scalar_t__ rx_buf; int tx_buf; } ;
struct spi_device {size_t chip_select; int mode; } ;
struct spi_controller {scalar_t__ can_dma; } ;
struct bcm2835_spi {unsigned long tx_len; unsigned long rx_len; scalar_t__ rx_buf; int tx_buf; int clk; int * prepare_cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct spi_controller*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_2 (struct spi_controller*,struct spi_device*,struct spi_transfer*,int ) ;
 int FUNC_3 (struct spi_controller*,struct spi_device*,struct spi_transfer*,int ,int) ;
 int FUNC_4 (struct spi_controller*,struct spi_device*,struct spi_transfer*,int ) ;
 int FUNC_5 (struct bcm2835_spi*,int ,unsigned long) ;
 unsigned long FUNC_6 (int ) ;
 int VAR_3 ;
 struct bcm2835_spi* FUNC_7 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_8(struct spi_controller *VAR_4,
        struct spi_device *VAR_5,
        struct spi_transfer *VAR_6)
{
 struct bcm2835_spi *VAR_7 = FUNC_7(VAR_4);
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;
 u32 VAR_14 = VAR_7->prepare_cs[VAR_5->chip_select];


 VAR_8 = VAR_6->speed_hz;
 VAR_9 = FUNC_6(VAR_7->clk);

 if (VAR_8 >= VAR_9 / 2) {
  VAR_10 = 2;
 } else if (VAR_8) {

  VAR_10 = FUNC_0(VAR_9, VAR_8);
  VAR_10 += (VAR_10 % 2);

  if (VAR_10 >= 65536)
   VAR_10 = 0;
 } else {
  VAR_10 = 0;
 }
 VAR_11 = VAR_10 ? (VAR_9 / VAR_10) : (VAR_9 / 65536);
 FUNC_5(VAR_7, VAR_0, VAR_10);


 if (VAR_5->mode & VAR_2 && VAR_6->rx_buf)
  VAR_14 |= VAR_1;


 VAR_7->tx_buf = VAR_6->tx_buf;
 VAR_7->rx_buf = VAR_6->rx_buf;
 VAR_7->tx_len = VAR_6->len;
 VAR_7->rx_len = VAR_6->len;







 VAR_12 = VAR_3 ? (9 * 1000000) / VAR_3 : 0;
 VAR_13 = VAR_12 ? VAR_11 / VAR_12 : 1;


 if (VAR_6->len < VAR_13)
  return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_14);





 if (VAR_4->can_dma && FUNC_1(VAR_4, VAR_5, VAR_6))
  return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_14);


 return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_14, 1);
}
