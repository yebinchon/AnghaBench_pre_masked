
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mmc_blk_request {int data; } ;
struct mmc_queue_req {struct mmc_blk_request brq; } ;
struct mmc_card {int host; } ;


 int FUNC_0 (struct mmc_card*,unsigned int,struct request*,int *) ;
 unsigned int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mmc_card*,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct mmc_queue_req* FUNC_5 (struct request*) ;

__attribute__((used)) static int FUNC_6(struct mmc_card *VAR_0, struct request *VAR_1)
{
 struct mmc_queue_req *VAR_2 = FUNC_5(VAR_1);
 struct mmc_blk_request *VAR_3 = &VAR_2->brq;
 unsigned int VAR_4 = FUNC_1(VAR_0->host, &VAR_3->data);
 int VAR_5;

 FUNC_3(VAR_0->host);

 FUNC_2(VAR_0, VAR_4);

 VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_1, ((void*)0));

 FUNC_4(VAR_0->host);

 return VAR_5;
}
