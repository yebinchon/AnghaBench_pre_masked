
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int mmc; int base; TYPE_1__* pdata; scalar_t__ power_mode; } ;
struct mmc_ios {int vdd; scalar_t__ power_mode; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int controller_flags; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 struct omap_hsmmc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct omap_hsmmc_host*) ;
 int FUNC_5 (struct omap_hsmmc_host*) ;
 int FUNC_6 (struct omap_hsmmc_host*) ;
 int FUNC_7 (struct omap_hsmmc_host*,int) ;
 scalar_t__ FUNC_8 (struct omap_hsmmc_host*,int ) ;
 int FUNC_9 (struct omap_hsmmc_host*) ;

__attribute__((used)) static void FUNC_10(struct mmc_host *VAR_4, struct mmc_ios *VAR_5)
{
 struct omap_hsmmc_host *VAR_6 = FUNC_3(VAR_4);
 int VAR_7 = 0;

 if (VAR_5->power_mode != VAR_6->power_mode) {
  switch (VAR_5->power_mode) {
  case 130:
   FUNC_7(VAR_6, 0);
   break;
  case 128:
   FUNC_7(VAR_6, 1);
   break;
  case 129:
   VAR_7 = 1;
   break;
  }
  VAR_6->power_mode = VAR_5->power_mode;
 }



 FUNC_5(VAR_6);

 if (VAR_6->pdata->controller_flags & VAR_2) {



  if ((FUNC_0(VAR_6->base, VAR_1) & VAR_3) &&
   (VAR_5->vdd == VAR_0)) {






   if (FUNC_8(VAR_6, VAR_5->vdd) != 0)
    FUNC_1(FUNC_2(VAR_6->mmc),
      "Switch operation failed\n");
  }
 }

 FUNC_6(VAR_6);

 if (VAR_7)
  FUNC_9(VAR_6);

 FUNC_4(VAR_6);
}
