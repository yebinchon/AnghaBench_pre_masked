
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_master {int dummy; } ;
struct bcm2835aux_spi {int dummy; } ;


 int FUNC_0 (struct bcm2835aux_spi*) ;
 struct bcm2835aux_spi* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_0,
         struct spi_message *VAR_1)
{
 struct bcm2835aux_spi *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2);

 return 0;
}
