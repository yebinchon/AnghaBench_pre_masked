
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int tag; } ;
struct mmc_request {int tag; int * cmd; } ;
struct mmc_blk_request {struct mmc_request mrq; int cmd; } ;
struct mmc_queue_req {struct mmc_blk_request brq; } ;


 int FUNC_0 (struct mmc_blk_request*,int ,int) ;

__attribute__((used)) static struct mmc_request *FUNC_1(struct mmc_queue_req *VAR_0,
       struct request *VAR_1)
{
 struct mmc_blk_request *VAR_2 = &VAR_0->brq;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->mrq.cmd = &VAR_2->cmd;
 VAR_2->mrq.tag = VAR_1->tag;

 return &VAR_2->mrq;
}
