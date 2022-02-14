
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tmio_mmc_host {TYPE_3__* mmc; TYPE_2__* pdata; } ;
struct renesas_sdhi {int dummy; } ;
struct TYPE_4__ {scalar_t__ timing; } ;
struct TYPE_6__ {TYPE_1__ ios; } ;
struct TYPE_5__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct renesas_sdhi* FUNC_0 (struct tmio_mmc_host*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct tmio_mmc_host*,struct renesas_sdhi*,int ) ;
 int FUNC_3 (struct tmio_mmc_host*,struct renesas_sdhi*,int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct tmio_mmc_host *VAR_8)
{
 struct renesas_sdhi *VAR_9 = FUNC_0(VAR_8);
 bool VAR_10 = VAR_8->pdata->flags & VAR_7;





 if (!(VAR_8->mmc->ios.timing == VAR_2) &&
     !(VAR_8->mmc->ios.timing == VAR_0) &&
     !(VAR_8->mmc->ios.timing == VAR_1 && !VAR_10))
  return 0;

 if (FUNC_1(VAR_8->mmc))
  return 0;


 if (FUNC_2(VAR_8, VAR_9, VAR_3) &
     VAR_4 &&
     FUNC_2(VAR_8, VAR_9, VAR_5) &
     VAR_6) {

  FUNC_3(VAR_8, VAR_9, VAR_5, 0);
  return 1;
 }

 return 0;
}
