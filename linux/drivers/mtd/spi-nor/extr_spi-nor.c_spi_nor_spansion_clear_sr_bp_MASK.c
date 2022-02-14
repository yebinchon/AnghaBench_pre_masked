
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int* bouncebuf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*) ;
 int FUNC_4 (struct spi_nor*,int*) ;

__attribute__((used)) static int FUNC_5(struct spi_nor *VAR_4)
{
 int VAR_5;
 u8 VAR_6 = VAR_3 | VAR_2 | VAR_1;
 u8 *VAR_7 = VAR_4->bouncebuf;


 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->dev,
   "error while reading configuration register\n");
  return VAR_5;
 }





 if (VAR_5 & VAR_0) {
  VAR_7[1] = VAR_5;

  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5 < 0) {
   FUNC_0(VAR_4->dev,
    "error while reading status register\n");
   return VAR_5;
  }
  VAR_7[0] = VAR_5 & ~VAR_6;

  VAR_5 = FUNC_4(VAR_4, VAR_7);
  if (VAR_5)
   FUNC_0(VAR_4->dev, "16-bit write register failed\n");
  return VAR_5;
 }





 return FUNC_3(VAR_4);
}
