
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {struct mmc_host* mmc; } ;
struct TYPE_2__ {int work; } ;
struct mmc_host {TYPE_1__ detect; scalar_t__ card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_host*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tmio_mmc_host*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct tmio_mmc_host *VAR_2,
           int VAR_3, int VAR_4)
{
 struct mmc_host *VAR_5 = VAR_2->mmc;


 if (VAR_3 & (VAR_0 | VAR_1)) {
  FUNC_2(VAR_2, VAR_0 |
   VAR_1);
  if ((((VAR_3 & VAR_1) && VAR_5->card) ||
       ((VAR_3 & VAR_0) && !VAR_5->card)) &&
      !FUNC_3(&VAR_5->detect.work))
   FUNC_0(VAR_2->mmc, FUNC_1(100));
  return 1;
 }

 return 0;
}
