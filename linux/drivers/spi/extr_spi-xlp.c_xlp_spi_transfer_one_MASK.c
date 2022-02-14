
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_spi_priv {int cmd_cont; int dev; int cs; } ;
struct spi_transfer {int dummy; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dev; int chip_select; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_master*) ;
 struct xlp_spi_priv* FUNC_1 (struct spi_master*) ;
 scalar_t__ FUNC_2 (struct spi_master*,struct spi_transfer*) ;
 scalar_t__ FUNC_3 (struct xlp_spi_priv*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_4(struct spi_master *VAR_1,
     struct spi_device *VAR_2,
     struct spi_transfer *VAR_3)
{
 struct xlp_spi_priv *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = 0;

 VAR_4->cs = VAR_2->chip_select;
 VAR_4->dev = VAR_2->dev;

 if (FUNC_2(VAR_1, VAR_3))
  VAR_4->cmd_cont = 0;
 else
  VAR_4->cmd_cont = 1;

 if (FUNC_3(VAR_4, VAR_3))
  VAR_5 = -VAR_0;

 FUNC_0(VAR_1);
 return VAR_5;
}
