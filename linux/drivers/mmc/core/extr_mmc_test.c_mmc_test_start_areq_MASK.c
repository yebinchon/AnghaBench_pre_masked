
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_test_card {TYPE_1__* card; } ;
struct mmc_request {int completion; int done; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {struct mmc_host* host; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*,int) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_5 (struct mmc_test_card*,struct mmc_request*) ;
 int FUNC_6 (struct mmc_test_card*) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct mmc_test_card *VAR_1,
          struct mmc_request *VAR_2,
          struct mmc_request *VAR_3)
{
 struct mmc_host *VAR_4 = VAR_1->card->host;
 int VAR_5 = 0;

 if (VAR_2) {
  FUNC_0(&VAR_2->completion);
  VAR_2->done = VAR_0;
  FUNC_2(VAR_4, VAR_2);
 }

 if (VAR_3) {
  FUNC_7(&VAR_3->completion);
  VAR_5 = FUNC_6(VAR_1);
  if (!VAR_5)
   VAR_5 = FUNC_5(VAR_1, VAR_3);
 }

 if (!VAR_5 && VAR_2) {
  VAR_5 = FUNC_4(VAR_4, VAR_2);
  if (VAR_5)
   FUNC_3(VAR_4);
 }

 if (VAR_3)
  FUNC_1(VAR_4, VAR_3, 0);

 if (VAR_5 && VAR_2)
  FUNC_1(VAR_4, VAR_2, VAR_5);

 return VAR_5;
}
