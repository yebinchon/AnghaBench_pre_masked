
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int rx_buf; int tx_buf; int speed_hz; } ;
struct spi_device {int master; } ;
struct a3700_spi {int buf_len; int rx_buf; int tx_buf; } ;


 int FUNC_0 (struct a3700_spi*,int) ;
 int FUNC_1 (struct a3700_spi*,int ) ;
 struct a3700_spi* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_0,
         struct spi_transfer *VAR_1)
{
 struct a3700_spi *VAR_2;

 VAR_2 = FUNC_2(VAR_0->master);

 FUNC_1(VAR_2, VAR_1->speed_hz);




 FUNC_0(VAR_2, 4);


 VAR_2->tx_buf = VAR_1->tx_buf;
 VAR_2->rx_buf = VAR_1->rx_buf;
 VAR_2->buf_len = VAR_1->len;
}
