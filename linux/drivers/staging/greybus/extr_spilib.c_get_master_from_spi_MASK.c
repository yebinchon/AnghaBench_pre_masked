
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct gb_spilib {int connection; } ;


 struct spi_master* FUNC_0 (int ) ;

__attribute__((used)) static struct spi_master *FUNC_1(struct gb_spilib *VAR_0)
{
 return FUNC_0(VAR_0->connection);
}
