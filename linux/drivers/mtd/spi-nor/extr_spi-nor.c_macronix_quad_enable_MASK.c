
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*) ;
 int FUNC_4 (struct spi_nor*,int) ;

__attribute__((used)) static int FUNC_5(struct spi_nor *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4 & VAR_1)
  return 0;

 FUNC_3(VAR_2);

 FUNC_4(VAR_2, VAR_4 | VAR_1);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (!(VAR_3 > 0 && (VAR_3 & VAR_1))) {
  FUNC_0(VAR_2->dev, "Macronix Quad bit not set\n");
  return -VAR_0;
 }

 return 0;
}
