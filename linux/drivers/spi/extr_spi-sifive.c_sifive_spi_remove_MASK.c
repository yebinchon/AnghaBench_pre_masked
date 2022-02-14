
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct sifive_spi {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct spi_master* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct sifive_spi*,int ,int ) ;
 struct sifive_spi* FUNC_2 (struct spi_master*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct spi_master *VAR_2 = FUNC_0(VAR_1);
 struct sifive_spi *VAR_3 = FUNC_2(VAR_2);


 FUNC_1(VAR_3, VAR_0, 0);

 return 0;
}
