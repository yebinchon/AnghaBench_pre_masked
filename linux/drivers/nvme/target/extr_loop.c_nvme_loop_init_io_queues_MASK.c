
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvmf_ctrl_options {int nr_io_queues; } ;
struct TYPE_4__ {int queue_count; int device; struct nvmf_ctrl_options* opts; } ;
struct nvme_loop_ctrl {TYPE_2__ ctrl; TYPE_1__* queues; } ;
struct TYPE_3__ {int nvme_sq; struct nvme_loop_ctrl* ctrl; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct nvme_loop_ctrl*) ;
 int FUNC_4 (TYPE_2__*,unsigned int*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct nvme_loop_ctrl *VAR_0)
{
 struct nvmf_ctrl_options *VAR_1 = VAR_0->ctrl.opts;
 unsigned int VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_1(VAR_1->nr_io_queues, FUNC_2());
 VAR_3 = FUNC_4(&VAR_0->ctrl, &VAR_2);
 if (VAR_3 || !VAR_2)
  return VAR_3;

 FUNC_0(VAR_0->ctrl.device, "creating %d I/O queues.\n", VAR_2);

 for (VAR_4 = 1; VAR_4 <= VAR_2; VAR_4++) {
  VAR_0->queues[VAR_4].ctrl = VAR_0;
  VAR_3 = FUNC_5(&VAR_0->queues[VAR_4].nvme_sq);
  if (VAR_3)
   goto out_destroy_queues;

  VAR_0->ctrl.queue_count++;
 }

 return 0;

out_destroy_queues:
 FUNC_3(VAR_0);
 return VAR_3;
}
