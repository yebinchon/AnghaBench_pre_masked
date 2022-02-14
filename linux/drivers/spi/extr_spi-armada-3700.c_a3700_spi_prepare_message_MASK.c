
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {struct spi_device* spi; } ;
struct spi_master {int dummy; } ;
struct spi_device {int mode; int dev; } ;
struct a3700_spi {int clk; } ;


 int FUNC_0 (struct a3700_spi*) ;
 int FUNC_1 (struct a3700_spi*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 struct a3700_spi* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_0,
         struct spi_message *VAR_1)
{
 struct a3700_spi *VAR_2 = FUNC_4(VAR_0);
 struct spi_device *VAR_3 = VAR_1->spi;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->clk);
 if (VAR_4) {
  FUNC_3(&VAR_3->dev, "failed to enable clk with error %d\n", VAR_4);
  return VAR_4;
 }


 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_2, VAR_3->mode);

 return 0;
}
