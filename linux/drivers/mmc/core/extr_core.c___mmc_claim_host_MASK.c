
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mmc_host {int claimed; int claim_cnt; int wq; int lock; } ;
struct mmc_ctx {int dummy; } ;
typedef int atomic_t ;


 int FUNC_0 (int ,struct task_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 struct task_struct* VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct mmc_host*,struct mmc_ctx*,struct task_struct*) ;
 int FUNC_5 (struct mmc_host*,struct mmc_ctx*,struct task_struct*) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int VAR_3 ;
 int FUNC_13 (int *) ;

int FUNC_14(struct mmc_host *VAR_4, struct mmc_ctx *VAR_5,
       atomic_t *VAR_6)
{
 struct task_struct *VAR_7 = VAR_5 ? ((void*)0) : VAR_2;
 FUNC_0(VAR_3, VAR_2);
 unsigned long VAR_8;
 int VAR_9;
 bool VAR_10 = 0;

 FUNC_3();

 FUNC_1(&VAR_4->wq, &VAR_3);
 FUNC_11(&VAR_4->lock, VAR_8);
 while (1) {
  FUNC_10(VAR_1);
  VAR_9 = VAR_6 ? FUNC_2(VAR_6) : 0;
  if (VAR_9 || !VAR_4->claimed || FUNC_4(VAR_4, VAR_5, VAR_7))
   break;
  FUNC_12(&VAR_4->lock, VAR_8);
  FUNC_9();
  FUNC_11(&VAR_4->lock, VAR_8);
 }
 FUNC_10(VAR_0);
 if (!VAR_9) {
  VAR_4->claimed = 1;
  FUNC_5(VAR_4, VAR_5, VAR_7);
  VAR_4->claim_cnt += 1;
  if (VAR_4->claim_cnt == 1)
   VAR_10 = 1;
 } else
  FUNC_13(&VAR_4->wq);
 FUNC_12(&VAR_4->lock, VAR_8);
 FUNC_8(&VAR_4->wq, &VAR_3);

 if (VAR_10)
  FUNC_7(FUNC_6(VAR_4));

 return VAR_9;
}
