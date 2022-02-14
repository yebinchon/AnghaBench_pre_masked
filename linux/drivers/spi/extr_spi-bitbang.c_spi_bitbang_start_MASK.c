
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct spi_bitbang {struct spi_master* master; } ;


 int FUNC_0 (struct spi_bitbang*) ;
 int FUNC_1 (struct spi_master*) ;
 int FUNC_2 (struct spi_master*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct spi_bitbang *VAR_0)
{
 struct spi_master *VAR_1 = VAR_0->master;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;




 VAR_2 = FUNC_3(FUNC_1(VAR_1));
 if (VAR_2)
  FUNC_2(VAR_1);

 return VAR_2;
}
