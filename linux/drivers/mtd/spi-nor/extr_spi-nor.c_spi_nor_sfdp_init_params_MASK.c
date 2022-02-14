
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor_flash_parameter {int dummy; } ;
struct spi_nor {struct spi_nor_flash_parameter params; int flags; scalar_t__ addr_width; } ;
typedef int sfdp_params ;


 int VAR_0 ;
 int FUNC_0 (struct spi_nor_flash_parameter*,struct spi_nor_flash_parameter*,int) ;
 scalar_t__ FUNC_1 (struct spi_nor*,struct spi_nor_flash_parameter*) ;

__attribute__((used)) static void FUNC_2(struct spi_nor *VAR_1)
{
 struct spi_nor_flash_parameter VAR_2;

 FUNC_0(&VAR_2, &VAR_1->params, sizeof(VAR_2));

 if (FUNC_1(VAR_1, &VAR_2)) {
  VAR_1->addr_width = 0;
  VAR_1->flags &= ~VAR_0;
 } else {
  FUNC_0(&VAR_1->params, &VAR_2, sizeof(VAR_1->params));
 }
}
