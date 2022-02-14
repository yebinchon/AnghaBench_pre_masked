
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int enhanced_strobe; scalar_t__ drv_type; int timing; int bus_width; int bus_mode; int chip_select; } ;
struct mmc_host {int caps2; TYPE_3__ ios; TYPE_2__* ops; TYPE_1__* cqe_ops; scalar_t__ cqe_on; } ;
struct TYPE_5__ {int (* hs400_enhanced_strobe ) (struct mmc_host*,TYPE_3__*) ;} ;
struct TYPE_4__ {int (* cqe_off ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,TYPE_3__*) ;

void FUNC_5(struct mmc_host *VAR_6)
{
 if (VAR_6->cqe_on)
  VAR_6->cqe_ops->cqe_off(VAR_6);

 FUNC_1(VAR_6);

 if (FUNC_0(VAR_6))
  VAR_6->ios.chip_select = VAR_4;
 else
  VAR_6->ios.chip_select = VAR_3;
 VAR_6->ios.bus_mode = VAR_0;
 VAR_6->ios.bus_width = VAR_1;
 VAR_6->ios.timing = VAR_5;
 VAR_6->ios.drv_type = 0;
 VAR_6->ios.enhanced_strobe = 0;





 if ((VAR_6->caps2 & VAR_2) &&
      VAR_6->ops->hs400_enhanced_strobe)
  VAR_6->ops->hs400_enhanced_strobe(VAR_6, &VAR_6->ios);

 FUNC_2(VAR_6);
}
