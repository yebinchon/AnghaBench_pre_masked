
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst25l_flash {int mtd; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct sst25l_flash* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0)
{
 struct sst25l_flash *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_1->mtd);
}
