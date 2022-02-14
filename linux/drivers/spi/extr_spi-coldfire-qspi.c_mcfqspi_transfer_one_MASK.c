
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_transfer {int bits_per_word; int len; int rx_buf; int tx_buf; int speed_hz; } ;
struct spi_master {int dummy; } ;
struct spi_device {int mode; } ;
struct mcfqspi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mcfqspi*,int,int ,int ) ;
 int FUNC_2 (struct mcfqspi*,int,int ,int ) ;
 int FUNC_3 (struct mcfqspi*,int ) ;
 int FUNC_4 (struct mcfqspi*,int) ;
 struct mcfqspi* FUNC_5 (struct spi_master*) ;

__attribute__((used)) static int FUNC_6(struct spi_master *VAR_6,
    struct spi_device *VAR_7,
    struct spi_transfer *VAR_8)
{
 struct mcfqspi *VAR_9 = FUNC_5(VAR_6);
 u16 VAR_10 = VAR_3;

 VAR_10 |= VAR_8->bits_per_word << 10;
 if (VAR_7->mode & VAR_4)
  VAR_10 |= VAR_1;
 if (VAR_7->mode & VAR_5)
  VAR_10 |= VAR_2;
 VAR_10 |= FUNC_0(VAR_8->speed_hz);
 FUNC_4(VAR_9, VAR_10);

 FUNC_3(VAR_9, VAR_0);
 if (VAR_8->bits_per_word == 8)
  FUNC_2(VAR_9, VAR_8->len, VAR_8->tx_buf, VAR_8->rx_buf);
 else
  FUNC_1(VAR_9, VAR_8->len / 2, VAR_8->tx_buf,
           VAR_8->rx_buf);
 FUNC_3(VAR_9, 0);

 return 0;
}
