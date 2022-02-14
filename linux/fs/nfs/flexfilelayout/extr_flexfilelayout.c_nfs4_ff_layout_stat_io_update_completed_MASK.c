
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ff_io_stat {void* aggregate_completion_time; void* total_busy_time; int bytes_not_delivered; int bytes_completed; int ops_completed; } ;
struct nfs4_ff_layoutstat {int busy_timer; struct nfs4_ff_io_stat io_stat; } ;
typedef int ktime_t ;
typedef scalar_t__ __u64 ;


 void* FUNC_0 (void*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct nfs4_ff_layoutstat *VAR_0,
  __u64 VAR_1,
  __u64 VAR_2,
  ktime_t VAR_3,
  ktime_t VAR_4)
{
 struct nfs4_ff_io_stat *VAR_5 = &VAR_0->io_stat;
 ktime_t VAR_6 = FUNC_1(VAR_3, VAR_4);
 ktime_t VAR_7;

 VAR_5->ops_completed++;
 VAR_5->bytes_completed += VAR_2;
 VAR_5->bytes_not_delivered += VAR_1 - VAR_2;

 VAR_7 = FUNC_2(&VAR_0->busy_timer, VAR_3);
 VAR_5->total_busy_time =
   FUNC_0(VAR_5->total_busy_time, VAR_7);
 VAR_5->aggregate_completion_time =
   FUNC_0(VAR_5->aggregate_completion_time,
     VAR_6);
}
