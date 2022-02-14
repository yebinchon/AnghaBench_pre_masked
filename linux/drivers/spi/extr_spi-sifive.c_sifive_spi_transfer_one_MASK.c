
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {unsigned int len; int * rx_buf; int * tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct sifive_spi {int fifo_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct sifive_spi*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_2 (struct sifive_spi*,int ) ;
 int FUNC_3 (struct sifive_spi*,int ) ;
 int FUNC_4 (struct sifive_spi*,int ,int) ;
 int FUNC_5 (struct sifive_spi*,int ,unsigned int) ;
 struct sifive_spi* FUNC_6 (struct spi_master*) ;

__attribute__((used)) static int
FUNC_7(struct spi_master *VAR_3, struct spi_device *VAR_4,
   struct spi_transfer *VAR_5)
{
 struct sifive_spi *VAR_6 = FUNC_6(VAR_3);
 int VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_5);
 const u8 *VAR_8 = VAR_5->tx_buf;
 u8 *VAR_9 = VAR_5->rx_buf;
 unsigned int VAR_10 = VAR_5->len;

 while (VAR_10) {
  unsigned int VAR_11 = FUNC_0(VAR_10, VAR_6->fifo_depth);
  unsigned int VAR_12;


  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
   FUNC_3(VAR_6, VAR_8++);

  if (VAR_9) {

   FUNC_5(VAR_6, VAR_2,
      VAR_11 - 1);
   FUNC_4(VAR_6, VAR_0, VAR_7);


   for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
    FUNC_2(VAR_6, VAR_9++);
  } else {

   FUNC_4(VAR_6, VAR_1, VAR_7);
  }

  VAR_10 -= VAR_11;
 }

 return 0;
}
