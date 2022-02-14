
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int* bouncebuf; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct spi_nor*,int*) ;

__attribute__((used)) static int FUNC_2(struct spi_nor *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_1->bouncebuf);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "error %d reading XRDSR\n", (int) VAR_2);
  return VAR_2;
 }

 return !!(VAR_1->bouncebuf[0] & VAR_0);
}
