
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {unsigned int len; int * rx_buf; int * tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_lp8841_rtc {int iomem; int state; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spi_lp8841_rtc*,int,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct spi_master*) ;
 struct spi_lp8841_rtc* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct spi_master *VAR_4,
       struct spi_device *VAR_5,
       struct spi_transfer *VAR_6)
{
 struct spi_lp8841_rtc *VAR_7 = FUNC_3(VAR_4);
 unsigned VAR_8 = VAR_6->len;
 const u8 *VAR_9 = VAR_6->tx_buf;
 u8 *VAR_10 = VAR_6->rx_buf;
 u8 VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_9) {
  VAR_7->state &= ~VAR_1;
  FUNC_4(VAR_7->state, VAR_7->iomem);
  while (FUNC_1(VAR_8 > 0)) {
   VAR_11 = *VAR_9++;
   FUNC_0(VAR_7, 1, 0,
     VAR_2, VAR_11, 8);
   VAR_8--;
  }
 } else if (VAR_10) {
  VAR_7->state |= VAR_1;
  FUNC_4(VAR_7->state, VAR_7->iomem);
  while (FUNC_1(VAR_8 > 0)) {
   VAR_11 = FUNC_0(VAR_7, 1, 0,
     VAR_3, VAR_11, 8);
   *VAR_10++ = VAR_11;
   VAR_8--;
  }
 } else {
  VAR_12 = -VAR_0;
 }

 FUNC_2(VAR_4);

 return VAR_12;
}
