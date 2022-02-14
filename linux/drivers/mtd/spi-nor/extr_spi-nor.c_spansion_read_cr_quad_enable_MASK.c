
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int* bouncebuf; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*,int*) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 u8 *VAR_4 = VAR_2->bouncebuf;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3, "error while reading configuration register\n");
  return -VAR_1;
 }

 if (VAR_5 & VAR_0)
  return 0;

 VAR_4[1] = VAR_5 | VAR_0;


 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3, "error while reading status register\n");
  return -VAR_1;
 }
 VAR_4[0] = VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_1(VAR_2);
 if (!(VAR_5 > 0 && (VAR_5 & VAR_0))) {
  FUNC_0(VAR_2->dev, "Spansion Quad bit not set\n");
  return -VAR_1;
 }

 return 0;
}
