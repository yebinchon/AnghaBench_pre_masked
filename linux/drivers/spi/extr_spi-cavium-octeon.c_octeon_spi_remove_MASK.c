
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;
struct octeon_spi {scalar_t__ register_base; } ;


 scalar_t__ FUNC_0 (struct octeon_spi*) ;
 struct spi_master* FUNC_1 (struct platform_device*) ;
 struct octeon_spi* FUNC_2 (struct spi_master*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_1(VAR_0);
 struct octeon_spi *VAR_2 = FUNC_2(VAR_1);


 FUNC_3(0, VAR_2->register_base + FUNC_0(VAR_2));

 return 0;
}
