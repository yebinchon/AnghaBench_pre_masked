
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int caps; int detect; scalar_t__ detect_change; int claimed; struct mmc_card* card; } ;
struct mmc_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_card*) ;

int FUNC_6(struct mmc_host *VAR_1)
{
 struct mmc_card *VAR_2 = VAR_1->card;
 int VAR_3;

 FUNC_0(!VAR_1->claimed);

 if (!VAR_2)
  return 1;

 if (!FUNC_4(VAR_1))
  return 0;

 VAR_3 = FUNC_5(VAR_2);




 if (!VAR_1->detect_change && !(VAR_1->caps & VAR_0))
  return VAR_3;

 VAR_1->detect_change = 0;
 if (!VAR_3) {
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3 && (VAR_1->caps & VAR_0)) {




   FUNC_3(&VAR_1->detect);
   FUNC_2(VAR_1, 0, 0);
  }
 }

 return VAR_3;
}
