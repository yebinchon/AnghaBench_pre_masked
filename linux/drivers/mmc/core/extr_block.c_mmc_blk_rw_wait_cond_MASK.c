
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_queue {int waiting; int lock; int rw_wait; scalar_t__ recovery_needed; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct mmc_queue *VAR_1, int *VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4;





 FUNC_0(&VAR_1->lock, VAR_3);
 if (VAR_1->recovery_needed) {
  *VAR_2 = -VAR_0;
  VAR_4 = 1;
 } else {
  VAR_4 = !VAR_1->rw_wait;
 }
 VAR_1->waiting = !VAR_4;
 FUNC_1(&VAR_1->lock, VAR_3);

 return VAR_4;
}
