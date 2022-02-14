
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_nor {TYPE_2__* info; } ;
struct TYPE_4__ {int flags; TYPE_1__* fixups; } ;
struct TYPE_3__ {int (* post_sfdp ) (struct spi_nor*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

 int VAR_0 ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*) ;

__attribute__((used)) static void FUNC_4(struct spi_nor *VAR_1)
{
 switch (FUNC_0(VAR_1->info)) {
 case 128:
  FUNC_2(VAR_1);
  break;

 default:
  break;
 }

 if (VAR_1->info->flags & VAR_0)
  FUNC_1(VAR_1);

 if (VAR_1->info->fixups && VAR_1->info->fixups->post_sfdp)
  VAR_1->info->fixups->post_sfdp(VAR_1);
}
