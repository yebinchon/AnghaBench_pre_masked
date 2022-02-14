
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int dummy; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct bcm2835aux_spi {int* cntl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm2835aux_spi*,int ,int) ;
 struct bcm2835aux_spi* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_3,
          struct spi_device *VAR_4,
          struct spi_transfer *VAR_5)
{
 struct bcm2835aux_spi *VAR_6 = FUNC_1(VAR_3);


 FUNC_0(VAR_6, VAR_0, VAR_6->cntl[1] |
  VAR_2 |
  VAR_1);


 return 1;
}
