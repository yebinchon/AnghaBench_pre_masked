
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct misc_stats {int corr_work_done; int max_isr_time_ms; int max_isr_jiffies; } ;
struct TYPE_2__ {struct misc_stats misc_stats; } ;
struct fnic {unsigned int wq_copy_count; unsigned int raw_wq_count; unsigned int rq_count; int * cq; TYPE_1__ fnic_stats; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (int *,int ,int) ;

int FUNC_4(struct fnic *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7;
 struct misc_stats *VAR_8 = &VAR_2->fnic_stats.misc_stats;
 u64 VAR_9 = 0;
 u64 VAR_10 = 0;
 u64 VAR_11 = 0;
 u64 VAR_12 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->wq_copy_count; VAR_5++) {
  VAR_6 = VAR_5 + VAR_2->raw_wq_count + VAR_2->rq_count;

  VAR_9 = VAR_1;
  VAR_7 = FUNC_3(&VAR_2->cq[VAR_6],
           VAR_0,
           VAR_3);
  VAR_10 = VAR_1;

  VAR_4 += VAR_7;
  VAR_11 = VAR_10 - VAR_9;
  if (VAR_11 >
   (u64) FUNC_0(&VAR_8->max_isr_jiffies)) {
   FUNC_1(&VAR_8->max_isr_jiffies,
     VAR_11);
   VAR_12 = FUNC_2(VAR_11);
   FUNC_1(&VAR_8->max_isr_time_ms, VAR_12);
   FUNC_1(&VAR_8->corr_work_done,
     VAR_7);
  }
 }
 return VAR_4;
}
