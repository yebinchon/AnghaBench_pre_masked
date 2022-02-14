
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int cmd_completion; } ;
struct mmc_host {int led; int claimed; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct mmc_host*,struct mmc_request*,int) ;
 int FUNC_6 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_7 (struct mmc_host*) ;

int FUNC_8(struct mmc_host *VAR_2, struct mmc_request *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_3->cmd_completion);

 FUNC_7(VAR_2);

 if (FUNC_4(VAR_2->card))
  return -VAR_0;

 FUNC_5(VAR_2, VAR_3, 0);

 FUNC_0(!VAR_2->claimed);

 VAR_4 = FUNC_6(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_3(VAR_2->led, VAR_1);
 FUNC_1(VAR_2, VAR_3);

 return 0;
}
