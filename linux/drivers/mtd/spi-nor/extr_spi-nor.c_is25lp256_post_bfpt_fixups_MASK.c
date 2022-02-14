
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor_flash_parameter {int dummy; } ;
struct spi_nor {int addr_width; } ;
struct sfdp_parameter_header {int dummy; } ;
struct sfdp_bfpt {int* dwords; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct spi_nor *VAR_2,
      const struct sfdp_parameter_header *VAR_3,
      const struct sfdp_bfpt *VAR_4,
      struct spi_nor_flash_parameter *VAR_5)
{





 if ((VAR_4->dwords[FUNC_0(1)] & VAR_1) ==
  VAR_0)
  VAR_2->addr_width = 4;

 return 0;
}
