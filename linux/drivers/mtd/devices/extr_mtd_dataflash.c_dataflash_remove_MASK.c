
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct dataflash {int mtd; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct dataflash*) ;
 int FUNC_2 (int *) ;
 struct dataflash* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_0)
{
 struct dataflash *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_0(&VAR_0->dev, "remove\n");

 VAR_2 = FUNC_2(&VAR_1->mtd);
 if (VAR_2 == 0)
  FUNC_1(VAR_1);
 return VAR_2;
}
