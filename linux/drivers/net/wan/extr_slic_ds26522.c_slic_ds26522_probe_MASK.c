
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int chip_select; } ;


 struct spi_device* VAR_0 ;
 int FUNC_0 (struct spi_device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_1)
{
 int VAR_2 = 0;

 VAR_0 = VAR_1;
 VAR_1->bits_per_word = 8;

 if (!FUNC_0(VAR_1))
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == 0)
  FUNC_1("DS26522 cs%d configured\n", VAR_1->chip_select);

 return VAR_2;
}
