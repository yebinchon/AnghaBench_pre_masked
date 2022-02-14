
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int* bouncebuf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*,int*) ;

__attribute__((used)) static int FUNC_3(struct spi_nor *VAR_2)
{
 u8 *VAR_3 = VAR_2->bouncebuf;
 int VAR_4;


 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2->dev, "error while reading status register\n");
  return -VAR_1;
 }
 VAR_3[0] = VAR_4;
 VAR_3[1] = VAR_0;

 return FUNC_2(VAR_2, VAR_3);
}
