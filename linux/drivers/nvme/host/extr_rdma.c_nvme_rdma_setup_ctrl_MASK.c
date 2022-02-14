
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sgls; scalar_t__ sqsize; scalar_t__ maxcmd; int queue_count; scalar_t__ state; int device; TYPE_1__* opts; scalar_t__ icdoff; } ;
struct nvme_rdma_ctrl {int use_inline_data; int * queues; TYPE_2__ ctrl; } ;
struct TYPE_4__ {scalar_t__ queue_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct nvme_rdma_ctrl*,int) ;
 int FUNC_5 (struct nvme_rdma_ctrl*,int) ;
 int FUNC_6 (struct nvme_rdma_ctrl*,int) ;
 int FUNC_7 (struct nvme_rdma_ctrl*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(struct nvme_rdma_ctrl *VAR_3, bool VAR_4)
{
 int VAR_5 = -VAR_0;
 bool VAR_6;

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_3->ctrl.icdoff) {
  FUNC_1(VAR_3->ctrl.device, "icdoff is not supported!\n");
  goto destroy_admin;
 }

 if (!(VAR_3->ctrl.sgls & (1 << 2))) {
  FUNC_1(VAR_3->ctrl.device,
   "Mandatory keyed sgls are not supported!\n");
  goto destroy_admin;
 }

 if (VAR_3->ctrl.opts->queue_size > VAR_3->ctrl.sqsize + 1) {
  FUNC_2(VAR_3->ctrl.device,
   "queue_size %zu > ctrl sqsize %u, clamping down\n",
   VAR_3->ctrl.opts->queue_size, VAR_3->ctrl.sqsize + 1);
 }

 if (VAR_3->ctrl.sqsize + 1 > VAR_3->ctrl.maxcmd) {
  FUNC_2(VAR_3->ctrl.device,
   "sqsize %u > ctrl maxcmd %u, clamping down\n",
   VAR_3->ctrl.sqsize + 1, VAR_3->ctrl.maxcmd);
  VAR_3->ctrl.sqsize = VAR_3->ctrl.maxcmd - 1;
 }

 if (VAR_3->ctrl.sgls & (1 << 20))
  VAR_3->use_inline_data = 1;

 if (VAR_3->ctrl.queue_count > 1) {
  VAR_5 = FUNC_5(VAR_3, VAR_4);
  if (VAR_5)
   goto destroy_admin;
 }

 VAR_6 = FUNC_3(&VAR_3->ctrl, VAR_2);
 if (!VAR_6) {

  FUNC_0(VAR_3->ctrl.state != VAR_1);
  VAR_5 = -VAR_0;
  goto destroy_io;
 }

 FUNC_9(&VAR_3->ctrl);
 return 0;

destroy_io:
 if (VAR_3->ctrl.queue_count > 1)
  FUNC_7(VAR_3, VAR_4);
destroy_admin:
 FUNC_8(&VAR_3->queues[0]);
 FUNC_6(VAR_3, VAR_4);
 return VAR_5;
}
