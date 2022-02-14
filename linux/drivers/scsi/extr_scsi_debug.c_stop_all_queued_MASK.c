
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdebug_queued_cmd {struct sdebug_defer* sd_dp; TYPE_2__* a_cmnd; } ;
struct sdebug_queue {int qc_lock; int in_use_bm; struct sdebug_queued_cmd* qc_arr; } ;
struct sdebug_dev_info {int num_in_q; } ;
struct sdebug_defer {int defer_t; } ;
typedef enum sdeb_defer_type { ____Placeholder_sdeb_defer_type } sdeb_defer_type ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 struct sdebug_queue* VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct sdebug_defer*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6;
 enum sdeb_defer_type VAR_7;
 struct sdebug_queue *VAR_8;
 struct sdebug_queued_cmd *VAR_9;
 struct sdebug_dev_info *VAR_10;
 struct sdebug_defer *VAR_11;

 for (VAR_5 = 0, VAR_8 = VAR_2; VAR_5 < VAR_3; ++VAR_5, ++VAR_8) {
  FUNC_2(&VAR_8->qc_lock, VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
   if (FUNC_5(VAR_6, VAR_8->in_use_bm)) {
    VAR_9 = &VAR_8->qc_arr[VAR_6];
    if (VAR_9->a_cmnd == ((void*)0))
     continue;
    VAR_10 = (struct sdebug_dev_info *)
     VAR_9->a_cmnd->device->hostdata;
    if (VAR_10)
     FUNC_0(&VAR_10->num_in_q);
    VAR_9->a_cmnd = ((void*)0);
    VAR_11 = VAR_9->sd_dp;
    if (VAR_11) {
     VAR_7 = VAR_11->defer_t;
     VAR_11->defer_t = VAR_1;
    } else
     VAR_7 = VAR_1;
    FUNC_3(&VAR_8->qc_lock, VAR_4);
    FUNC_4(VAR_11, VAR_7);
    FUNC_1(VAR_6, VAR_8->in_use_bm);
    FUNC_2(&VAR_8->qc_lock, VAR_4);
   }
  }
  FUNC_3(&VAR_8->qc_lock, VAR_4);
 }
}
