
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct mmc_queue* queuedata; } ;
struct request {struct request_queue* q; } ;
struct mmc_queue {int lock; int use_cqe; scalar_t__ recovery_needed; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;


 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static enum blk_eh_timer_return FUNC_3(struct request *VAR_1,
       bool VAR_2)
{
 struct request_queue *VAR_3 = VAR_1->q;
 struct mmc_queue *VAR_4 = VAR_3->queuedata;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4->lock, VAR_5);

 if (VAR_4->recovery_needed || !VAR_4->use_cqe)
  VAR_6 = VAR_0;
 else
  VAR_6 = FUNC_0(VAR_1);

 FUNC_2(&VAR_4->lock, VAR_5);

 return VAR_6;
}
