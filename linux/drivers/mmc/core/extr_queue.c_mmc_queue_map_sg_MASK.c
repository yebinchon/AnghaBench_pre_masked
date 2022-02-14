
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mmc_queue_req {int sg; } ;
struct mmc_queue {int queue; } ;


 unsigned int FUNC_0 (int ,struct request*,int ) ;
 struct request* FUNC_1 (struct mmc_queue_req*) ;

unsigned int FUNC_2(struct mmc_queue *VAR_0, struct mmc_queue_req *VAR_1)
{
 struct request *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0->queue, VAR_2, VAR_1->sg);
}
