
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_master {int dummy; } ;
struct a3700_spi {int clk; } ;


 int FUNC_0 (int ) ;
 struct a3700_spi* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_0,
           struct spi_message *VAR_1)
{
 struct a3700_spi *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->clk);

 return 0;
}
