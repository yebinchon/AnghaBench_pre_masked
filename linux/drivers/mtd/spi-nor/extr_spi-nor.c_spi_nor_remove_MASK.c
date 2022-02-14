
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int mtd; } ;
struct spi_mem {int dummy; } ;


 int FUNC_0 (int *) ;
 struct spi_nor* FUNC_1 (struct spi_mem*) ;
 int FUNC_2 (struct spi_nor*) ;

__attribute__((used)) static int FUNC_3(struct spi_mem *VAR_0)
{
 struct spi_nor *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1);


 return FUNC_0(&VAR_1->mtd);
}
