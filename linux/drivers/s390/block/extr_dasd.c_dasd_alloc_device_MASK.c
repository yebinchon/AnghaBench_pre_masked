
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct dasd_device {TYPE_1__ profile; int state_mutex; void* target; void* state; int requeue_requests; int reload_device; int restore_device; int kick_work; int timer; int ccw_queue; int tasklet; int tasklet_scheduled; int mem_lock; void* ese_mem; int ese_chunks; void* erp_mem; int erp_chunks; void* ccw_mem; int ccw_chunks; } ;


 void* VAR_0 ;
 int VAR_1 ;
 struct dasd_device* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,void*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct dasd_device*) ;
 struct dasd_device* FUNC_10 (int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,unsigned long) ;
 int FUNC_14 (int *,int ,int ) ;

struct dasd_device *FUNC_15(void)
{
 struct dasd_device *VAR_11;

 VAR_11 = FUNC_10(sizeof(struct dasd_device), VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);


 VAR_11->ccw_mem = (void *) FUNC_3(VAR_2 | VAR_3, 1);
 if (!VAR_11->ccw_mem) {
  FUNC_9(VAR_11);
  return FUNC_0(-VAR_1);
 }

 VAR_11->erp_mem = (void *) FUNC_8(VAR_2 | VAR_3);
 if (!VAR_11->erp_mem) {
  FUNC_7((unsigned long) VAR_11->ccw_mem, 1);
  FUNC_9(VAR_11);
  return FUNC_0(-VAR_1);
 }

 VAR_11->ese_mem = (void *)FUNC_3(VAR_2 | VAR_3, 1);
 if (!VAR_11->ese_mem) {
  FUNC_6((unsigned long) VAR_11->erp_mem);
  FUNC_7((unsigned long) VAR_11->ccw_mem, 1);
  FUNC_9(VAR_11);
  return FUNC_0(-VAR_1);
 }

 FUNC_5(&VAR_11->ccw_chunks, VAR_11->ccw_mem, VAR_4*2);
 FUNC_5(&VAR_11->erp_chunks, VAR_11->erp_mem, VAR_4);
 FUNC_5(&VAR_11->ese_chunks, VAR_11->ese_mem, VAR_4 * 2);
 FUNC_12(&VAR_11->mem_lock);
 FUNC_4(&VAR_11->tasklet_scheduled, 0);
 FUNC_13(&VAR_11->tasklet, VAR_5,
       (unsigned long) VAR_11);
 FUNC_1(&VAR_11->ccw_queue);
 FUNC_14(&VAR_11->timer, VAR_6, 0);
 FUNC_2(&VAR_11->kick_work, VAR_7);
 FUNC_2(&VAR_11->restore_device, VAR_10);
 FUNC_2(&VAR_11->reload_device, VAR_8);
 FUNC_2(&VAR_11->requeue_requests, VAR_9);
 VAR_11->state = VAR_0;
 VAR_11->target = VAR_0;
 FUNC_11(&VAR_11->state_mutex);
 FUNC_12(&VAR_11->profile.lock);
 return VAR_11;
}
