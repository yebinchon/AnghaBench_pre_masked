
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_nor_hwcaps {int dummy; } ;
struct TYPE_2__ {int (* setup ) (struct spi_nor*,struct spi_nor_hwcaps const*) ;} ;
struct spi_nor {TYPE_1__ params; } ;


 int FUNC_0 (struct spi_nor*,struct spi_nor_hwcaps const*) ;

__attribute__((used)) static int FUNC_1(struct spi_nor *VAR_0,
    const struct spi_nor_hwcaps *VAR_1)
{
 if (!VAR_0->params.setup)
  return 0;

 return VAR_0->params.setup(VAR_0, VAR_1);
}
