
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_host {int card; TYPE_2__* ops; TYPE_1__* bus_ops; } ;
struct TYPE_4__ {int (* get_cd ) (struct mmc_host*) ;} ;
struct TYPE_3__ {int (* alive ) (struct mmc_host*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_host*,int ) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*) ;

int FUNC_8(struct mmc_host *VAR_0)
{
 int VAR_1;

 if (!VAR_0->card || FUNC_0(VAR_0->card))
  return 1;

 VAR_1 = VAR_0->bus_ops->alive(VAR_0);
 if (!VAR_1 && VAR_0->ops->get_cd && !VAR_0->ops->get_cd(VAR_0)) {
  FUNC_2(VAR_0, FUNC_4(200));
  FUNC_5("%s: card removed too slowly\n", FUNC_3(VAR_0));
 }

 if (VAR_1) {
  FUNC_1(VAR_0->card);
  FUNC_5("%s: card remove detected\n", FUNC_3(VAR_0));
 }

 return VAR_1;
}
