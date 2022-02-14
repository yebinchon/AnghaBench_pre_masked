
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*) ;
 int FUNC_4 (struct spi_nor*,int) ;

__attribute__((used)) static int FUNC_5(struct spi_nor *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = VAR_2 | VAR_1 | VAR_0;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev, "error while reading status register\n");
  return VAR_4;
 }

 FUNC_3(VAR_3);

 VAR_4 = FUNC_4(VAR_3, VAR_4 & ~VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, "write to status register failed\n");
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  FUNC_0(VAR_3->dev, "timeout while writing status register\n");
 return VAR_4;
}
