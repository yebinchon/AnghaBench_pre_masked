
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_nor*) ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*,int) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_1);
 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 return ((VAR_4 & VAR_3) != (VAR_2 & VAR_3)) ? -VAR_0 : 0;
}
