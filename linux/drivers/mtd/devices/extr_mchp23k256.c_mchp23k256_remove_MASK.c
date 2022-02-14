
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct mchp23k256_flash {int mtd; } ;


 int FUNC_0 (int *) ;
 struct mchp23k256_flash* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0)
{
 struct mchp23k256_flash *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_1->mtd);
}
