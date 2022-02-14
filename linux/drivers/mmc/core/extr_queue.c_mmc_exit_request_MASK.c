
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct mmc_queue_req {int * sg; } ;


 int FUNC_0 (int *) ;
 struct mmc_queue_req* FUNC_1 (struct request*) ;

__attribute__((used)) static void FUNC_2(struct request_queue *VAR_0, struct request *VAR_1)
{
 struct mmc_queue_req *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->sg);
 VAR_2->sg = ((void*)0);
}
