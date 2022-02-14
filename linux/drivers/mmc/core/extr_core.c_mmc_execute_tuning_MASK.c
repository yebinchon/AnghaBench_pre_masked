
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mmc_host {TYPE_1__* ops; TYPE_2__* cqe_ops; scalar_t__ cqe_on; } ;
struct mmc_card {struct mmc_host* host; } ;
struct TYPE_4__ {int (* cqe_off ) (struct mmc_host*) ;} ;
struct TYPE_3__ {int (* execute_tuning ) (struct mmc_host*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*,int ) ;

int FUNC_6(struct mmc_card *VAR_2)
{
 struct mmc_host *VAR_3 = VAR_2->host;
 u32 VAR_4;
 int VAR_5;

 if (!VAR_3->ops->execute_tuning)
  return 0;

 if (VAR_3->cqe_on)
  VAR_3->cqe_ops->cqe_off(VAR_3);

 if (FUNC_0(VAR_2))
  VAR_4 = VAR_1;
 else
  VAR_4 = VAR_0;

 VAR_5 = VAR_3->ops->execute_tuning(VAR_3, VAR_4);

 if (VAR_5)
  FUNC_3("%s: tuning execution failed: %d\n",
   FUNC_1(VAR_3), VAR_5);
 else
  FUNC_2(VAR_3);

 return VAR_5;
}
