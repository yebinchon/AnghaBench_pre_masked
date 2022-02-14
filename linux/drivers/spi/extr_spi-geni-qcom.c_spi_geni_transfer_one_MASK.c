
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; } ;
struct spi_master {int dummy; } ;
struct spi_geni_master {int dummy; } ;
struct spi_device {int mode; } ;


 int FUNC_0 (struct spi_transfer*,struct spi_geni_master*,int ,struct spi_master*) ;
 struct spi_geni_master* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_0,
    struct spi_device *VAR_1,
    struct spi_transfer *VAR_2)
{
 struct spi_geni_master *VAR_3 = FUNC_1(VAR_0);


 if (!VAR_2->len)
  return 0;

 FUNC_0(VAR_2, VAR_3, VAR_1->mode, VAR_0);
 return 1;
}
