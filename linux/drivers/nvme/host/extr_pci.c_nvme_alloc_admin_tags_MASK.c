
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvme_iod {int dummy; } ;
struct TYPE_5__ {int * admin_q; TYPE_2__* admin_tagset; } ;
struct TYPE_6__ {int nr_hw_queues; int cmd_size; struct nvme_dev* driver_data; int flags; int numa_node; int timeout; int queue_depth; int * ops; } ;
struct nvme_dev {TYPE_1__ ctrl; TYPE_2__ admin_tagset; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nvme_dev*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct nvme_dev *VAR_6)
{
 if (!VAR_6->ctrl.admin_q) {
  VAR_6->admin_tagset.ops = &VAR_5;
  VAR_6->admin_tagset.nr_hw_queues = 1;

  VAR_6->admin_tagset.queue_depth = VAR_4;
  VAR_6->admin_tagset.timeout = VAR_0;
  VAR_6->admin_tagset.numa_node = FUNC_6(VAR_6->dev);
  VAR_6->admin_tagset.cmd_size = sizeof(struct nvme_iod);
  VAR_6->admin_tagset.flags = VAR_1;
  VAR_6->admin_tagset.driver_data = VAR_6;

  if (FUNC_2(&VAR_6->admin_tagset))
   return -VAR_3;
  VAR_6->ctrl.admin_tagset = &VAR_6->admin_tagset;

  VAR_6->ctrl.admin_q = FUNC_4(&VAR_6->admin_tagset);
  if (FUNC_0(VAR_6->ctrl.admin_q)) {
   FUNC_3(&VAR_6->admin_tagset);
   return -VAR_3;
  }
  if (!FUNC_1(VAR_6->ctrl.admin_q)) {
   FUNC_7(VAR_6);
   VAR_6->ctrl.admin_q = ((void*)0);
   return -VAR_2;
  }
 } else
  FUNC_5(VAR_6->ctrl.admin_q);

 return 0;
}
