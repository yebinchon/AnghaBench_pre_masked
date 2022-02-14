
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int* bouncebuf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct spi_nor*,int*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*,int*) ;
 int FUNC_4 (struct spi_nor*) ;

__attribute__((used)) static int FUNC_5(struct spi_nor *VAR_2)
{
 u8 *VAR_3 = VAR_2->bouncebuf;
 int VAR_4;


 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;
 if (*VAR_3 & VAR_1)
  return 0;


 *VAR_3 |= VAR_1;

 FUNC_4(VAR_2);

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2->dev, "error while writing status register 2\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2->dev, "timeout while writing status register 2\n");
  return VAR_4;
 }


 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!(VAR_4 > 0 && (*VAR_3 & VAR_1))) {
  FUNC_0(VAR_2->dev, "SR2 Quad bit not set\n");
  return -VAR_0;
 }

 return 0;
}
