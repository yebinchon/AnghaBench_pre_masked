
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct dasd_block {TYPE_1__ profile; int timer; int queue_lock; int ccw_queue; int tasklet; int tasklet_scheduled; int open_count; } ;


 int VAR_0 ;
 struct dasd_block* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct dasd_block* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 int FUNC_6 (int *,int ,int ) ;

struct dasd_block *FUNC_7(void)
{
 struct dasd_block *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_4->open_count, -1);

 FUNC_2(&VAR_4->tasklet_scheduled, 0);
 FUNC_5(&VAR_4->tasklet, VAR_2,
       (unsigned long) VAR_4);
 FUNC_1(&VAR_4->ccw_queue);
 FUNC_4(&VAR_4->queue_lock);
 FUNC_6(&VAR_4->timer, VAR_3, 0);
 FUNC_4(&VAR_4->profile.lock);

 return VAR_4;
}
