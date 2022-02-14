
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aspeed_smc_controller {struct aspeed_smc_chip** chips; TYPE_1__* info; } ;
struct TYPE_4__ {int mtd; } ;
struct aspeed_smc_chip {TYPE_2__ nor; } ;
struct TYPE_3__ {int nce; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct aspeed_smc_controller *VAR_0)
{
 struct aspeed_smc_chip *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->info->nce; VAR_2++) {
  VAR_1 = VAR_0->chips[VAR_2];
  if (VAR_1)
   FUNC_0(&VAR_1->nor.mtd);
 }

 return 0;
}
