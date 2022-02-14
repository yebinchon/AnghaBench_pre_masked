
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_nor_flash_parameter {int dummy; } ;
struct spi_nor {TYPE_2__* info; } ;
struct sfdp_parameter_header {int dummy; } ;
struct sfdp_bfpt {int dummy; } ;
struct TYPE_4__ {TYPE_1__* fixups; } ;
struct TYPE_3__ {int (* post_bfpt ) (struct spi_nor*,struct sfdp_parameter_header const*,struct sfdp_bfpt const*,struct spi_nor_flash_parameter*) ;} ;


 int FUNC_0 (struct spi_nor*,struct sfdp_parameter_header const*,struct sfdp_bfpt const*,struct spi_nor_flash_parameter*) ;

__attribute__((used)) static int
FUNC_1(struct spi_nor *VAR_0,
    const struct sfdp_parameter_header *VAR_1,
    const struct sfdp_bfpt *VAR_2,
    struct spi_nor_flash_parameter *VAR_3)
{
 if (VAR_0->info->fixups && VAR_0->info->fixups->post_bfpt)
  return VAR_0->info->fixups->post_bfpt(VAR_0, VAR_1, VAR_2,
          VAR_3);

 return 0;
}
