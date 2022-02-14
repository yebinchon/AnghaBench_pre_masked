
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; scalar_t__ rx_buf; int tx_buf; int speed_hz; } ;
struct spi_master {int dummy; } ;
struct spi_device {int mode; } ;
struct mxic_spi {scalar_t__ regs; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct mxic_spi*,int ,scalar_t__,int ) ;
 int FUNC_5 (struct mxic_spi*,int ) ;
 int FUNC_6 (struct spi_master*) ;
 struct mxic_spi* FUNC_7 (struct spi_master*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct spi_master *VAR_9,
     struct spi_device *VAR_10,
     struct spi_transfer *VAR_11)
{
 struct mxic_spi *VAR_12 = FUNC_7(VAR_9);
 unsigned int VAR_13 = VAR_1;
 int VAR_14;

 if (VAR_11->rx_buf && VAR_11->tx_buf) {
  if (((VAR_10->mode & VAR_8) &&
       !(VAR_10->mode & VAR_6)) ||
      ((VAR_10->mode & VAR_7) &&
       !(VAR_10->mode & VAR_5)))
   return -VAR_0;
 }

 VAR_14 = FUNC_5(VAR_12, VAR_11->speed_hz);
 if (VAR_14)
  return VAR_14;

 if (VAR_11->tx_buf) {
  if (VAR_10->mode & VAR_8)
   VAR_13 = VAR_3;
  else if (VAR_10->mode & VAR_7)
   VAR_13 = VAR_2;
 } else if (VAR_11->rx_buf) {
  if (VAR_10->mode & VAR_6)
   VAR_13 = VAR_3;
  else if (VAR_10->mode & VAR_5)
   VAR_13 = VAR_2;
 }

 FUNC_8(FUNC_1(1) | FUNC_0(VAR_13) |
        FUNC_2(VAR_13) | (VAR_11->rx_buf ? VAR_4 : 0),
        VAR_12->regs + FUNC_3(0));

 VAR_14 = FUNC_4(VAR_12, VAR_11->tx_buf, VAR_11->rx_buf, VAR_11->len);
 if (VAR_14)
  return VAR_14;

 FUNC_6(VAR_9);

 return 0;
}
