
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_transfer {int len; int rx_buf; int tx_buf; int cs_change; int bits_per_word; int speed_hz; } ;
struct spi_master {int dummy; } ;
struct spi_device {int mode; } ;
struct dln2_spi {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct dln2_spi*,int ,int ,int ,int ) ;
 int FUNC_2 (struct dln2_spi*,int ,int ,int ) ;
 struct dln2_spi* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (struct spi_master*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_1,
     struct spi_device *VAR_2,
     struct spi_transfer *VAR_3)
{
 struct dln2_spi *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;
 u8 VAR_6 = 0;

 VAR_5 = FUNC_2(VAR_4, VAR_3->speed_hz,
      VAR_3->bits_per_word,
      VAR_2->mode);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->pdev->dev, "Cannot setup transfer\n");
  return VAR_5;
 }

 if (!VAR_3->cs_change && !FUNC_4(VAR_1, VAR_3))
  VAR_6 = VAR_0;

 VAR_5 = FUNC_1(VAR_4, VAR_3->tx_buf, VAR_3->rx_buf,
          VAR_3->len, VAR_6);
 if (VAR_5 < 0)
  FUNC_0(&VAR_4->pdev->dev, "write/read failed!\n");

 return VAR_5;
}
