
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ len; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct spi_device *VAR_2,
        struct spi_transfer *VAR_3, int VAR_4)
{
 if (VAR_3 && VAR_3->len + VAR_4 > VAR_1)
  return -VAR_0;

 return 0;
}
