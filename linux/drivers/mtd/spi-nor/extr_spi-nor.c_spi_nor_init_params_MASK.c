
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_nor {TYPE_1__* info; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spi_nor*) ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*) ;
 int FUNC_4 (struct spi_nor*) ;

__attribute__((used)) static void FUNC_5(struct spi_nor *VAR_3)
{
 FUNC_0(VAR_3);

 FUNC_2(VAR_3);

 if ((VAR_3->info->flags & (VAR_0 | VAR_1)) &&
     !(VAR_3->info->flags & VAR_2))
  FUNC_4(VAR_3);

 FUNC_3(VAR_3);

 FUNC_1(VAR_3);
}
