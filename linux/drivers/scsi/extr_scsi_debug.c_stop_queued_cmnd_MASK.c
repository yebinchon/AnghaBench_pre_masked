
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdebug_queued_cmd {struct sdebug_defer* sd_dp; struct scsi_cmnd* a_cmnd; } ;
struct sdebug_queue {int qc_lock; int in_use_bm; struct sdebug_queued_cmd* qc_arr; } ;
struct sdebug_dev_info {int num_in_q; } ;
struct sdebug_defer {int defer_t; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
typedef enum sdeb_defer_type { ____Placeholder_sdeb_defer_type } sdeb_defer_type ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sdebug_queue* VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct sdebug_defer*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int,int ) ;

__attribute__((used)) static bool FUNC_7(struct scsi_cmnd *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 enum sdeb_defer_type VAR_11;
 struct sdebug_queue *VAR_12;
 struct sdebug_queued_cmd *VAR_13;
 struct sdebug_dev_info *VAR_14;
 struct sdebug_defer *VAR_15;

 for (VAR_7 = 0, VAR_12 = VAR_3; VAR_7 < VAR_4; ++VAR_7, ++VAR_12) {
  FUNC_3(&VAR_12->qc_lock, VAR_6);
  VAR_9 = VAR_2;
  VAR_10 = FUNC_1(&VAR_1);
  if (VAR_10 > VAR_9)
   VAR_9 = VAR_10;
  for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
   if (FUNC_6(VAR_8, VAR_12->in_use_bm)) {
    VAR_13 = &VAR_12->qc_arr[VAR_8];
    if (VAR_5 != VAR_13->a_cmnd)
     continue;

    VAR_14 = (struct sdebug_dev_info *)
      VAR_5->device->hostdata;
    if (VAR_14)
     FUNC_0(&VAR_14->num_in_q);
    VAR_13->a_cmnd = ((void*)0);
    VAR_15 = VAR_13->sd_dp;
    if (VAR_15) {
     VAR_11 = VAR_15->defer_t;
     VAR_15->defer_t = VAR_0;
    } else
     VAR_11 = VAR_0;
    FUNC_4(&VAR_12->qc_lock, VAR_6);
    FUNC_5(VAR_15, VAR_11);
    FUNC_2(VAR_8, VAR_12->in_use_bm);
    return 1;
   }
  }
  FUNC_4(&VAR_12->qc_lock, VAR_6);
 }
 return 0;
}
