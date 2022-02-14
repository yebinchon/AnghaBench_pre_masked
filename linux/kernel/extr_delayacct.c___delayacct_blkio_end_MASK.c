
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct task_struct {struct task_delay_info* delays; } ;
struct task_delay_info {int flags; int blkio_start; int lock; int blkio_count; int blkio_delay; int swapin_count; int swapin_delay; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int *) ;

void FUNC_1(struct task_struct *VAR_1)
{
 struct task_delay_info *VAR_2 = VAR_1->delays;
 u64 *VAR_3;
 u32 *VAR_4;

 if (VAR_1->delays->flags & VAR_0) {
  VAR_3 = &VAR_2->swapin_delay;
  VAR_4 = &VAR_2->swapin_count;
 } else {
  VAR_3 = &VAR_2->blkio_delay;
  VAR_4 = &VAR_2->blkio_count;
 }

 FUNC_0(&VAR_2->lock, &VAR_2->blkio_start, VAR_3, VAR_4);
}
