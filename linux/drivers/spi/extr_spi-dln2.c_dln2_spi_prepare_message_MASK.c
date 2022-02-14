
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {struct spi_device* spi; } ;
struct spi_master {int dummy; } ;
struct spi_device {scalar_t__ chip_select; } ;
struct dln2_spi {scalar_t__ cs; } ;


 int FUNC_0 (struct dln2_spi*,scalar_t__) ;
 struct dln2_spi* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_0,
        struct spi_message *VAR_1)
{
 int VAR_2;
 struct dln2_spi *VAR_3 = FUNC_1(VAR_0);
 struct spi_device *VAR_4 = VAR_1->spi;

 if (VAR_3->cs != VAR_4->chip_select) {
  VAR_2 = FUNC_0(VAR_3, VAR_4->chip_select);
  if (VAR_2 < 0)
   return VAR_2;

  VAR_3->cs = VAR_4->chip_select;
 }

 return 0;
}
