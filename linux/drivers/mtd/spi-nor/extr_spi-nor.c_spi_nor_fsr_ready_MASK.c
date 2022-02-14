
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;

__attribute__((used)) static int FUNC_3(struct spi_nor *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 & (VAR_1 | VAR_3)) {
  if (VAR_6 & VAR_1)
   FUNC_0(VAR_5->dev, "Erase operation failed.\n");
  else
   FUNC_0(VAR_5->dev, "Program operation failed.\n");

  if (VAR_6 & VAR_2)
   FUNC_0(VAR_5->dev,
   "Attempted to modify a protected sector.\n");

  FUNC_2(VAR_5);
  return -VAR_0;
 }

 return VAR_6 & VAR_4;
}
