
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_nor {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* fixups; } ;
struct TYPE_3__ {int (* default_init ) (struct spi_nor*) ;} ;


 int FUNC_0 (TYPE_2__*) ;




 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*) ;
 int FUNC_4 (struct spi_nor*) ;

__attribute__((used)) static void FUNC_5(struct spi_nor *VAR_0)
{

 switch (FUNC_0(VAR_0->info)) {
 case 131:
  FUNC_1(VAR_0);
  break;

 case 129:
 case 130:
  FUNC_2(VAR_0);
  break;

 case 128:
  FUNC_4(VAR_0);
  break;

 default:
  break;
 }

 if (VAR_0->info->fixups && VAR_0->info->fixups->default_init)
  VAR_0->info->fixups->default_init(VAR_0);
}
