
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spinand_device {int dummy; } ;
struct spi_mem {int dummy; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (struct mtd_info*) ;
 struct spinand_device* FUNC_1 (struct spi_mem*) ;
 int FUNC_2 (struct spinand_device*) ;
 struct mtd_info* FUNC_3 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_4(struct spi_mem *VAR_0)
{
 struct spinand_device *VAR_1;
 struct mtd_info *VAR_2;
 int VAR_3;

 VAR_1 = FUNC_1(VAR_0);
 VAR_2 = FUNC_3(VAR_1);

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_1);

 return 0;
}
