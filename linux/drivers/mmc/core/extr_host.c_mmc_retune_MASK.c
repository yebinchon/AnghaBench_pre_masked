
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ timing; } ;
struct mmc_host {int doing_retune; int card; TYPE_1__ ios; scalar_t__ need_retune; scalar_t__ retune_now; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct mmc_host *VAR_1)
{
 bool VAR_2 = 0;
 int VAR_3;

 if (VAR_1->retune_now)
  VAR_1->retune_now = 0;
 else
  return 0;

 if (!VAR_1->need_retune || VAR_1->doing_retune || !VAR_1->card)
  return 0;

 VAR_1->need_retune = 0;

 VAR_1->doing_retune = 1;

 if (VAR_1->ios.timing == VAR_0) {
  VAR_3 = FUNC_2(VAR_1->card);
  if (VAR_3)
   goto out;

  VAR_2 = 1;
 }

 VAR_3 = FUNC_0(VAR_1->card);
 if (VAR_3)
  goto out;

 if (VAR_2)
  VAR_3 = FUNC_1(VAR_1->card);
out:
 VAR_1->doing_retune = 0;

 return VAR_3;
}
