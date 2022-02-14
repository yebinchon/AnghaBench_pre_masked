
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ len; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct spi_master *VAR_1, struct spi_device *VAR_2,
        struct spi_transfer *VAR_3)
{
 if (VAR_3->len > VAR_0)
  return 1;
 return 0;
}
