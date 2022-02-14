
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {struct device* dev; } ;
struct mtd_info {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 struct spi_nor* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct spi_nor*) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_0)
{
 struct spi_nor *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = VAR_1->dev;
 int VAR_3;


 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  FUNC_0(VAR_2, "resume() failed\n");
}
