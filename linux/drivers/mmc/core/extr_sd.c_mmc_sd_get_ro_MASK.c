
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int caps2; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_ro ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_1(struct mmc_host *VAR_1)
{
 int VAR_2;






 if (VAR_1->caps2 & VAR_0)
  return 0;

 if (!VAR_1->ops->get_ro)
  return -1;

 VAR_2 = VAR_1->ops->get_ro(VAR_1);

 return VAR_2;
}
