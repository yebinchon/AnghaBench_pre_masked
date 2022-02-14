
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_transfer {int len; scalar_t__ tx_nbits; int * rx_buf; int * tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int chip_select; } ;
struct rb4xx_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rb4xx_spi*,int ,int const) ;
 int FUNC_1 (struct rb4xx_spi*,int ,int const) ;
 int FUNC_2 (struct rb4xx_spi*,int ) ;
 int FUNC_3 (struct spi_master*) ;
 struct rb4xx_spi* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_4,
         struct spi_device *VAR_5, struct spi_transfer *VAR_6)
{
 struct rb4xx_spi *VAR_7 = FUNC_4(VAR_4);
 int VAR_8;
 u32 VAR_9;
 u8 *VAR_10;
 const u8 *VAR_11;







 if (VAR_5->chip_select == 2)

  VAR_9 = VAR_0;
 else

  VAR_9 = VAR_1;

 VAR_11 = VAR_6->tx_buf;
 VAR_10 = VAR_6->rx_buf;
 for (VAR_8 = 0; VAR_8 < VAR_6->len; ++VAR_8) {
  if (VAR_6->tx_nbits == VAR_3)

   FUNC_1(VAR_7, VAR_9, VAR_11[VAR_8]);
  else
   FUNC_0(VAR_7, VAR_9, VAR_11[VAR_8]);
  if (!VAR_10)
   continue;
  VAR_10[VAR_8] = FUNC_2(VAR_7, VAR_2);
 }
 FUNC_3(VAR_4);

 return 0;
}
