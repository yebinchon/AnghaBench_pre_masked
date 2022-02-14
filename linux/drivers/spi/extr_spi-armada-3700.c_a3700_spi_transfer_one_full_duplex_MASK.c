
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int dummy; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct a3700_spi {int buf_len; int byte_len; int* tx_buf; int rx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct a3700_spi*,int) ;
 int FUNC_1 (struct a3700_spi*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int*,int) ;
 int FUNC_4 (struct spi_master*) ;
 struct a3700_spi* FUNC_5 (struct spi_master*) ;
 int FUNC_6 (struct a3700_spi*,int ) ;
 int FUNC_7 (struct a3700_spi*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct spi_master *VAR_4,
      struct spi_device *VAR_5,
      struct spi_transfer *VAR_6)
{
 struct a3700_spi *VAR_7 = FUNC_5(VAR_4);
 u32 VAR_8;


 FUNC_1(VAR_7, 0);

 while (VAR_7->buf_len) {




  if (VAR_7->buf_len < 4)
   FUNC_0(VAR_7, 1);

  if (VAR_7->byte_len == 1)
   VAR_8 = *VAR_7->tx_buf;
  else
   VAR_8 = *(u32 *)VAR_7->tx_buf;

  FUNC_7(VAR_7, VAR_1, VAR_8);


  while (!(FUNC_6(VAR_7, VAR_2) &
    VAR_3))
   FUNC_2();

  VAR_8 = FUNC_6(VAR_7, VAR_0);

  FUNC_3(VAR_7->rx_buf, &VAR_8, VAR_7->byte_len);

  VAR_7->buf_len -= VAR_7->byte_len;
  VAR_7->tx_buf += VAR_7->byte_len;
  VAR_7->rx_buf += VAR_7->byte_len;

 }

 FUNC_4(VAR_4);

 return 0;
}
