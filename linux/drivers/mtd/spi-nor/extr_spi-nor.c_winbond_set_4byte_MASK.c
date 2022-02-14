
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int dummy; } ;


 int FUNC_0 (struct spi_nor*,int) ;
 int FUNC_1 (struct spi_nor*,int ) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 || VAR_1)
  return VAR_2;






 FUNC_3(VAR_0);
 VAR_2 = FUNC_1(VAR_0, 0);
 FUNC_2(VAR_0);

 return VAR_2;
}
