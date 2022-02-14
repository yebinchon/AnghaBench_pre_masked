
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct ifx_spi_device {int power_status; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 struct ifx_spi_device* FUNC_1 (struct spi_device*) ;
 struct spi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct spi_device *VAR_1 = FUNC_2(VAR_0);
 struct ifx_spi_device *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2->power_status)
  FUNC_0(VAR_0);

 return 0;
}
