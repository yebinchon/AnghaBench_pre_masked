
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_slave_system_control_priv {int finished; } ;
struct spi_device {int dummy; } ;


 struct spi_slave_system_control_priv* FUNC_0 (struct spi_device*) ;
 int FUNC_1 (struct spi_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct spi_slave_system_control_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 FUNC_2(&VAR_1->finished);
 return 0;
}
