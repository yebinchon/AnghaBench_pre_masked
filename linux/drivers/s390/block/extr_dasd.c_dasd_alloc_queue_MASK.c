
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dasd_ccw_req {int dummy; } ;
struct TYPE_7__ {int cmd_size; int numa_node; int flags; int queue_depth; int nr_hw_queues; int * ops; } ;
struct dasd_block {TYPE_1__* request_queue; TYPE_2__ tag_set; } ;
struct TYPE_6__ {struct dasd_block* queuedata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct dasd_block *VAR_5)
{
 int VAR_6;

 VAR_5->tag_set.ops = &VAR_2;
 VAR_5->tag_set.cmd_size = sizeof(struct dasd_ccw_req);
 VAR_5->tag_set.nr_hw_queues = VAR_3;
 VAR_5->tag_set.queue_depth = VAR_4;
 VAR_5->tag_set.flags = VAR_0;
 VAR_5->tag_set.numa_node = VAR_1;

 VAR_6 = FUNC_2(&VAR_5->tag_set);
 if (VAR_6)
  return VAR_6;

 VAR_5->request_queue = FUNC_3(&VAR_5->tag_set);
 if (FUNC_0(VAR_5->request_queue))
  return FUNC_1(VAR_5->request_queue);

 VAR_5->request_queue->queuedata = VAR_5;

 return 0;
}
