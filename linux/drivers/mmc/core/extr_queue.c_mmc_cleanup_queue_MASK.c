
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct mmc_queue {int * card; int complete_work; int tag_set; struct request_queue* queue; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct request_queue*) ;
 scalar_t__ FUNC_3 (struct request_queue*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mmc_queue *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->queue;





 if (FUNC_3(VAR_1))
  FUNC_2(VAR_1);

 FUNC_0(VAR_1);
 FUNC_1(&VAR_0->tag_set);






 FUNC_4(&VAR_0->complete_work);

 VAR_0->card = ((void*)0);
}
