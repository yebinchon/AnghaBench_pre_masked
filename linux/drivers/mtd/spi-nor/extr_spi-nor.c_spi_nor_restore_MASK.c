
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* set_4byte ) (struct spi_nor*,int) ;} ;
struct spi_nor {int addr_width; int flags; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_nor*,int) ;

void FUNC_1(struct spi_nor *VAR_2)
{

 if (VAR_2->addr_width == 4 && !(VAR_2->flags & VAR_0) &&
     VAR_2->flags & VAR_1)
  VAR_2->params.set_4byte(VAR_2, 0);
}
