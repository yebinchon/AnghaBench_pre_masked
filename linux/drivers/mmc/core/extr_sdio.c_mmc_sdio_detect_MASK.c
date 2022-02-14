
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int caps; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct mmc_host *VAR_1)
{
 int VAR_2;


 if (VAR_1->caps & VAR_0) {
  VAR_2 = FUNC_6(&VAR_1->card->dev);
  if (VAR_2 < 0) {
   FUNC_7(&VAR_1->card->dev);
   goto out;
  }
 }

 FUNC_1(VAR_1);




 VAR_2 = FUNC_0(VAR_1);

 FUNC_4(VAR_1);
 if (VAR_1->caps & VAR_0)
  FUNC_8(&VAR_1->card->dev);

out:
 if (VAR_2) {
  FUNC_5(VAR_1);

  FUNC_1(VAR_1);
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
  FUNC_4(VAR_1);
 }
}
