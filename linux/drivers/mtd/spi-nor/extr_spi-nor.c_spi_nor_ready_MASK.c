
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_nor*) ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;

__attribute__((used)) static int FUNC_3(struct spi_nor *VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2->flags & VAR_0)
  VAR_3 = FUNC_0(VAR_2);
 else
  VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_4 = VAR_2->flags & VAR_1 ? FUNC_1(VAR_2) : 1;
 if (VAR_4 < 0)
  return VAR_4;
 return VAR_3 && VAR_4;
}
