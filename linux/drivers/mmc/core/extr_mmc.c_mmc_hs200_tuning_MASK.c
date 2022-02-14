
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bus_width; } ;
struct mmc_host {TYPE_2__ ios; TYPE_1__* ops; } ;
struct mmc_card {int mmc_avail_type; struct mmc_host* host; } ;
struct TYPE_3__ {int (* prepare_hs400_tuning ) (struct mmc_host*,TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (struct mmc_host*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct mmc_card *VAR_2)
{
 struct mmc_host *VAR_3 = VAR_2->host;





 if (VAR_2->mmc_avail_type & VAR_0 &&
     VAR_3->ios.bus_width == VAR_1)
  if (VAR_3->ops->prepare_hs400_tuning)
   VAR_3->ops->prepare_hs400_tuning(VAR_3, &VAR_3->ios);

 return FUNC_0(VAR_2);
}
