
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mmc_queue_req {int sg; } ;
struct mmc_queue {struct mmc_card* card; } ;
struct mmc_host {int dummy; } ;
struct mmc_card {struct mmc_host* host; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mmc_host*) ;
 struct mmc_queue_req* FUNC_2 (struct request*) ;

__attribute__((used)) static int FUNC_3(struct mmc_queue *VAR_1, struct request *VAR_2,
         gfp_t VAR_3)
{
 struct mmc_queue_req *VAR_4 = FUNC_2(VAR_2);
 struct mmc_card *VAR_5 = VAR_1->card;
 struct mmc_host *VAR_6 = VAR_5->host;

 VAR_4->sg = FUNC_0(FUNC_1(VAR_6), VAR_3);
 if (!VAR_4->sg)
  return -VAR_0;

 return 0;
}
