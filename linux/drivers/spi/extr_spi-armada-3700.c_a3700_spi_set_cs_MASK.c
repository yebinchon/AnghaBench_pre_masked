
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int chip_select; int master; } ;
struct a3700_spi {int dummy; } ;


 int FUNC_0 (struct a3700_spi*,int ) ;
 int FUNC_1 (struct a3700_spi*,int ) ;
 struct a3700_spi* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_0, bool VAR_1)
{
 struct a3700_spi *VAR_2 = FUNC_2(VAR_0->master);

 if (!VAR_1)
  FUNC_0(VAR_2, VAR_0->chip_select);
 else
  FUNC_1(VAR_2, VAR_0->chip_select);
}
