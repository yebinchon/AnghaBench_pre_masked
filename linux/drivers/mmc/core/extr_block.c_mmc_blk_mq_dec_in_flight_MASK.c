
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mmc_queue {int* in_flight; int ctx; int card; int lock; } ;


 size_t FUNC_0 (struct mmc_queue*,struct request*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct mmc_queue*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct mmc_queue *VAR_0, struct request *VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3;

 FUNC_3(&VAR_0->lock, VAR_2);

 VAR_0->in_flight[FUNC_0(VAR_0, VAR_1)] -= 1;

 VAR_3 = (FUNC_2(VAR_0) == 0);

 FUNC_4(&VAR_0->lock, VAR_2);

 if (VAR_3)
  FUNC_1(VAR_0->card, &VAR_0->ctx);
}
